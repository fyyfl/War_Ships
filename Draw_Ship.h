#pragma once
#include "Draw.h"

class Draw_Ship : public Draw
{
public:
	Draw_Ship();
	~Draw_Ship();

	void show();
	
private:
	char image_ship = '#';
};

