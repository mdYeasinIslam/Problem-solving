#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 0, i = 0, t = 3000;

    while (t > 0)
    {
        if (t > 2000)
        {
            cout << "First"<<t << endl;
            t = t - 3;
            m = m + 1;
            continue;
        }
        if (t > 1000)
        {
            cout << "Second"<<t << endl;
            t = t - 2;
            m = m + 1;
            continue;
        }
        if (m < 1000 && t > 1)
        {
            cout << "Third"<< t << endl;

            t = t - 1;
            m = m + 1;
        }
    }
    if (m > 999)
    {
        // printf("The camel riched at the end and banana left: %d/n", &t);
        cout << "The camel riched at the end and banana left:" << t << endl;
    }
    else
    {
        {
            // printf("The camel can not riched at the end and the distance is: %d/n", &m);
            cout << "The camel can not riched at the end and the distance is:" << m << endl;
        }
    }

    return 0;
}

/*
3000 banana
1 ut
distance 1000km
can travel with 1000 banana at a time
eat 1 banana per km
Q: how much banana will rest after reach to the distance;
*/