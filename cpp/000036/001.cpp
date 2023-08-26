#include<iostream>
using namespace std;
main()
{
 double x, m = 20;
 int i;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x < m)
 m = x;
 }
 cout << m << endl;
}