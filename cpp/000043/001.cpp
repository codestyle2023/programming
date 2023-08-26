#include<iostream>
using namespace std;
main()
{
 double m = 0;
 int i;
 for(i = 1; i < 100; i += 2)
 m += i * (i + 1.0) / (i + i + 1.0);
 cout << m << endl;
}