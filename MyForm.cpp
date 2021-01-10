#include "MyForm.h"
#include <iostream>
#include <windows.h>


using namespace homework2;
using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	homework2::MyForm form;
	Application::Run(% form);
}
