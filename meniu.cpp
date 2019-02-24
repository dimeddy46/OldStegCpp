#include "stdafx.h"
#include "ascImg.h"
#include "ascText.h"
#include "extImg.h"
#include "extText.h"
#include "meniu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Steg11::meniu form;
	Application::Run(%form);
}


