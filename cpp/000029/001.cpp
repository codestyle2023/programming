#include<iostream>
using namespace std;
main()
{
 double x, m = 1;
 int i;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 m *= x;
 }
 cout << m << endl;
}