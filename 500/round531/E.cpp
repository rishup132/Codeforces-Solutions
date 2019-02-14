#include <bits/stdc++.h>
 
#define int long long
#define endl "\n"
#define mod 998244353
 
using namespace std;

int a[300010];
map <int,vector <int> > m;
int b[300010];
 
int32_t main()
{
	int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i], m[a[i]].push_back(i);

    for(auto i:m)
    {
        if(i.second.size() > 1)
            b[i.second[0]] += 1, b[i.second.back()+1] -= 1;
    }

    for(int i=1;i<n;i++)
        b[i] += b[i-1];

    // for(int i=0;i<n;i++)
    //     cout << b[i] << " ";
    // cout << endl;

    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        if(b[i] == 0)
            cnt++;
        else
        {
            cnt += 2;

            while(b[i] != 0)
                i++;
        }
    }

    if(b[n-1] > 0)
        cnt--;

    int ans = 1;

    while(--cnt)
        ans = (ans%mod * 2%mod)%mod;

    cout << ans << endl;
}