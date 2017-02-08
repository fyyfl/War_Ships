#pragma once

class User
{
public:
	User();
	~User();

public:
	virtual void set_ship() = 0;
	virtual void set_coord_ship_x() = 0;
	virtual void set_coord_ship_y() = 0;

};

