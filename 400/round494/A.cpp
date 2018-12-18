#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <int,int> m;

int main()
{
    int n;
    cin >> n;

    int x;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        m[x]++;
    }

    map <int,int> :: iterator it;

    int ans = 0;

    for(it = m.begin();it != m.end();it++)
    {
        if(it->second > ans)
            ans = it->second;
    }

    cout << ans << endl;
}