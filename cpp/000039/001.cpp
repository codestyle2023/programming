#include<iostream>
using namespace std;
main()
{
 double x, m1 = 0, m2 = 0;
 int i;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x >= m1)
 {
 m2 = m1;
 m1 = x;
 }
 else
 if(x >= m2)
 m2 = x;
 }
 cout << m2 << endl;
}
