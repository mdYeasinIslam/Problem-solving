#include <bits/stdc++.h>
using namespace std;

int main()
{
    int wordCount;
    cin >> wordCount;
    int count = 0;
    for (int i = 0; i < wordCount && wordCount != 0; i++)
    {
        string words;
        cin >> words;
        string result="";
        int eachWordSize = words.length();

        if (eachWordSize > 10)
        {
            for (int j = 0; j < eachWordSize; j++)
            {
                if (j != 0 && j != (eachWordSize - 1))
                {
                    count = count + 1;
                }
            }
            result = words[0] + to_string(count) + words[words.length() - 1];
            cout << result << endl;
        }
        else
        {
            cout << words<<endl;
        }
        count = 0;
    }
    return 0;
}
