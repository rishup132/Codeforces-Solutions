#include <bits/stdc++.h>

#define int long long

using namespace std;

vector <int> v;
int a,b;

int solve(int l, int r)
{
    int c1 = upper_bound(v.begin(),v.end(),r) - v.begin();
    int c2 = lower_bound(v.begin(),v.end(),l) - v.begin();

    int cnt = c1 - c2;

    if(cnt == 0)
        return a;

    if(l == r)
        return b*cnt;

    int mid = (l+r)/2;
    c1 = solve(l,mid);
    c2 = solve(mid+1,r);

    return min(b*cnt*(r-l+1),c1+c2);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k >> a >> b;

    for(int i=0;i<k;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int cnt = pow(2,n);

    cout << solve(1,cnt) << endl;
}