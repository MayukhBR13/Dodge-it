#pragma once
#include"Graphics.h"
class score
{
public:
	void Draw(Graphics& gfx);
	bool inc_sc();
private:
	int sc=0;
};

