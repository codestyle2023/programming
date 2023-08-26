#include<iostream>
using namespace std;
main()
{
 int n;
 double x, m = 0;
 for(n = 0; ; n++)
 {
 cin >> x;
 if(x < 0)
 break;
 m += x;
 }
 cout << (m / n) << endl;
}