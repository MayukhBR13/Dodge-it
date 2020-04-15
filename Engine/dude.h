#pragma once

#include "Graphics.h"
#include "MainWindow.h"

class dude
{
	private:
		int ClampDudeX();
		int ClampDudeY();
		void ClampDudeVX(int max);
		void ClampDudeVY(int max);
	public:
		void GetInput(MainWindow& wnd);
		void UpdateDude();
		void drawDude(Graphics& du1);
		int GetX();
		int GetY();
	private:
		int x=0;
		int y=0;
		int vx=0;
		int vy=0;
	public:
		static constexpr int width=20;
		static constexpr int height=20;
};

