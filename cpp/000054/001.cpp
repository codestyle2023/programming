#include<iostream>
using namespace std;
main()
{
 int a, b, c;
 cin >> a >> b;
 while(b > 0)
 {
 c = a % b;
 a = b;
 b = c;
 }
 cout << a << endl;
}