#pragma once

namespace Steg11 {

	public ref class ascText : public System::Windows::Forms::Form
	{
		public:
			ascText(void)
			{
				InitializeComponent();
			}

		protected:
			~ascText()
			{
				System::Console::WriteLine("ascText");
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^  titluTxt;
		private: System::Windows::Forms::Button^  btnCover;
		private: System::Windows::Forms::Label^  coverTxt;
		private: System::Windows::Forms::TextBox^  msgBox;
		private: System::Windows::Forms::PictureBox^  coverIMG;

		private: System::Windows::Forms::Label^  pwdText;

		private: System::Windows::Forms::TextBox^  pwdInput;
		private: System::Windows::Forms::Button^  btnBack;
		private: System::Windows::Forms::Button^  btnConfirm;
		private: System::Windows::Forms::Label^  msgTxt;
		private: System::Windows::Forms::RadioButton^  tastRad;
		private: System::Windows::Forms::RadioButton^  fileRad;
		private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
		private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
		private: System::ComponentModel::Container ^components;

	#pragma region Windows Form Designer generated code
				 /// <summary>
				 /// Required method for Designer support - do not modify
				 /// the contents of this method with the code editor.
				 /// </summary>
				 void InitializeComponent(void)
				 {
					 this->titluTxt = (gcnew System::Windows::Forms::Label());
					 this->btnCover = (gcnew System::Windows::Forms::Button());
					 this->coverTxt = (gcnew System::Windows::Forms::Label());
					 this->msgBox = (gcnew System::Windows::Forms::TextBox());
					 this->coverIMG = (gcnew System::Windows::Forms::PictureBox());
					 this->pwdText = (gcnew System::Windows::Forms::Label());
					 this->pwdInput = (gcnew System::Windows::Forms::TextBox());
					 this->btnBack = (gcnew System::Windows::Forms::Button());
					 this->btnConfirm = (gcnew System::Windows::Forms::Button());
					 this->msgTxt = (gcnew System::Windows::Forms::Label());
					 this->tastRad = (gcnew System::Windows::Forms::RadioButton());
					 this->fileRad = (gcnew System::Windows::Forms::RadioButton());
					 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
					 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->BeginInit();
					 this->SuspendLayout();
					 // 
					 // titluTxt
					 // 
					 this->titluTxt->Dock = System::Windows::Forms::DockStyle::Top;
					 this->titluTxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->titluTxt->Location = System::Drawing::Point(0, 0);
					 this->titluTxt->Name = L"titluTxt";
					 this->titluTxt->Size = System::Drawing::Size(735, 22);
					 this->titluTxt->TabIndex = 0;
					 this->titluTxt->Text = L"  Ascundere text LSB";
					 this->titluTxt->TextAlign = System::Drawing::ContentAlignment::TopCenter;
					 // 
					 // btnCover
					 // 
					 this->btnCover->Location = System::Drawing::Point(138, 51);
					 this->btnCover->Name = L"btnCover";
					 this->btnCover->Size = System::Drawing::Size(113, 23);
					 this->btnCover->TabIndex = 1;
					 this->btnCover->Text = L"Alege cover";
					 this->btnCover->UseVisualStyleBackColor = true;
					 this->btnCover->Click += gcnew System::EventHandler(this, &ascText::btnCover_Click);
					 // 
					 // coverTxt
					 // 
					 this->coverTxt->AutoSize = true;
					 this->coverTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->coverTxt->Location = System::Drawing::Point(135, 77);
					 this->coverTxt->Name = L"coverTxt";
					 this->coverTxt->Size = System::Drawing::Size(60, 16);
					 this->coverTxt->TabIndex = 2;
					 this->coverTxt->Text = L"Selectie:";
					 this->coverTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // msgBox
					 // 
					 this->msgBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->msgBox->Location = System::Drawing::Point(433, 137);
					 this->msgBox->Multiline = true;
					 this->msgBox->Name = L"msgBox";
					 this->msgBox->Size = System::Drawing::Size(263, 183);
					 this->msgBox->TabIndex = 3;
					 // 
					 // coverIMG
					 // 
					 this->coverIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					 this->coverIMG->Location = System::Drawing::Point(34, 118);
					 this->coverIMG->Name = L"coverIMG";
					 this->coverIMG->Size = System::Drawing::Size(328, 202);
					 this->coverIMG->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
					 this->coverIMG->TabIndex = 4;
					 this->coverIMG->TabStop = false;
					 // 
					 // pwdText
					 // 
					 this->pwdText->AutoSize = true;
					 this->pwdText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->pwdText->Location = System::Drawing::Point(239, 367);
					 this->pwdText->Name = L"pwdText";
					 this->pwdText->Size = System::Drawing::Size(71, 16);
					 this->pwdText->TabIndex = 18;
					 this->pwdText->Text = L"Password:";
					 // 
					 // pwdInput
					 // 
					 this->pwdInput->Location = System::Drawing::Point(316, 366);
					 this->pwdInput->Name = L"pwdInput";
					 this->pwdInput->Size = System::Drawing::Size(144, 20);
					 this->pwdInput->TabIndex = 16;
					 // 
					 // btnBack
					 // 
					 this->btnBack->Location = System::Drawing::Point(19, 385);
					 this->btnBack->Name = L"btnBack";
					 this->btnBack->Size = System::Drawing::Size(75, 23);
					 this->btnBack->TabIndex = 15;
					 this->btnBack->Text = L"Inapoi";
					 this->btnBack->UseVisualStyleBackColor = true;
					 this->btnBack->Click += gcnew System::EventHandler(this, &ascText::btnBack_Click);
					 // 
					 // btnConfirm
					 // 
					 this->btnConfirm->Location = System::Drawing::Point(634, 385);
					 this->btnConfirm->Name = L"btnConfirm";
					 this->btnConfirm->Size = System::Drawing::Size(75, 23);
					 this->btnConfirm->TabIndex = 14;
					 this->btnConfirm->Text = L"Confirmare";
					 this->btnConfirm->UseVisualStyleBackColor = true;
					 this->btnConfirm->Click += gcnew System::EventHandler(this, &ascText::btnConfirm_Click);
					 // 
					 // msgTxt
					 // 
					 this->msgTxt->AutoSize = true;
					 this->msgTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->msgTxt->Location = System::Drawing::Point(515, 118);
					 this->msgTxt->Name = L"msgTxt";
					 this->msgTxt->Size = System::Drawing::Size(94, 16);
					 this->msgTxt->TabIndex = 20;
					 this->msgTxt->Text = L"Introdu mesaj: ";
					 this->msgTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
					 // 
					 // tastRad
					 // 
					 this->tastRad->AutoSize = true;
					 this->tastRad->Checked = true;
					 this->tastRad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->tastRad->Location = System::Drawing::Point(467, 54);
					 this->tastRad->Name = L"tastRad";
					 this->tastRad->Size = System::Drawing::Size(180, 20);
					 this->tastRad->TabIndex = 21;
					 this->tastRad->TabStop = true;
					 this->tastRad->Text = L"Introducere de la tastatura";
					 this->tastRad->UseVisualStyleBackColor = true;
					 this->tastRad->CheckedChanged += gcnew System::EventHandler(this, &ascText::tastRad_CheckedChanged);
					 // 
					 // fileRad
					 // 
					 this->fileRad->AutoSize = true;
					 this->fileRad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						 static_cast<System::Byte>(0)));
					 this->fileRad->Location = System::Drawing::Point(467, 80);
					 this->fileRad->Name = L"fileRad";
					 this->fileRad->Size = System::Drawing::Size(205, 20);
					 this->fileRad->TabIndex = 22;
					 this->fileRad->Text = L"Selectare fisier sursa(.txt, .exe)";
					 this->fileRad->UseVisualStyleBackColor = true;
					 this->fileRad->CheckedChanged += gcnew System::EventHandler(this, &ascText::fileRad_CheckedChanged);
					 // 
					 // openFileDialog1
					 // 
					 this->openFileDialog1->FileName = L"openFileDialog1";
					 // 
					 // ascText
					 // 
					 this->AcceptButton = this->btnConfirm;
					 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					 this->ClientSize = System::Drawing::Size(735, 429);
					 this->Controls->Add(this->fileRad);
					 this->Controls->Add(this->tastRad);
					 this->Controls->Add(this->msgTxt);
					 this->Controls->Add(this->pwdText);
					 this->Controls->Add(this->pwdInput);
					 this->Controls->Add(this->btnBack);
					 this->Controls->Add(this->btnConfirm);
					 this->Controls->Add(this->coverIMG);
					 this->Controls->Add(this->msgBox);
					 this->Controls->Add(this->coverTxt);
					 this->Controls->Add(this->btnCover);
					 this->Controls->Add(this->titluTxt);
					 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
					 this->MaximizeBox = false;
					 this->Name = L"ascText";
					 this->RightToLeftLayout = true;
					 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
					 this->Text = L"StegLSB";
					 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->EndInit();
					 this->ResumeLayout(false);
					 this->PerformLayout();

				 }
	#pragma endregion


		private: System::Void fileRad_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			if (!fileRad->Checked)
				return;
			openFileDialog1->Filter = "Text Files(*.txt;*.exe)|*.txt;*.exe";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) 
			{
				tastRad->Checked = true;
				return;
			}

			msgBox->Hide();
			msgTxt->Location = System::Drawing::Point(460, 130);
			msgTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);
			std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);

			if (fileName.substr(fileName.length() - 3, 3) == "txt") 
			{
				secretMsg = citesteDate(fileName, 0);
				exe = false;
			}
			else 
			{
				secretMsg = citesteDate(fileName, (char)255);	// citire binara
				exe = true;
			}

			msgTxt->Text += "\nLungime fisier: " + secretMsg.length() + " caractere";
		}

		private: System::Void tastRad_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		{
			msgBox->Show();
			msgTxt->Location = System::Drawing::Point(502, 118);
			msgTxt->Text = "Introdu mesajul:";
		}

		private: System::Void btnCover_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			openFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.bmp;*.png;";
			openFileDialog1->FileName = "";
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
				return;
			}
			titluTxt->Text = "Ascundere text LSB";
			titluTxt->BackColor = System::Drawing::Color::Empty;

			coverTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);
			std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);
			cover = imread(fileName);
			numeCover = fileName;
			coverIMG->ImageLocation = openFileDialog1->FileName;

			coverTxt->Text += "\n" + cover.cols + " x " + cover.rows;
		}

		private: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (tastRad->Checked) 
				secretMsg = marshal_as<std::string>(msgBox->Text);
		
			std::string pwd = marshal_as<std::string>(pwdInput->Text);
			titluTxt->BackColor = System::Drawing::Color::Red;

			if (secretMsg.length() == 0) 
			{
				titluTxt->Text = "Fisierul / textul introdus nu contine caractere.";
				return;
			}
			if (cover.rows == 0) 
			{
				titluTxt->Text = "Nu ai selectat un cover valid.";
				return;
			}
			if (pwd.length() < 5) 
			{
				titluTxt->Text = "Introdu un password de minim 5 litere.";
				return;
			}

			uchar bt = 0;
			Mat rez;
			if (exe == false) 
			{
				rez = LSBAscundere(cover, secretMsg, pwd, bt);
				if (rez.rows == 1) 
				{
					titluTxt->Text = "Textul este prea mare pentru cover. Alege alt cover.";
					return;
				}
				saveFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.bmp;*.png;";
			}
			else 
			{
				rez = ascExecutabil(secretMsg, cover, pwd);
				saveFileDialog1->Filter = "Image Files(*.png)|*.png;";
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
			System::String^ covFileName = gcnew System::String(numeCover.c_str());
			System::Diagnostics::Process::Start(saveFileDialog1->FileName);
			System::Diagnostics::Process::Start(covFileName);

			titluTxt->Text = "Executat cu succes! Folosit: LSB(" + bt + ")";
			titluTxt->BackColor = System::Drawing::Color::Green;

		}
		private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			this->Close();
		}
	};
}
