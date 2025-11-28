// problem link: https://codeforces.com/problemset/problem/50/A
/*
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n,area,maxDominoesNum;
    cin >> m >> n;
    if( 1<=m && m<=16 && 1<=n && n<=16){
        area = m * n;
        if(area >=2){
            maxDominoesNum= round(area/2);
        }
        cout << maxDominoesNum;
    }
    else{
        cout << "no";
    }
}