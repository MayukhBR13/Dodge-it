#pragma once
#include"Graphics.h"
#include"dude.h"
#include<random>
class dice
{
public:
	dice();
	bool Update(dude &du);
	void Draw(Graphics &gpx);
private:
	bool ifCollide(dude& d1);
	std::random_device rd;
	std::mt19937 rnd;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	int x;
	int y;
	static constexpr int width=10;
	int static constexpr height=10;
};

