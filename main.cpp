#include "View.h";

int main()
{
	/////////////////////////////////////////////////////////////////////////////////
	//Declarations
	/////////////////////////////////////////////////////////////////////////////////
	View* display = new View();


	/////////////////////////////////////////////////////////////////////////////////
	//The action
	/////////////////////////////////////////////////////////////////////////////////

	display->drawGrid();
	//display->clear();


	/////////////////////////////////////////////////////////////////////////////////
	//Clean-up
	/////////////////////////////////////////////////////////////////////////////////
	delete display;
	display = NULL;
	_getch();
}