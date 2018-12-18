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

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n >> m >> k;

    if((2*n*m)%k)
    {
        cout << "NO\n";
        return 0;
    }

    int t1,t2;
    t1 = n/__gcd(n,k);
    k /= __gcd(n,k);
    t2 = m/__gcd(m,k);
    k /= __gcd(m,k);

    if(k == 2)
        ;
    else if(2*t1 <= n)
        t1 *= 2;
    else
        t2 *= 2;

    cout << "YES\n";
    cout << 0 << " " << 0 << endl;
    cout << t1 << " " << 0 << endl;
    cout << 0 << " " << t2 << endl;

    return 0;
}