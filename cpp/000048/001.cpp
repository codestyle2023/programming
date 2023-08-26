#include<iostream>
using namespace std;
main()
{
 int i, n = 0;
 double x;
 cin >> n;
 for(i = 0; i < n; i++)
 {
 cin >> x;
 if(x > 10 && x < 15)
 n++;
 }
 cout << n << endl;
}