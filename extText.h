#pragma once

namespace Steg11 {

	public ref class extText : public System::Windows::Forms::Form
	{	
	public:
		extText(void)
		{
			InitializeComponent();
		}

	protected:
		~extText()
		{
			System::Console::WriteLine("extText");
			if (components)
			{
				System::Console::Write(components->ToString());
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  coverIMG;
	private: System::Windows::Forms::Label^  coverTxt;
	private: System::Windows::Forms::Button^  btnCover;
	private: System::Windows::Forms::Label^  titluTxt;
	private: System::Windows::Forms::Label^  pwdText;
	private: System::Windows::Forms::TextBox^  pwdInput;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnConfirm;
	private: System::Windows::Forms::TextBox^  textBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::ComponentModel::Container ^components = nullptr;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->coverIMG = (gcnew System::Windows::Forms::PictureBox());
				 this->coverTxt = (gcnew System::Windows::Forms::Label());
				 this->btnCover = (gcnew System::Windows::Forms::Button());
				 this->titluTxt = (gcnew System::Windows::Forms::Label());
				 this->pwdText = (gcnew System::Windows::Forms::Label());
				 this->pwdInput = (gcnew System::Windows::Forms::TextBox());
				 this->btnBack = (gcnew System::Windows::Forms::Button());
				 this->btnConfirm = (gcnew System::Windows::Forms::Button());
				 this->textBox = (gcnew System::Windows::Forms::TextBox());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // coverIMG
				 // 
				 this->coverIMG->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->coverIMG->Location = System::Drawing::Point(34, 125);
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
				 this->coverTxt->Location = System::Drawing::Point(129, 85);
				 this->coverTxt->Name = L"coverTxt";
				 this->coverTxt->Size = System::Drawing::Size(60, 16);
				 this->coverTxt->TabIndex = 6;
				 this->coverTxt->Text = L"Selectie:";
				 this->coverTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // btnCover
				 // 
				 this->btnCover->Location = System::Drawing::Point(132, 59);
				 this->btnCover->Name = L"btnCover";
				 this->btnCover->Size = System::Drawing::Size(113, 23);
				 this->btnCover->TabIndex = 5;
				 this->btnCover->Text = L"Alege cover";
				 this->btnCover->UseVisualStyleBackColor = true;
				 this->btnCover->Click += gcnew System::EventHandler(this, &extText::btnCover_Click);
				 // 
				 // titluTxt
				 // 
				 this->titluTxt->Dock = System::Windows::Forms::DockStyle::Top;
				 this->titluTxt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->titluTxt->Location = System::Drawing::Point(0, 0);
				 this->titluTxt->Name = L"titluTxt";
				 this->titluTxt->Size = System::Drawing::Size(730, 24);
				 this->titluTxt->TabIndex = 8;
				 this->titluTxt->Text = L"Extragere text LSB";
				 this->titluTxt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // pwdText
				 // 
				 this->pwdText->AutoSize = true;
				 this->pwdText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->pwdText->Location = System::Drawing::Point(238, 375);
				 this->pwdText->Name = L"pwdText";
				 this->pwdText->Size = System::Drawing::Size(71, 16);
				 this->pwdText->TabIndex = 24;
				 this->pwdText->Text = L"Password:";
				 // 
				 // pwdInput
				 // 
				 this->pwdInput->Location = System::Drawing::Point(315, 374);
				 this->pwdInput->Name = L"pwdInput";
				 this->pwdInput->Size = System::Drawing::Size(144, 20);
				 this->pwdInput->TabIndex = 22;
				 // 
				 // btnBack
				 // 
				 this->btnBack->Location = System::Drawing::Point(23, 412);
				 this->btnBack->Name = L"btnBack";
				 this->btnBack->Size = System::Drawing::Size(75, 23);
				 this->btnBack->TabIndex = 21;
				 this->btnBack->Text = L"Inapoi";
				 this->btnBack->UseVisualStyleBackColor = true;
				 this->btnBack->Click += gcnew System::EventHandler(this, &extText::btnBack_Click);
				 // 
				 // btnConfirm
				 // 
				 this->btnConfirm->Location = System::Drawing::Point(608, 412);
				 this->btnConfirm->Name = L"btnConfirm";
				 this->btnConfirm->Size = System::Drawing::Size(75, 23);
				 this->btnConfirm->TabIndex = 20;
				 this->btnConfirm->Text = L"Confirmare";
				 this->btnConfirm->UseVisualStyleBackColor = true;
				 this->btnConfirm->Click += gcnew System::EventHandler(this, &extText::btnConfirm_Click);
				 // 
				 // textBox
				 // 
				 this->textBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->textBox->Location = System::Drawing::Point(392, 125);
				 this->textBox->Multiline = true;
				 this->textBox->Name = L"textBox";
				 this->textBox->ReadOnly = true;
				 this->textBox->Size = System::Drawing::Size(301, 203);
				 this->textBox->TabIndex = 26;
				 // 
				 // label1
				 // 
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->Location = System::Drawing::Point(418, 106);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(246, 16);
				 this->label1->TabIndex = 27;
				 this->label1->Text = L"Text extras:";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 // 
				 // openFileDialog1
				 // 
				 this->openFileDialog1->FileName = L"openFileDialog1";
				 // 
				 // extText
				 // 
				 this->AcceptButton = this->btnConfirm;
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(730, 457);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->textBox);
				 this->Controls->Add(this->pwdText);
				 this->Controls->Add(this->pwdInput);
				 this->Controls->Add(this->btnBack);
				 this->Controls->Add(this->btnConfirm);
				 this->Controls->Add(this->titluTxt);
				 this->Controls->Add(this->coverIMG);
				 this->Controls->Add(this->coverTxt);
				 this->Controls->Add(this->btnCover);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				 this->MaximizeBox = false;
				 this->Name = L"extText";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
				 this->Text = L"StegLSB";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coverIMG))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

			 bool fileExists(std::string fileName) {
				 ifstream infile(fileName);
				 return infile.good();
			 }

	private: System::Void btnCover_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->Filter = "Image Files(*.bmp;*.png)|*.bmp;*.png;";
		openFileDialog1->FileName = "";
		if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
			return;
		}

		titluTxt->Text = "Extragere text LSB";
		titluTxt->BackColor = System::Drawing::Color::Empty;
		coverTxt->Text = "Selectie: " + System::IO::Path::GetFileName(openFileDialog1->FileName);
		std::string fileName = marshal_as<std::string>(openFileDialog1->FileName);
		cover = imread(fileName,-1);
		coverIMG->ImageLocation = openFileDialog1->FileName;

		coverTxt->Text += "\n" + cover.cols + " x " + cover.rows;
	}

	private: System::Void btnConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string pwd = marshal_as<std::string>(pwdInput->Text);
		titluTxt->BackColor = System::Drawing::Color::Red;

		if (cover.rows == 0) {
			titluTxt->Text = "Nu ai ales un cover.";
			return;
		}
		if (pwd.length() == 0) {
			titluTxt->Text = "Nu ai setat password-ul.";
			return;
		}

		uchar bt;
		secretMsg = LSBExtragere(cover, pwd, bt);
		if (secretMsg == "$#Pwdincorect#$") {			// verifica daca este .txt ascuns
			secretMsg = extExecutabil(cover, pwd);
			if(secretMsg == "passIncorect"){			// verifica daca este .exe ascuns
				tries++;
				titluTxt->Text = "Password-ul introdus este incorect! Incercari: " + tries;
				textBox->Text = "";
				return;
			}
			else exe = true;
		}
		else exe = false;

		titluTxt->BackColor = System::Drawing::Color::Green;
		titluTxt->Text = "Executat cu succes! Folosit LSB(" + bt + ")";
		if (secretMsg.length() <= 250) {
			System::String^ str = gcnew System::String(secretMsg.c_str());
			textBox->Text = str;
			label1->Text = "Lungime text extras: " + secretMsg.length();
			return;
		}
		if(exe == false)
			saveFileDialog1->Filter = "Text Files(*.txt;)|*.txt;";
		else 
			saveFileDialog1->Filter = "Text Files(*.exe;)|*.exe;";
		saveFileDialog1->FileName = "";
		if (saveFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
			titluTxt->BackColor = System::Drawing::Color::Empty;
			return;
		}
		std::string outFile = marshal_as<std::string>(saveFileDialog1->FileName);
		if(exe == false)
			scriereDate(outFile, secretMsg, 0);
		else 
			scriereDate(outFile, secretMsg, (char)255);

		System::Diagnostics::Process::Start(saveFileDialog1->FileName);
		tries = 0;
	}

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	};
}
