#include "stdafx.h"
#include "Database.h"
#include "Register.h"
#include "DbTest.h"
#include "User_Login.h"


[System::STAThread]
INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{
	System::Windows::Forms::Application::Run(%PayrollDB::User_Login());
}