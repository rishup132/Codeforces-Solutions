#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        if(s[i] == 'S')
        {
            int c1,c2;
            c1 = c2 = 0;

            for(int j=i-1;j>=0;j--)
            {
                if(s[j] == 'S')
                    break;

                c1++;
            }

            for(int j=i+1;j<n;j++)
            {
                if(s[j] == 'S')
                    break;

                c2++;
            }

            ans = max(ans,c1+c2+1);
        }
        else
            cnt++;
    }

    if(ans == 0)
        ans = cnt;

    cout << min(ans,cnt) << endl;
}
