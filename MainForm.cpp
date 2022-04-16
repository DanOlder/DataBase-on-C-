#include "BigHeader.hpp"

using namespace DataBaseonC;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Database database;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainForm(&database));
	return 0;
}