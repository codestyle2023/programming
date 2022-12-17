#include<iostream>
using namespace std;
main()
{
	int i, x, m = 0;
	cin >> x;
	for(i = 0; x > 0; i++)
	{
		m += x % 10;
		x /= 10;
	} 
	 cout << m << endl;
} 