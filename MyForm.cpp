#include "MyForm.h"
#include "Result.h"
#include "Age.h"
#include <Windows.h>

using namespace Coursework;

[System::STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}