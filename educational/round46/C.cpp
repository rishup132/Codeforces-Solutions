#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <ll,ll> m;
ll a[200010];

int main()
{
    int n;
    cin >> n;

    ll x,y;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        m[x]++;
        m[y+1]--;
    }

    ll st,cnt;
    st = cnt = 0;

    memset(a,0,200010*sizeof(a[0]));

    for(map <ll,ll> :: iterator it = m.begin();it != m.end();it++ )
    {
        a[cnt] += it->first - st;
        cnt += it->second;
        st = it->first;
    }

    for(int i=1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;
}