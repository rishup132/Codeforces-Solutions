#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    int c1,c2;
    c1 = c2 = 0;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] != s2[i])
        {
            if(s1[i] == '4')
                c1++;
            else
                c2++;
        }
    }

    cout << min(c1,c2) + abs(c1-c2) << endl;
}