#include<iostream>
using namespace std;
main()
{
 int i, x, y;
 cin >> x >> y;
 for(i = x; i % y != 0; i += x)
 ;
 cout << i << endl;
}