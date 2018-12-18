#include <bits/stdc++.h>

//#define int long long
#define mod 1000000007
#define p pair<int,int>

using namespace std;

int a[300010];
vector <int> v[300010];
set <int> s;
unordered_map <int,int> m;
int spf[15000010];

void solve()
{
    m.reserve(1<<15);
    m.max_load_factor(0.25);

    for(int i=1;i<15000010;i++)
        spf[i] = i;

    for(int i=2;i*i<=15000010;i++)
    {
        if(spf[i] == i)
        {
            for(int j=i*i;j<15000010;j+=i)
            {
                if(spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    solve();

    int temp;

    for(int i=0;i<n;i++)
    {
        cin >> temp;

        set <int> ss;
        ss.insert(temp);

        while(temp != 1)
        {
            ss.insert(spf[temp]);

            if(spf[temp]*spf[temp] != temp)
                ss.insert(temp/spf[temp]);

            temp /= spf[temp];
        }

        for(auto j:ss)
            m[j]++;
    }

    int ans = 1e9;

    for(auto i:m)
    {
        int temp = n - i.second;

        if(temp != 0)
            ans = min(ans,temp);
    }

    if(ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
    
    return 0;
}


void seive()
{
    for(int i=1;i<15000010;i++)
        spf[i] = i;
    for(int i=2;i*i<=15000010;i++)
    {
        if(spf[i] == i)
        {
            for(int j=i*i;j<15000010;j+=i)
            {
                if(spf[j] == j)
                    spf[j] = i;
            }
    }
    }
}