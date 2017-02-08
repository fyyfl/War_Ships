#pragma once
#include "User.h"

class Robot : public User
{
public:
	Robot();
	~Robot();

	void set_ship();
	void set_coord_ship_x();
	void set_coord_ship_y();
public:

	char map_rob[30][30];
};

