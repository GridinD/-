#include "MyForm.h"
#include "Matrica.h"
#define WINAPI __stdcall


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	formlab9::MyForm Form;
	Application::Run(% Form);
}