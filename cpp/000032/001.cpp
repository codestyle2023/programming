#include<iostream>
using namespace std;
main()
{
 double x, m = 0;
 int i;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x > 0)
 m += x;
 }
 cout << m << endl;
}