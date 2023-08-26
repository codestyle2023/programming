#include<iostream>
using namespace std;
main()
{
 int x, b, d = 1, y = 0;
 cin >> x >> b;
 for(; x > 0; x /= b)
 {
 y += (x % b ) * d;
 d *= 10;
 }
 cout << y << endl;
}
