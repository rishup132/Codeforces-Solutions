#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>

using namespace std;

int a[200010];
vector <p> v;
set <int> s;
map <int,int> m;

int32_t main()
{
    int n;
    cin >> n;
    int ans = 1;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        ans = max(ans,x+y);
    }

    cout << ans << endl;
}