#include<bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    string s;
    cin >> s;

    s += s;

    int n = s.size();

    int ans = 0;
    int curr = 1;

    for(int i=1;i<n;i++)
    {
        if(s[i] == s[i-1])
        {
            ans = max(ans,curr);
            curr = 1;
        }
        else
            curr++;
    }

    cout << min(n/2,max(ans,curr)) << endl;
}