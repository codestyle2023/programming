#include<iostream>
using namespace std;
main()
{
 double x;
 int i, n = 0;
 for(i = 0; i < 100; i++)
 {
 cin >> x;
 if(x > 0)
 n++;
 }
 cout << n << endl;
}