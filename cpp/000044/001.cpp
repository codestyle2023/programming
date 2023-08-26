#include<iostream>
using namespace std;
main()
{
 double t = 1, m = 0, a = 1.0;
 int i;
 for(i = 2; t >= 1e-4; i++)
 {
 t *= 1.0 / i;
 m += a * t;
 a = -a;
 }
 cout << m << endl;
}