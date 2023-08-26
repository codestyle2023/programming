#include<iostream>
using namespace std;
main()
{
 double x, t = 1, m = 0, a = 1.0;
 int i;
 cin >> x;
 for(i = 1; t / i >= 1e-4; i++)
 {
 t *= x;
 m += a * t / i;
 a = -a;
 }
 cout << m << endl;
}