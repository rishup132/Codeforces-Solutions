#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 2000010

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

    int n,x;
    cin >> n >> x;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    sort(b,b+n);

    a[x-1] += b[n-1];
    int temp = a[x-1];

    sort(a,a+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        if(a[i] == temp)
        {
            temp = i+1;
            break;
        }
    }

    int j = 0;
    int ans = temp;

    for(int i=temp;i<n;i++)
    {
        if(a[i]+b[j] > a[temp-1])
            ans++;
        else
            j++;
    }

    cout << ans << endl;

    return 0;
}