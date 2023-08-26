#include<iostream>
using namespace std;
main()
{
 int n, i;
 double a = 1, b = 5, c;
 cin >> n;
 if(n == 1)
 cout << a << endl;
 else
 if(n == 2)
 cout << b << endl;
 else
 {
 for(i = 2; i < n; i++)
 {
 c = (a + b) / 2;
 a = b;
 b = c;
 }
 cout << c << endl;
 }
}