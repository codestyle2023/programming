#include<iostream>
using namespace std;
main()
{
 int i, y, d;
 for(i = 10; i <= 99; i++)
 {
 y = i % 10;
 d = i / 10;
 if(i % (y + d) == 0)
 cout << i << endl;
 }
}