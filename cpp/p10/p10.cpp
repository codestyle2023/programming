#include<iostream>
using namespace std;
main()
{ 
	int m;
	cin >> m; 
	if(m >= 1 && m <= 6)
	cout << "31 rooz" << endl; 
	else
	if(m >= 7 && m <= 11)
	cout << "30 rooz" << endl;
	else 
	if(m == 12) 
	cout << "29 rooz" << endl;
	else 
	cout << "eshtebah" << endl;
} 
 
 