#include "includes.h"

class RenderCl {
public:

	void RenderVoid(char field[101], char signs[6]) {
		cout << signs[1] << " ";
		for (int i = 1; i <= 100; i++)
		{	
			if (i == 11 or i == 21 or i == 31 or i == 41 or i == 51 or i == 61 or i == 71 or i == 81)
			{
				cout << signs[2] << " ";
			}
			else if (i == 91) { cout << signs[3] << " "; }

			if (i == 10 or i == 20 or i == 30 or i == 40 or i == 50 or i == 60 or i == 70 or i == 80 or i == 90)
			{
				cout << field[i] << signs[0];
			}

			else
			{
				cout << field[i] << " ";
			}
		}
		cout << endl << "  ";
		cout << signs[3] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[4] << " " << signs[5] << endl;

	}


};