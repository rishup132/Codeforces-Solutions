#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 2000000

using namespace std;

int a[MAX],b[MAX];

vector <int> v;
vector <p> vp;
set <int> s;
set <p> sp;
map <int,int> m;
unordered_map <int,int> um;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int x,y;
    cin >> x >> y;

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        a[i] = max(0LL,a[i]-x);
        ans += ((a[i]+x+y-1)/(x+y))*y;
    }

    cout << ans << endl;

    return 0;
}