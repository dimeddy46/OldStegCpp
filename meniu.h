#pragma once

namespace Steg11 {

	public ref class meniu : public System::Windows::Forms::Form
	{
		public:
			meniu(void)
			{
				InitializeComponent();

			}
		protected:
			~meniu()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^  btnAscTxt;
		private: System::Windows::Forms::Button^  btnExtTxt;
		private: System::Windows::Forms::Button^  btnAscImg;
		private: System::Windows::Forms::Button^  btnExtImg;
		private: System::Windows::Forms::Label^  titluTxt;
		private:
			System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
			void InitializeComponent(void)
			{
				this->btnAscTxt = (gcnew System::Windows::Forms::Button());
				this->btnExtTxt = (gcnew System::Windows::Forms::Button());
				this->btnAscImg = (gcnew System::Windows::Forms::Button());
				this->btnExtImg = (gcnew System::Windows::Forms::Button());
				this->titluTxt = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// btnAscTxt
				// 
				this->btnAscTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnAscTxt->Location = System::Drawing::Point(34, 73);
				this->btnAscTxt->Name = L"btnAscTxt";
				this->btnAscTxt->Size = System::Drawing::Size(171, 32);
				this->btnAscTxt->TabIndex = 0;
				this->btnAscTxt->Text = L"Ascundere text";
				this->btnAscTxt->UseVisualStyleBackColor = true;
				this->btnAscTxt->Click += gcnew System::EventHandler(this, &meniu::btnAscTxt_Click);
				// 
				// btnExtTxt
				// 
				this->btnExtTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnExtTxt->Location = System::Drawing::Point(244, 73);
				this->btnExtTxt->Name = L"btnExtTxt";
				this->btnExtTxt->Size = System::Drawing::Size(171, 32);
				this->btnExtTxt->TabIndex = 1;
				this->btnExtTxt->Text = L"Extragere text";
				this->btnExtTxt->UseVisualStyleBackColor = true;
				this->btnExtTxt->Click += gcnew System::EventHandler(this, &meniu::btnExtTxt_Click);
				// 
				// btnAscImg
				// 
				this->btnAscImg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnAscImg->Location = System::Drawing::Point(34, 145);
				this->btnAscImg->Name = L"btnAscImg";
				this->btnAscImg->Size = System::Drawing::Size(171, 32);
				this->btnAscImg->TabIndex = 2;
				this->btnAscImg->Text = L"Ascundere imagine";
				this->btnAscImg->UseVisualStyleBackColor = true;
				this->btnAscImg->Click += gcnew System::EventHandler(this, &meniu::btnAscImg_Click);
				// 
				// btnExtImg
				// 
				this->btnExtImg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnExtImg->Location = System::Drawing::Point(244, 145);
				this->btnExtImg->Name = L"btnExtImg";
				this->btnExtImg->Size = System::Drawing::Size(171, 32);
				this->btnExtImg->TabIndex = 3;
				this->btnExtImg->Text = L"Extragere imagine";
				this->btnExtImg->UseVisualStyleBackColor = true;
				this->btnExtImg->Click += gcnew System::EventHandler(this, &meniu::btnExtImg_Click);
				// 
				// titluTxt
				// 
				this->titluTxt->Dock = System::Windows::Forms::DockStyle::Top;
				this->titluTxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->titluTxt->Location = System::Drawing::Point(0, 0);
				this->titluTxt->Name = L"titluTxt";
				this->titluTxt->Size = System::Drawing::Size(454, 22);
				this->titluTxt->TabIndex = 4;
				this->titluTxt->Text = L"Meniu";
				this->titluTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// meniu
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(454, 257);
				this->Controls->Add(this->titluTxt);
				this->Controls->Add(this->btnExtImg);
				this->Controls->Add(this->btnAscImg);
				this->Controls->Add(this->btnExtTxt);
				this->Controls->Add(this->btnAscTxt);
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->MaximizeBox = false;
				this->Name = L"meniu";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"StegLSB";
				this->ResumeLayout(false);

			}
	#pragma endregion

		private: System::Void sterge() 
		{
			cover.release();
			msg.release();
			secretMsg = numeCover = "";
			tries = 0;
		}
		private: System::Void btnExtTxt_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Hide();
			extText d;
		
			d.ShowDialog();
			sterge();
			this->Show();
		}
		private: System::Void btnAscTxt_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Hide();
			ascText d;
			d.ShowDialog();
			sterge();
			this->Show();
		}
		private: System::Void btnAscImg_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Hide();
			ascImg d;
			d.ShowDialog();
			sterge();
			this->Show();
		}
		private: System::Void btnExtImg_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Hide();
			extImg d;
			d.ShowDialog();
			sterge();
			this->Show();
		}
	};
}
