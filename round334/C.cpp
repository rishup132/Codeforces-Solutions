#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s,s1;
    cin >> s;

    int i = 0;

    for(i=0;i<s.size()-1;i++)
    {
        if(s[i] == s[i+1])
            break;
    }

    s1 = "";

    for(int j=0;j<=i;j++)
    {
        if(s[j] == '0')
            s1 += '1';
        else
            s1 += '0';
    }

    for(int j=i+1;j<s.size();j++)
        s1 += s[j];

    s = s1;
    i = s.size()-1;

    for(i=s.size()-1;i>0;i--)
    {
        if(s[i] == s[i-1])
            break;
    }

    s1 = "";

    for(int j=0;j<i;j++)
        s1 += s[j];

    for(int j=i;j<s.size();j++)
    {
        if(s[j] == '0')
            s1 += '1';
        else
            s1 += '0';
    }

    s = s1;
    s1 = s[0];

    for(int i=1;i<s.size();i++)
    {
        if(s1[s1.size()-1] != s[i])
            s1 += s[i];
    }

    cout << s1.size() << endl;
}