#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int a[30];

    for(int i=0;i<26;i++)
        a[i] = i+1;

    sort(s.begin(),s.end());

    char b = s[0];
    int ans = a[s[0]-'a'];

    //cout << s << endl;

    for(int i=1;i<n && k > 1;i++)
    {
        if(s[i]-b <= 1)
            continue;
        else
        {
            //cout << a[s[i]-'a'] << " ";
            k--;
            ans += a[s[i]-'a'];
            b = s[i];
        }
    }

    if(k != 1)
        cout << -1 << endl;
    else
        cout << ans << endl;
}