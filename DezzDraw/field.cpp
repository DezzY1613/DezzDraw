#include "includes.h"

class FieldCl {
public:

	char signs[6]{'\n', '^','|','0','-','>'};

	char field[101]{ '0',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-',
	'-','-','-','-','-','-','-','-','-','-'};


	void SelectXField(int x) {
		field[91 + x] = '*';
	}

	void SelectYField(int x, int y) {
		switch (y) {
		case 0:
			// ничего :)
			break;
		case 1:
			field[91 + x] = '-';
			field[(91 + x) - 10] = '*';

			break;
		case 2:
			field[91 + x] = '-';
			field[(91 + x) - 20] = '*';

			break;
		case 3:
			field[91 + x] = '-';
			field[(91 + x) - 30] = '*';

			break;
		case 4:
			field[91 + x] = '-';
			field[(91 + x) - 40] = '*';

			break;
		case 5:
			field[91 + x] = '-';
			field[(91 + x) - 50] = '*';

			break;
		case 6:
			field[91 + x] = '-';
			field[(91 + x) - 60] = '*';

			break;
		case 7:
			field[91 + x] = '-';
			field[(91 + x) - 70] = '*';
			break;
		case 8:
			field[91 + x] = '-';
			field[(91 + x) - 80] = '*';
			break;
		case 9:
			field[91 + x] = '-';
			field[(91 + x) - 90] = '*';
			break;
		default:
			cout << "Unknown Error!" << endl;
			break;
		}
	}

};