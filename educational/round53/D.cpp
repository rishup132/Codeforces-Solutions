#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define endl "\n"
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

int32_t main()
{
    //um.reserve(1<<15);
    //um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin >> n >> t;

    vector <int> v;
    int sum = 0;
    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        sum += x;
        v.push_back(x);
    }

    while(sum > 0 && t > 0)
    {
        int temp = t/sum;

        ans += n*temp;
        t -= temp*sum;

        for(int i:v)
        {
            if(i <= t)
                t -= i, ans++;
        }

        vector <int> t1;
        sum = 0;

        for(int i:v)
        {
            if(i <= t)
                t1.push_back(i), sum += i;
        }

        v = t1;
        n = v.size();
    }

    cout << ans << endl;

    return 0;
}