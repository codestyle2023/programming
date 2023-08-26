#include<iostream>
using namespace std;
main()
{
 int x, i, f = 1;
 cin >> x;
 for(i = 1; i <= x; i++)
 f *= i;
 cout << f << endl;
}