#include "score.h"

void score::Draw(Graphics& gfx)
{
	gfx.DrawRect(5, 5, sc, sc, Color(255, 255, 255));
}

bool score::inc_sc()
{
	if (20 > sc) { sc+=1; return false; }
	return true;
}
