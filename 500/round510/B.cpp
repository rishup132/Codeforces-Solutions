#include <bits/stdc++.h>

#define int long long

using namespace std;

map <string,int> m;

int32_t main()
{
    int n;
    cin >> n;
    set <char> ss;

    m["A"] = 1e9;
    m["B"] = 1e9;
    m["C"] = 1e9;
    m["AB"] = 1e9;
    m["AC"] = 1e9;
    m["BC"] = 1e9;
    m["ABC"] = 1e9;

    for(int i=0;i<n;i++)
    {
        int x;
        string s;

        cin >> x >> s;

        for(auto i:s)
            ss.insert(i);

        sort(s.begin(),s.end());
        m[s] = min(m[s],x);
    }

    if(ss.size() == 3)
    {
        int an = 1e9;

        an = min(an,m["A"]+m["B"]+m["C"]);
        an = min(an,m["AC"]+m["B"]);
        an = min(an,m["AC"]+m["BC"]);
        an = min(an,m["AC"]+m["AB"]);
        an = min(an,m["AB"]+m["C"]);
        an = min(an,m["AB"]+m["AC"]);
        an = min(an,m["AB"]+m["BC"]);
        an = min(an,m["BC"]+m["A"]);
        an = min(an,m["BC"]+m["AB"]);
        an = min(an,m["BC"]+m["AC"]);
        an = min(an,m["ABC"]);

        cout << an << endl;
    }
    else
        cout << -1 << endl;
}