#include <bits/stdc++.h>

#define int long long

using namespace std;

bool prime[1000010];

int32_t main()
{
    for(int i=2;i<=1000000;i++)
    {
        if(!prime[i])
        {
            for(int j=2*i;j<=1000000;j+=i)
                prime[j] = true;
        }
    }

    int n,k;
    cin >> n >> k;

    vector <pair<int,int> > v;

    for(int i=2;i<=1000000;i++)
    {
        if(!prime[i] && k%i == 0)
        {
            int cnt = 0;

            while(k%i == 0)
                k /= i, cnt++;

            v.push_back({i,cnt});
        }
    }

    if(k > 1)
        v.push_back({k,1});

    int ans1 = 1e18;

    for(auto i:v)
    {
        int cnt = n;
        int cnt1 = 0;

        while(cnt)
            cnt /= i.first, cnt1 += cnt;

        ans1 = min(ans1,cnt1/i.second);
    }

    cout << ans1 << endl;
}