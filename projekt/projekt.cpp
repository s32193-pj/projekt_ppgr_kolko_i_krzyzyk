#include <iostream>;
using namespace std;

void wyswietl_plansze(int plansza[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << plansza[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{

	int plansza[3][3] = {1,2,3,4,5,6,7,8,9};

	bool no_win = true;
	int gracz = 1;
	while (no_win)
	{
		wyswietl_plansze(plansza);
		
		int pole;
		cout << "Graczu " << gracz <<", ktore pole chcesz zagrac?" << endl;
		cin >> pole;

		for (int x = 0; x < 3; x++)
		{
			for (int y = 0; y < 3; y++)
			{
				if (pole == plansza[x][y]) {
					plansza[x][y] = 0;
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

	}
	

}