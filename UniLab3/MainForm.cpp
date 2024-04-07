#include "MainForm.h"

using namespace::System;
using namespace::System::Windows::Forms;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	UniLab3::MainForm form;
	Application::Run(% form);
}