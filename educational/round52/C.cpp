#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    int t1 = 1e9;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;

        t1 = min(t1,x);

        a[1]++;
        a[x+1]--;
    }

    for(int i=2;i<=2e5;i++)
        a[i] += a[i-1];

    int curr = 0;
    int count = 0;

    for(int i=2e5;i>=1;i--)
    {
        if(a[i] == n)
            break;

        curr += a[i];

        if(curr > k)
        {
            curr = a[i];
            count++;
        }
    }

    if(curr > 0)
        count++;

    cout << count << endl;

    return 0;
}