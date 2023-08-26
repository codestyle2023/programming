#include<iostream>
using namespace std;
main()
{
 double x, m1 = 0, m2 = 0;
 int i, n1 = 0, n2 = 0;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x > 0)
 {
 m1 += x;
 n1++;
 }
 else
 {
 m2 += x;
 n2++;
 }
 }
 cout << (m1 / n1) << endl << (m2 / n2) << endl;
}