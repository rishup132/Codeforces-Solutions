#include<bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[200010];
vector <pair<int,int> > v;

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(x,y));

        a[i] = x*y;
    }

    int ans = a[0];

    for(int i=1;i<n;i++)
        ans = __gcd(ans,a[i]);

    if(ans == 1)
        cout << -1 << endl;
    else
    {
        for(int i=0;i<v.size();i++)
            ans = max(__gcd(ans,v[i].first),__gcd(ans,v[i].second));

        cout << ans << endl;
    }
}