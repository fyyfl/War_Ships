#pragma once

class Draw
{
public:
	Draw();
	~Draw();
public:
	virtual void show() = 0;
	

protected:
	char map[24][24];
	char ship[22][44];
	
};

