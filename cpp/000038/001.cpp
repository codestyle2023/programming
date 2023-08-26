#include<iostream>
using namespace std;
main()
{
 double x, m = 0;
 int i, n = 0;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x > 15)
 {
 m += x;
 n++;
 }
 }
 cout << (m / n) << endl;
}