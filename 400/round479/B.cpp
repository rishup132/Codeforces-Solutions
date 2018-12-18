#include <bits/stdc++.h>

using namespace std;

map <string,int> m;

int main()
{
    int n;
    cin >> n;

    string s,s1;
    cin >> s;

    for(int i=0;i<n-1;i++)
    {
        s1 = "";
        s1.push_back(s[i]);
        s1.push_back(s[i+1]);
        m[s1]++;
    }

    int ans = 0;

    map <string,int> :: iterator it;

    for(it = m.begin();it != m.end();it++)
    {
        if(ans < it->second)
        {
            ans = it->second;
            s1 = it->first;
        }
    }

    cout << s1 << endl;
}