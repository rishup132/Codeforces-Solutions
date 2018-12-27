#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    int cnt1 = 0;
    int cnt2 = s.size()-1;
    int cnt = s.size();

    string ans = "";

    while(cnt--)
    {
        if(cnt%2)
            ans += s[cnt2--];
        else
            ans += s[cnt1++];
    }

    reverse(ans.begin(),ans.end());

    cout << ans << endl;
}