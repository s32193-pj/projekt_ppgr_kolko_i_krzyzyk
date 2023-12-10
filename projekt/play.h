#pragma once
using namespace std;
#include <iostream>

int play(char plansza[3][3], int gracz, char pole)
{
	
	int pole_rzucone = pole;

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (pole_rzucone == plansza[x][y] && gracz == 1) {
				plansza[x][y] = 88;
			}
			if (pole_rzucone == plansza[x][y] && gracz == 2) {
				plansza[x][y] = 79;
			}
		}
	}
	if (gracz == 1)
	{
		gracz = 2;
	}
	else
	{
		gracz = 1;
	}
	return gracz;

}