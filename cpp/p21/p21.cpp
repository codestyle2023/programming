#include<iostream>
using namespace std;
main()
{
	int i, x, n = 0;
	cin >> x;
	for(i = 1; i <= x; i++)
	if(x % i == 0)
	n++;
	cout << n << endl;
} 