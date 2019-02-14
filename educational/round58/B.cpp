#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    int cnt1,cnt2;
    cnt1 = cnt2 = -1;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '[')
        {
            cnt1 = i;
            break;
        }
    }

    if(cnt1 == -1)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i=cnt1;i<s.size();i++)
    {
        if(s[i] == ':')
        {
            cnt2 = i;
            break;
        }
    }

    if(cnt2 == -1)
    {
        cout << -1 << endl;
        return 0;
    }

    int l = cnt2;

    cnt1 = cnt2 = -1;

    for(int i=s.size()-1;i>=l;i--)
    {
        if(s[i] == ']')
        {
            cnt1 = i;
            break;
        }
    }

    if(cnt1 == -1)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i=cnt1;i>=l;i--)
    {
        if(s[i] == ':')
        {
            cnt2 = i;
            break;
        }
    }

    if(cnt2 == -1)
    {
        cout << -1 << endl;
        return 0;
    }

    int r = cnt2;

    if(l == r)
    {
        cout << -1 << endl;
        return 0;
    }
    
    int ans = 0;

    for(int i=l+1;i<r;i++)
    {
        if(s[i] == '|')
            ans++;
    }

    cout << ans+4 << endl;
}