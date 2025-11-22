// problem link : https://codeforces.com/problemset/problem/231/A

/*Problem : One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

 This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, willSolve = 0, p, v, t;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p >> v >> t;
        if ((p && v) == 1 || (v && t) == 1 || (p && t) == 1)
        {
            willSolve = willSolve + 1;
        }
    }
    cout << willSolve << endl;
    return 0;
}