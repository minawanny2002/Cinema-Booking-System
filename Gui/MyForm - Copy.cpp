#include "Header.h"
#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array < String^>^ args)
{
	movies[0].title = "Spider-man:No Way Home";
	movies[0].Director = "Jon Watts";
	movies[0].screen_info.hall.id = "Hall 1";
	movies[0].screen_info.time.hours = 2;
	movies[0].screen_info.time.minutes = 28;
	movies[0].Actors[0] = "Tom Holland";
	movies[0].Actors[1] = "Tobey Maguire";
	movies[0].Actors[2] = "Andrew Garfield";
	movies[0].rating = 8.5;

	movies[1].title = "The Batman";
	movies[1].Director = "Matt Reeves";
	movies[1].screen_info.hall.id = "Hall 2";
	movies[1].screen_info.time.hours = 2;
	movies[1].screen_info.time.minutes = 56;
	movies[1].Actors[0] = "Robert Pattinson";
	movies[1].Actors[1] = "Zo� Isabella Kravitz";
	movies[1].Actors[2] = "Jeffrey Wright";
	movies[1].rating = 8.3;

	movies[2].title = "Red Notices";
	movies[2].Director = "Rawson Marshall Thurber";
	movies[2].screen_info.hall.id = "Hall 3";
	movies[2].screen_info.time.hours = 1;
	movies[2].screen_info.time.minutes = 58;
	movies[2].Actors[0] = "Dwayne Johnson";
	movies[2].Actors[1] = "Ryan Reynolds";
	movies[2].Actors[2] = "Gal Gadot";
	movies[2].rating = 6.4;

	movies[3].title = "Encanto";
	movies[3].Director = "Jared Bush";
	movies[3].screen_info.hall.id = "Hall 4";
	movies[3].screen_info.time.hours = 1;
	movies[3].screen_info.time.minutes = 42;
	movies[3].Actors[0] = "Stephanie Beatriz";
	movies[3].Actors[1] = "Mar�a Cecilia Botero";
	movies[3].Actors[2] = "John Leguizamo";
	movies[3].rating = 7.3;

	movies[4].title = "Scream";
	movies[4].Director = "Matt Bettinelli-Olpin";
	movies[4].screen_info.hall.id = "Hall 5";
	movies[4].screen_info.time.hours = 1;
	movies[4].screen_info.time.minutes = 54;
	movies[4].Actors[0] = "Neve Campbell";
	movies[4].Actors[1] = "Courteney Cox";
	movies[4].Actors[2] = "David Arquette";
	movies[4].rating = 6.5;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Gui::MyForm);



}

static std::string toStandardString(System::String^ string)
{
	using System::Runtime::InteropServices::Marshal;

	if (string->Length == 0 || string->Length < 0)
	{
		MessageBox::Show("No field can be empty");

	}

	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}