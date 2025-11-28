// problem link: https://codeforces.com/problemset/problem/158/A
/*
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest(n ≥ k),
and you already know their scores.Calculate how many participants will advance to the next round.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, repeatNum, repeatNumCount, total = 0;
    cin >> n >> k;
    int score[n];

    if (1 <= n <= 50 && 1 <= k <= 50 && k <= n)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> score[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (score[i] >= score[k] && score[i] > 0)
            {
                total++;
            }
        }
        cout << total << endl;
    }
}
