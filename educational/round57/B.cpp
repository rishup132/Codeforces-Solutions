#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define mod 998244353

using namespace std;

int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt1,cnt2;
    cnt1 = cnt2 = 1;

    for(int i=0;i<n;i++)
    {
        if(s[i] != s[0])
            break;
        
        cnt1++;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(s[i] != s[n-1])
            break;
        
        cnt2++;
    }

    if(s[0] == s[n-1])
        cout << (cnt1*cnt2)%mod << endl;
    else
        cout << cnt1+cnt2-1 << endl;
}