#include <iostream>
using namespace std;
main()
	{
	int m;
	cin >> m;
		switch(m)
		{	
			case 1: case 2: case 3:
			case 4: case 5: case 6:
			cout << "31 rooz" << endl;
			break;
			case 7: case 8: case 9:
			case 10: case 11:
			cout << "30 rooz" << endl;
			break;
			case 12:
			cout << "29 rooz" << endl;
			break;
			default:
			cout << "eshtebah" << endl;
		}
	}