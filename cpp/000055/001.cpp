#include<iostream>
using namespace std;
main()
{
 int n, i;
 double x, sumx = 0, sumx2 = 0, v;
 cin >> n;
 for(i = 0; i < n; i++)
 {
 cin >> x;
 sumx += x;
 sumx2 += x * x;
 }
 v = sumx2 / n - (sumx / n) * (sumx / n);
 cout << v << endl;
}