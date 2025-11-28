// Problem link: https://codeforces.com/problemset/problem/1/A
/* Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long double n, m, a;
    unsigned long long total;

    cin >> n >> m >> a;

    if ((n &&m &&a >= 1) && (n && m && a) <= pow(10, 9))
    {
        unsigned long long x = (n + a - 1) / a;
        unsigned long long y = (m + a - 1) / a; 
        total = x * y;
    }
    cout << total << endl;
}
