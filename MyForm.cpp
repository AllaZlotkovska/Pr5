#include "MyForm.h"
#include <Windows.h>
#include <math.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Pr5::MyForm form;// ��'� ������ �������, ���������, myproekt ��� ��.
	Application::Run(% form);
}