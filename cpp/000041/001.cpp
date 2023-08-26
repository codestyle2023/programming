#include<iostream>
using namespace std;
main()
{
 double m = 0;
 int i;
 for(i = 1; i <= 1000; i++)
 if(i % 2 == 1)
 m += 1.0 / i;
 else
 m -= 1.0 / i;
 cout << m << endl;
}