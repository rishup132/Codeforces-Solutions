#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <ll int,ll int> mm;

int main()
{
    int n;
    cin >> n;

    ll int x,y;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        
        if(mm[x] < y)
            mm[x] = y;
    }

    int m;
    cin >> m;

    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        
        if(mm[x] < y)
            mm[x] = y;
    }

    map <ll int,ll int> :: iterator it;
    ll int ans = 0;

    for(it = mm.begin();it != mm.end();it++)
        ans += it->second;

    cout << ans << endl;
}