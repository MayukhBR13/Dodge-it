#include "dice.h"

dice::dice():
	rnd(rd()),
	xDist(0, 800-width),
	yDist(0, 600-height)
{

}

bool dice::Update(dude &du)
{
	bool a = ifCollide(du);
	if (a) {
		x = xDist(rnd);
		y = yDist(rnd);
	}
	return a;
}

void dice::Draw(Graphics& gpx)
{
	gpx.DrawRect(x, y, width, height, Color( 0,255,0 ));
}

bool dice::ifCollide(dude& d1)
{
	if (x + width >= d1.GetX() && x <= d1.GetX() + d1.width && y + height >= d1.GetY() && y <= d1.GetY() + d1.height)
		return true;
	return false;
}
