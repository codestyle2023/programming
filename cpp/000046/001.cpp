#include<iostream>
#include<math.h>
using namespace std;
main()
{
 double x, t = 1, m = 0;
 int i;
 cin >> x;
 for(i = 1; fabs(t) >= 1e-4; i++)
 {
 t *= x / i;
 m += t;
 }
 cout << m << endl;
}