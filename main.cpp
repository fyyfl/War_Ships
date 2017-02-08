#include "include_Header.h"
//#include <conio.h>  
//#include <stdlib.h> 
//#include <iostream>
//#include <fstream>
//#include <string>
#include<Windows.h>

using namespace std;

int main()
{
	User *human = new Humman();
	User *android = new Robot();

	Draw *draw_cell = new Draw_Cell();
	Draw *draw_ship = new Draw_Ship();

	draw_cell->show();
	


	human->set_coord_ship_x();
	human->set_coord_ship_y();
	
	return 0;
}

	
