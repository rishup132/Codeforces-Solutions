#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define endl "\n"
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

map <int,int> m;

int32_t main()
{
    //um.reserve(1<<15);
    //um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cnt = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], m[a[i]] = i;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        if(m[x] < cnt)
            cout << 0 << " ";
        else
        {
            cout << m[x] - cnt + 1 << " ";
            cnt = m[x]+1;
        }
    }

    return 0;
}