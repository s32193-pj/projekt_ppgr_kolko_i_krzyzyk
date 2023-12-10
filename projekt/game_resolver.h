#pragma once
#include <iostream>
using namespace std;

bool is_game_resolved(char plansza[3][3])
{
	bool is_won = false;
	if (plansza[0][1] == plansza[0][0] && plansza[0][0] == plansza[0][2])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if(plansza[1][0] == plansza[1][1] && plansza[1][0] == plansza[1][2])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[2][0] == plansza[2][1] && plansza[2][0] == plansza[2][2])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[0][0] == plansza[1][0] && plansza[0][0] == plansza[2][0])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[0][1] == plansza[1][1] && plansza[0][1] == plansza[2][1])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[0][2] == plansza[1][2] && plansza[0][2] == plansza[2][2])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[0][0] == plansza[1][1] && plansza[0][0] == plansza[2][2])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
	if (plansza[0][2] == plansza[1][1] && plansza[0][2] == plansza[2][0])
	{
		cout << endl << "MILK FOR THE KHORNE FLAKES" << endl;
		is_won = true;
	}
		return is_won;
}
