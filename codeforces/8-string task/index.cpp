// problem link: https://codeforces.com/problemset/problem/118/A
/*
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.
*/
#include <bits/stdc++.h>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str, text = "";
    cin >> str;
    if (1 <= str.length() && 100 >= str.length())
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
            {
                text = text + "." + str[i];
            }
        }
        cout << text << endl;
    }
}

