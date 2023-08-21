#include<iostream>
using namespace std;
main()
{
	int i, x;
	cin >> x;
	for(i = 1; i <= x; i++)
	if(x % i == 0)
	cout << i << endl;
}