#pragma once

#include "Graphics.h"
#include "dude.h"

class poo
{
public:
	poo();
	poo(int x, int y);
	bool Update(dude &d1);
	void Draw(Graphics& gfx);
private:
	int ClampX();
	int ClampY();
	bool Collision(dude& d1);

private:
	int x ;
	int y ;
	int vx = 1;
	int vy = 1;
	
	static constexpr int width = 24;
	static constexpr int heigth = 24;

};

