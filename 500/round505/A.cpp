#include<bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    if(n == 1)
    {
        cout << "Yes" << endl;
        return 0;
    }

    map <char,int> m;

    for(int i=0;i<s.size();i++)
        m[s[i]]++;

    map <char,int> :: iterator it;

    int mi = 0;

    for(it = m.begin();it != m.end();it++)
    {
        mi = max(mi,it->second);
    }

    if(mi < 2)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}