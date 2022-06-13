#include "MyForm1.h"

#define WINAPI __stdcall


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Cursach::MyForm1 Form;
	Application::Run(% Form);
}