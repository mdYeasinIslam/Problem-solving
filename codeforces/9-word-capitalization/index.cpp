/* 
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

problem link: https://codeforces.com/problemset/problem/281/A
*/ 

#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(str.length() < pow(10,3)){
          str[0] = toupper(str[0]);
          cout << str << endl;
    }
}