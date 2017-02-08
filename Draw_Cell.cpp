#include "Draw_Cell.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Draw_Cell::show()
{
	for (int j = 0; j<=20; j++)
	{
		map[0][j] = '-';
	}
	for (int i = 0; i <= 10; i++)
	{
		map[2 * i - 1][0] = '|';
		for (int j = 1; j <= 10; j++)
		{
			map[2 * i - 1][2 * j - 1] = '*';
			map[2 * i - 1][2 * j] = '|';
		}
		for (int j = 0; j <= 20; j++)
		{
			map[2 * i][j] = '-';
		}
	}

	for (int i= 0; i <=20;i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}
		
	
	
}


Draw_Cell::Draw_Cell()
{
}


Draw_Cell::~Draw_Cell()
{
}


//string line;
//ifstream myfile("MAP.txt");
//if (myfile.is_open())
//{
//	while (myfile.good())
//	{
//		getline(myfile, line);
//		cout << line << endl;
//	}
//	myfile.close();
//}
//else cout << "Cannot open file";