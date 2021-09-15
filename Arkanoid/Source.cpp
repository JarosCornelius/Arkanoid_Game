#include "Author.h";
#include "Game.h";
#include "Welcome.h";

using namespace Arkanoid;

void CloseWindow(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();
	}
	else
	{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	}
}

[STAThreadAttribute]


int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Welcome^ first = gcnew Welcome();
	first->FormClosed += gcnew FormClosedEventHandler(CloseWindow);
	first->Show();
	Application::Run();

	return 0;
}