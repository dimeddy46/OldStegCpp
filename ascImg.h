#pragma once

namespace Steg11 {

	Mat cover, msg;
	std::string secretMsg, numeCover;
	ushort tries = 0;
	bool exe;

	using namespace msclr::interop;

	public ref class ascImg : public System::Windows::Forms::Form
	{
		private: System::Windows::Forms::ComboBox^  comboBox1;
		public:
			ascImg(void)
			{
				InitializeComponent();
				comboBox1->SelectedIndex = 0;
			}

		protected:
			~ascImg()
			{
				System::Console::WriteLine("ascImg");
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^  btnCover;
		private: System::Windows::Forms::Label^  titluTxt;
		private: System::Windows::Forms::Button^  btnMsg;
		private: System::Windows::Forms::Button^  btnConfirm;
		private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
		private: System::Windows::Forms::Label^  mesajTxt;
		private: System::Windows::Forms::Button^  btnBack;
		private: System::Windows::Forms::PictureBox^  coverIMG;
		private: System::Windows::Forms::Label^  coverTxt;
		private: System::Windows::Forms::PictureBox^  msgIMG;
		private: System::Windows::Forms::TextBox^  pwdInput;
		private: System::Windows::Forms::Label^  pwdText;

		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
		private: System::Windows::Forms::SaveFileDialog^  saveFileDialog2;
		private: System::ComponentModel::IContainer^  components;

	#pragma region Windows Form Designer generated code
				 void InitializeComponent(void)
				 {
					 this->btnCover = (gcnew System::Windows::Forms::Button());
					 this->titluTxt = (gcnew System::Windows::Forms::Label());
					 this->btnMsg = (gcnew System::Windows::Forms::Button());
					 this->btnConfirm = (gcnew System::Windows::Forms::Button());
					 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
					 this->mesajTxt = (gcnew System::Windows::Forms::Label());
					 this->btnBack = (gcnew System::Windows::Forms::Button());
					 this->coverIMG = (gcnew System::Windows::Forms::PictureBox());
					 this->coverTxt = (gcnew System::Windows::Forms::Label());
					 this->msgIMG = (gcnew System::Windows::Forms::PictureBox());
					 this->pwdInput = (gcnew System::Windows::Forms::TextBox());
					 this->pwdText = (gcnew System::Windows::Forms::Label());
					 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
					 this->label1 = (gcnew System::Windows::Forms::Label());
					 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
					 this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->BeginInit();
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->msgIMG))->BeginInit();
					 this->SuspendLayout();
					 // 
					 // btnCover
					 // 
					 this->btnCover->Location = System::Drawing::Point(123, 42);
					 this->btnCover->Name = L"btnCover";
					 this->btnCover->Size = System::Drawing::Size(140, 23);
					 this->btnCover->TabIndex = 0;
					 this->btnCover->Text = L"Selectare cover";
					 this->btnCover->UseVisualStyleBackColor = true;
					 this->btnCover->Click += gcnew System::EventHandler(this, &ascImg::btnCover_Click);
					 // 
					 // titluTxt
					 // 
					 this->titluTxt->Dock = System::Windows::Forms::DockStyle::Top;
					 this->titluTxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->titluTxt->Location = System::Drawing::Point(0, 0);
					 this->titluTxt->Name = L"titluTxt";
					 this->titluTxt->Size = System::Drawing::Size(734, 28);
					 this->titluTxt->TabIndex = 1;
					 this->titluTxt->Text = L"Ascundere imagine";
					 this->titluTxt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					 // 
					 // btnMsg
					 // 
					 this->btnMsg->Location = System::Drawing::Point(467, 42);
					 this->btnMsg->Name = L"btnMsg";
					 this->btnMsg->Size = System::Drawing::Size(140, 23);
					 this->btnMsg->TabIndex = 2;
					 this->btnMsg->Text = L"Selectare mesaj";
					 this->btnMsg->UseVisualStyleBackColor = true;
					 this->btnMsg->Click += gcnew System::EventHandler(this, &ascImg::btnMsg_Click);
					 // 
					 // btnConfirm
					 // 
					 this->btnConfirm->Location = System::Drawing::Point(624, 365);
					 this->btnConfirm->Name = L"btnConfirm";
					 this->btnConfirm->Size = System::Drawing::Size(75, 23);
					 this->btnConfirm->TabIndex = 3;
					 this->btnConfirm->Text = L"Confirmare";
					 this->btnConfirm->UseVisualStyleBackColor = true;
					 this->btnConfirm->Click += gcnew System::EventHandler(this, &ascImg::btnConfirm_Click);
					 // 
					 // openFileDialog1
					 // 
					 this->openFileDialog1->FileName = L"openFileDialog1";
					 // 
					 // mesajTxt
					 // 
					 this->mesajTxt->AutoSize = true;
					 this->mesajTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->mesajTxt->Location = System::Drawing::Point(464, 68);
					 this->mesajTxt->Name = L"mesajTxt";
					 this->mesajTxt->Size = System::Drawing::Size(60, 16);
					 this->mesajTxt->TabIndex = 5;
					 this->mesajTxt->Text = L"Selectie:";
					 this->mesajTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // btnBack
					 // 
					 this->btnBack->Location = System::Drawing::Point(39, 365);
					 this->btnBack->Name = L"btnBack";
					 this->btnBack->Size = System::Drawing::Size(75, 23);
					 this->btnBack->TabIndex = 6;
					 this->btnBack->Text = L"Inapoi";
					 this->btnBack->UseVisualStyleBackColor = true;
					 this->btnBack->Click += gcnew System::EventHandler(this, &ascImg::btnBack_Click);
					 // 
					 // coverIMG
					 // 
					 this->coverIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					 this->coverIMG->Location = System::Drawing::Point(39, 107);
					 this->coverIMG->Name = L"coverIMG";
					 this->coverIMG->Size = System::Drawing::Size(319, 203);
					 this->coverIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					 this->coverIMG->TabIndex = 7;
					 this->coverIMG->TabStop = false;
					 // 
					 // coverTxt
					 // 
					 this->coverTxt->AutoSize = true;
					 this->coverTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->coverTxt->Location = System::Drawing::Point(120, 68);
					 this->coverTxt->Name = L"coverTxt";
					 this->coverTxt->Size = System::Drawing::Size(60, 16);
					 this->coverTxt->TabIndex = 8;
					 this->coverTxt->Text = L"Selectie:";
					 this->coverTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // msgIMG
					 // 
					 this->msgIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					 this->msgIMG->Location = System::Drawing::Point(380, 107);
					 this->msgIMG->Name = L"msgIMG";
					 this->msgIMG->Size = System::Drawing::Size(319, 203);
					 this->msgIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					 this->msgIMG->TabIndex = 9;
					 this->msgIMG->TabStop = false;
					 // 
					 // pwdInput
					 // 
					 this->pwdInput->Location = System::Drawing::Point(321, 334);
					 this->pwdInput->Name = L"pwdInput";
					 this->pwdInput->Size = System::Drawing::Size(144, 20);
					 this->pwdInput->TabIndex = 10;
					 // 
					 // pwdText
					 // 
					 this->pwdText->AutoSize = true;
					 this->pwdText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->pwdText->Location = System::Drawing::Point(244, 338);
					 this->pwdText->Name = L"pwdText";
					 this->pwdText->Size = System::Drawing::Size(71, 16);
					 this->pwdText->TabIndex = 12;
					 this->pwdText->Text = L"Password:";
					 // 
					 // comboBox1
					 // 
					 this->comboBox1->CausesValidation = false;
					 this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
					 this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->comboBox1->FormattingEnabled = true;
					 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Hecht", L"Lossless" });
					 this->comboBox1->Location = System::Drawing::Point(321, 367);
					 this->comboBox1->Name = L"comboBox1";
					 this->comboBox1->Size = System::Drawing::Size(144, 24);
					 this->comboBox1->TabIndex = 14;
					 // 
					 // label1
					 // 
					 this->label1->AutoSize = true;
					 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->label1->Location = System::Drawing::Point(210, 372);
					 this->label1->Name = L"label1";
					 this->label1->Size = System::Drawing::Size(105, 16);
					 this->label1->TabIndex = 15;
					 this->label1->Text = L"Mod ascundere:";
					 // 
					 // ascImg
					 // 
					 this->AcceptButton = this->btnConfirm;
					 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 this->AutoSize = true;
					 this->ClientSize = System::Drawing::Size(734, 419);
					 this->Controls->Add(this->label1);
					 this->Controls->Add(this->comboBox1);
					 this->Controls->Add(this->pwdText);
					 this->Controls->Add(this->pwdInput);
					 this->Controls->Add(this->msgIMG);
					 this->Controls->Add(this->coverIMG);
					 this->Controls->Add(this->btnMsg);
					 this->Controls->Add(this->btnCover);
					 this->Controls->Add(this->coverTxt);
					 this->Controls->Add(this->btnBack);
					 this->Controls->Add(this->mesajTxt);
					 this->Controls->Add(this->btnConfirm);
					 this->Controls->Add(this->titluTxt);
					 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					 this->MaximizeBox = false;
					 this->Name = L"ascImg";
					 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
					 this->Text = L"StegLSB";
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->EndInit();
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->msgIMG))->EndInit();
					 this->ResumeLayout(false);
					 this->PerformLayout();

				 }
	#pragma endregion

		private: System::Void btnCover_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			openFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.BMP;*.PNG;";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) 
				return;
			
			titluTxt->Text = "Ascundere imagine";
			titluTxt->BackColor = System::Drawing::Color::Empty;
			coverTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);
			std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);
			cover = imread(fileName);
			coverIMG->ImageLocation = openFileDialog1->FileName;
			numeCover = fileName;

			coverTxt->Text += "\n" + cover.cols + " x " + cover.rows;
		}

		private: System::Void btnMsg_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			openFileDialog1->Filter = "Image Files(*.bmp;*.png;*.jpg;*.jpeg)|*.BMP;*.PNG;*.JPG;*.JPEG";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) 
				return;
			
			titluTxt->Text = "Ascundere imagine";
			titluTxt->BackColor = System::Drawing::Color::Empty;
			mesajTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);

			//  System::String^ ----> std::string
			std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);

			/* // std::string ----> System::String^
			std::string rezolutie = "\n"+to_string(msg.cols) + " x " + to_string(msg.rows);
			System::String^ str2 = gcnew System::String(rezolutie.c_str()); 
			*/

			msg = imread(fileName);
			msgIMG->ImageLocation = openFileDialog1->FileName;
			mesajTxt->Text += "\n" + msg.cols + " x " + msg.rows;

		}
		private: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			std::string pwd = marshal_as<std::string>(pwdInput->Text);
			titluTxt->BackColor = System::Drawing::Color::Red;

			if (cover.rows == 0 || msg.rows == 0) 
			{
				titluTxt->Text = "Nu ai selectat o imagine pentru cover / mesaj.";
				return;
			}
			if (pwd.length() < 5) 
			{
				titluTxt->Text = "Introdu un password de minim 5 litere.";
				return;
			}
			if (msg.rows >= cover.rows || msg.cols >= cover.cols) 
			{
				titluTxt->Text = "Coverul este mai mic decat sursa mesajului. Alege alt cover.";
				return;
			}

			Mat rez, msgCp;
			msg.copyTo(msgCp);
			try {
				if (comboBox1->SelectedIndex == 0)				// SELECTIE HECHT
				{
					saveFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.bmp;*.png;";
					rez = ascImgHecht(msg, cover, pwd);
					if (rez.rows == 1)
					{
						titluTxt->Text = "(Hecht) Coverul trebuie sa fie mai mare. Alege alt cover.";
						return;
					}
				}
				else if (comboBox1->SelectedIndex == 1)			// SELECTIE 16 BITI
				{
					saveFileDialog1->Filter = "Image Files(*.png)|*.png;";
					rez = ascImgLossless(msg, cover, pwd);
				}
			}
			catch (...) 
			{
				titluTxt->Text = "S-a produs o eroare la citire...";
				return;
			}
			msgCp.copyTo(msg);

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

			System::String^ covFileName = gcnew System::String(numeCover.c_str());
			System::Diagnostics::Process::Start(saveFileDialog1->FileName);
			System::Diagnostics::Process::Start(covFileName);
			titluTxt->Text = "Executat cu succes!";
			titluTxt->BackColor = System::Drawing::Color::Green;
		
		}

		private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
		}
	};
}
