#include<iostream>
using namespace std;
main()
{
	int i, x, y;
	cin >> x >> y;
	for(i = x; i > 0; i--)
	if(x % i == 0 && y % i == 0)
	break;
	cout << i << endl;
} 
 
 