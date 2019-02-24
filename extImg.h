#pragma once

namespace Steg11 {

	public ref class extImg : public System::Windows::Forms::Form
	{
		public:
			extImg(void)
			{
				InitializeComponent();
			}

		protected:
			~extImg()
			{
				System::Console::WriteLine("extImg");
				if (components)
				{
					delete components;
				}
			}

		private: System::Windows::Forms::TextBox^  pwdInput;
		private: System::Windows::Forms::Button^  btnBack;
		private: System::Windows::Forms::Button^  btnConfirm;
		private: System::Windows::Forms::PictureBox^  coverIMG;
		private: System::Windows::Forms::Label^  coverTxt;
		private: System::Windows::Forms::Button^  btnCover;
		private: System::Windows::Forms::Label^  pwdText;
		private: System::Windows::Forms::Label^  titluTxt;
		private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
		private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
		private: System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
				 void InitializeComponent(void)
				 {
					 this->pwdInput = (gcnew System::Windows::Forms::TextBox());
					 this->btnBack = (gcnew System::Windows::Forms::Button());
					 this->btnConfirm = (gcnew System::Windows::Forms::Button());
					 this->coverIMG = (gcnew System::Windows::Forms::PictureBox());
					 this->coverTxt = (gcnew System::Windows::Forms::Label());
					 this->btnCover = (gcnew System::Windows::Forms::Button());
					 this->pwdText = (gcnew System::Windows::Forms::Label());
					 this->titluTxt = (gcnew System::Windows::Forms::Label());
					 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
					 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->BeginInit();
					 this->SuspendLayout();
					 // 
					 // pwdInput
					 // 
					 this->pwdInput->Location = System::Drawing::Point(317, 374);
					 this->pwdInput->Name = L"pwdInput";
					 this->pwdInput->Size = System::Drawing::Size(144, 20);
					 this->pwdInput->TabIndex = 31;
					 // 
					 // btnBack
					 // 
					 this->btnBack->Location = System::Drawing::Point(41, 399);
					 this->btnBack->Name = L"btnBack";
					 this->btnBack->Size = System::Drawing::Size(75, 23);
					 this->btnBack->TabIndex = 30;
					 this->btnBack->Text = L"Inapoi";
					 this->btnBack->UseVisualStyleBackColor = true;
					 this->btnBack->Click += gcnew System::EventHandler(this, &extImg::btnBack_Click);
					 // 
					 // btnConfirm
					 // 
					 this->btnConfirm->Location = System::Drawing::Point(596, 399);
					 this->btnConfirm->Name = L"btnConfirm";
					 this->btnConfirm->Size = System::Drawing::Size(75, 23);
					 this->btnConfirm->TabIndex = 29;
					 this->btnConfirm->Text = L"Confirmare";
					 this->btnConfirm->UseVisualStyleBackColor = true;
					 this->btnConfirm->Click += gcnew System::EventHandler(this, &extImg::btnConfirm_Click);
					 // 
					 // coverIMG
					 // 
					 this->coverIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					 this->coverIMG->Location = System::Drawing::Point(163, 104);
					 this->coverIMG->Name = L"coverIMG";
					 this->coverIMG->Size = System::Drawing::Size(383, 235);
					 this->coverIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					 this->coverIMG->TabIndex = 28;
					 this->coverIMG->TabStop = false;
					 // 
					 // coverTxt
					 // 
					 this->coverTxt->AutoSize = true;
					 this->coverTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->coverTxt->Location = System::Drawing::Point(284, 64);
					 this->coverTxt->Name = L"coverTxt";
					 this->coverTxt->Size = System::Drawing::Size(60, 16);
					 this->coverTxt->TabIndex = 27;
					 this->coverTxt->Text = L"Selectie:";
					 this->coverTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // btnCover
					 // 
					 this->btnCover->Location = System::Drawing::Point(287, 38);
					 this->btnCover->Name = L"btnCover";
					 this->btnCover->Size = System::Drawing::Size(113, 23);
					 this->btnCover->TabIndex = 26;
					 this->btnCover->Text = L"Alege cover";
					 this->btnCover->UseVisualStyleBackColor = true;
					 this->btnCover->Click += gcnew System::EventHandler(this, &extImg::btnCover_Click);
					 // 
					 // pwdText
					 // 
					 this->pwdText->AutoSize = true;
					 this->pwdText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->pwdText->Location = System::Drawing::Point(240, 378);
					 this->pwdText->Name = L"pwdText";
					 this->pwdText->Size = System::Drawing::Size(71, 16);
					 this->pwdText->TabIndex = 34;
					 this->pwdText->Text = L"Password:";
					 // 
					 // titluTxt
					 // 
					 this->titluTxt->Dock = System::Windows::Forms::DockStyle::Top;
					 this->titluTxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->titluTxt->Location = System::Drawing::Point(0, 0);
					 this->titluTxt->Name = L"titluTxt";
					 this->titluTxt->Size = System::Drawing::Size(703, 24);
					 this->titluTxt->TabIndex = 35;
					 this->titluTxt->Text = L"Extragere imagine";
					 this->titluTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // openFileDialog1
					 // 
					 this->openFileDialog1->FileName = L"openFileDialog1";
					 // 
					 // extImg
					 // 
					 this->AcceptButton = this->btnConfirm;
					 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 this->ClientSize = System::Drawing::Size(703, 441);
					 this->Controls->Add(this->titluTxt);
					 this->Controls->Add(this->pwdText);
					 this->Controls->Add(this->pwdInput);
					 this->Controls->Add(this->btnBack);
					 this->Controls->Add(this->btnConfirm);
					 this->Controls->Add(this->coverIMG);
					 this->Controls->Add(this->coverTxt);
					 this->Controls->Add(this->btnCover);
					 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					 this->MaximizeBox = false;
					 this->Name = L"extImg";
					 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					 this->Text = L"StegLSB";
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->EndInit();
					 this->ResumeLayout(false);
					 this->PerformLayout();

				 }
	#pragma endregion

		private: System::Void btnCover_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			openFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.bmp;*.png;";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) 
				return;
			
			titluTxt->Text = "Extragere imagine";
			titluTxt->BackColor = System::Drawing::Color::Empty;
			coverTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);
			std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);
			// citire imagine pe 16 biti
			cover = imread(fileName, -1);
			coverIMG->ImageLocation = openFileDialog1->FileName;

			coverTxt->Text += "\n" + cover.cols + " x " + cover.rows;
		}

		private: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			std::string pwd = marshal_as<std::string>(pwdInput->Text);

			titluTxt->BackColor = System::Drawing::Color::Red;
			if (cover.rows == 0) 
			{
				titluTxt->Text = "Nu ai selectat un cover.";
				return;
			}
			if (pwd.length() == 0) 
			{
				titluTxt->Text = "Nu ai setat password-ul.";
				return;
			}
			Mat rez;
			try 
			{
				saveFileDialog1->Filter = "Image Files(*.bmp;*.png;*.jpg)|*.bmp;*.png;*.jpg";
				if (cover.depth() == 0) 								// daca e pe 8 biti -> Hecht
					rez = extImgHecht(cover, pwd);
				else 													// altfel algoritmul de 16 biti
					rez = extImgLossless(cover, pwd);
				
			}
			catch (...) 
			{
				titluTxt->Text = "S-a produs o eroare la decodare...";
				return;
			}
			if (rez.rows == 1) 
			{
				tries++;
				titluTxt->Text = "Password-ul introdus este incorect.Incercari: " + tries;
				return;
			}

			titluTxt->BackColor = System::Drawing::Color::Empty;
			saveFileDialog1->FileName = "";
			if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK)
				return;
			std::string outFile = marshal_as<std::string>(saveFileDialog1->FileName);
			titluTxt->BackColor = System::Drawing::Color::Red;

			try 
			{
				vector<int> compr;
				compr.push_back(CV_IMWRITE_PNG_COMPRESSION);
				compr.push_back(9);
				imwrite(outFile, rez, compr);
			}
			catch (...) 
			{
				titluTxt->Text = "S-a produs o eroare la scriere...";
				return;
			}

			titluTxt->Text = "Executat cu succes!";
			titluTxt->BackColor = System::Drawing::Color::Green;
			System::Diagnostics::Process::Start(saveFileDialog1->FileName);

		}

		private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
		}
	};
}
