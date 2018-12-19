#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

map <int,int> m,m1;
int a[MAX],b[MAX];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    k = pow(2,k) - 1;

    for(int i=0;i<n;i++)
        cin >> a[i];

    m[0]++;
    int ans = (n*(n+1))/2;
    int prev = 0;

    for(int i=0;i<n;i++)
    {
        int cnt1 = prev^a[i];
        int cnt2 = prev^(k-a[i]);

        if(m[cnt1] > m[cnt2])
            a[i] = k - a[i];

        prev ^= a[i];
        ans -= m[prev];
        m[prev]++;
    }
    cout << endl;

    cout << ans << endl;

    return 0;
}