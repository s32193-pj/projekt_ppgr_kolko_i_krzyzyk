#pragma once
#include <iostream>
using namespace std;
#include <stdlib.h>


void wyswietl_plansze(char plansza[3][3])
{
	system("CLS");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << plansza[i][j];
			if (j < 2) {
				cout << "|";
			}
		}
		cout << endl;
		if (i < 2) 
		{
			cout << "-----" << endl;
		}
	}
	
}