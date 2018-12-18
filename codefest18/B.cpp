#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n,m;
    cin >> n >> m;

    vector <int> v1,v2,v3;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        if(x > m)
            v2.push_back(x);
        else if(x < m)
            v1.push_back(x);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),greater<int>());

    int ans = 0;

    while(!v1.empty() && v1.size() > n/2)
    {
        ans += abs(m-v1[v1.size()-1]);
        v1.pop_back();
    }

    while(!v2.empty() && v2.size() > n/2)
    {
        ans += abs(m-v2[v2.size()-1]);
        v2.pop_back();
    }

    cout << ans << endl;
}