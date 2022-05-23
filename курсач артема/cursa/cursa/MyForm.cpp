#include "MyForm.h"

#define WINAPI __stdcall


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    cursa::MyForm Form;
    Application::Run(% Form);
}
