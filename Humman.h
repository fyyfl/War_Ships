#pragma once
#include "User.h"
class Humman : public User
{
public:
	Humman();
	~Humman();

	void set_ship();
	void set_coord_ship_x();
	void set_coord_ship_y();

public:
	char map_hum[30][30];
};

