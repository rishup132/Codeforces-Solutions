#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

string s[100010];
map <int,int> m1,m2;

int32_t main()
{
    int n;
    cin >> n;

    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        int cnt1,cnt2;
        cnt1 = cnt2 = 0;

        string s;
        cin >> s;

        for(char i:s)
        {
            if(i == '(')
                cnt1++;
            else
            {
                if(cnt1 > 0)
                    cnt1--;
                else
                    cnt2++;
            }
        }

        //cout << cnt1 << " " << cnt2 << endl;

        if(cnt1 == 0 && cnt2 == 0)
        {
            cnt++;
            continue;
        }

        if(cnt1 == 0)
            m1[cnt2]++;

        if(cnt2 == 0)
            m2[cnt1]++;
    }

    int ans = cnt/2;

    for(int i=0;i<1e6;i++)
    {
        //cout << m1[i] << " " << m2[i] << endl;
        ans += min(m1[i],m2[i]);
    }

    cout << ans << endl;
}