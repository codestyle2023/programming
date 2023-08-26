#include<iostream>
using namespace std;
main()
{
 double x, t = 1, m = 0, a = -1;
 int i;
 cin >> x;
 m = t = x;
 for(i = 2; t >= 1e-4; i += 2)
 {
 t *= x * x / (i * (i + 1));
 m += a * t;
 a = -a;
 }
 cout << m << endl;
}