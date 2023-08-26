#include<iostream>
using namespace std;
main()
{
 double x, m = 1;
 int n, i;
 cin >> x >> n;
 for(i = 0; i < n; i++)
 m *= x;
 cout << m << endl;
}