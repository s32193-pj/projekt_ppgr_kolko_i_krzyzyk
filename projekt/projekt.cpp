#include <iostream>;
#include "field_display.h"
#include <stdlib.h>
#include "game_resolver.h"
#include <vector>
#include "play.h"
using namespace std;




int main()
{

	char plansza[3][3] = {49,50,51,52,53,54,55,56,57};
	vector <char> fields_used = { 48 };
	//{48,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};

	bool no_win = true;
	int gracz = 1;
	int turn_limit = 0;
	bool field_not_available = false;
	while (no_win)
	{
		bool game_ended = false;
		game_ended = is_game_resolved(plansza);
		wyswietl_plansze(plansza);
		
		if (game_ended == true) 
		{
			cout << endl <<"MILK FOR THE KHORNE FLAKES!";
			no_win = false;
			break;
		}
		if (turn_limit == 9)
		{
			cout << endl << "DRAW. GIT GUD.";
			no_win = false;
		}
		else 
		{	
			char pole;			
			
			do
			{
				cout << "Graczu " << gracz << ", ktore pole chcesz zagrac?" << endl;
				cin >> pole;
				for (int n = 0; n < fields_used.size(); n++)
				{
					if(fields_used[n] == pole)
					{
						field_not_available = true;
					}
					else
					{
						field_not_available = false;
					}
				}
			} while (field_not_available == true);
			
			gracz = play(plansza, gracz, pole);
			fields_used.push_back(pole);
		}
		turn_limit++;
	}
}