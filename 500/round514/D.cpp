#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

vector <int> v;
vector <p> vp;
set <int> s;
set <p> sp;
map <int,int> m;
unordered_map <int,int> um;
queue <int> bq;

bool solve(double val)
{
    double l = -1e9;
    double h = 1e9;

    while(l <= h)
    {
        double mid = (l+h)/2;

        bool flag = true;
        int c1,c2;
        c1 = c2 = 0;

        for(auto i: v)
        {
            double temp = (i.first - mid)*(i.first - mid) + (i.second - val)*(i.second - val) - val*val;

            if(temp > 0)
                flag = false;
            else
                c1++;
        }

        if(flag)
            return true;

        int t1 = mid - 1e-7;

        for(auto i: v)
        {
            double temp = (i.first - t1)*(i.first - t1) + (i.second - val)*(i.second - val) - val*val;

            if(temp > 0)
                flag = false;
            else
                c2++;
        }

        if(c1 )
    }
}

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool f1,f2;
    f1 = f2 = false;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        if(y > 0)
            f1 = true;
        else
            f2 = true;

        v.push_back({x,y});
    }

    if(!(f1 && f2))
    {
        cout << -1 << endl;
        return 0;
    }

    double l = 0;
    double h = 1e9;
    double ans = 0;

    while(l <= h)
    {
        double mid = (l+h)/2;

        if(solve(mid))
        {
            ans = mid;
            h = mid - 1e-7;
        }
        else
        {
            l = mid + 1e-7;
        }
    }

    cout << ans << endl;

    return 0;
}