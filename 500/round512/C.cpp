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
map <int,int> om;
unordered_map <int,int> um;
queue <int> bq;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string ss;
    cin >> ss;

    int j = 0;

    for(auto i:ss)
    {
        a[j] = (i-'0');
        j++;
    }

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    int ans = a[n-1];

    if(ans == 0)
    {
        cout << "YES\n";
        return 0;
    }

    for(int i=1;i<ans;i++)
    {
        if(ans%i == 0)
        {
            bool flag = true;

            for(int j=i;j<=ans;j+=i)
            {
                flag &= binary_search(a,a+n,j);
            }

            if(flag)
            {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";

    return 0;
}