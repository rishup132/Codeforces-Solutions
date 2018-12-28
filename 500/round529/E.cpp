#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[1000100][2],b[1000100][2];

int32_t main()
{
    int n;
    cin >> n;

    string s1;
    cin >> s1;

    stack <char> s;
    int j = 1;

    for(char i:s1)
    {
        if(i == '(')
            a[j][1] = a[j-1][1] + 1, a[j][0] = a[j-1][0];
        else
        {
            if(a[j-1][1] > 0)
                a[j][1] = a[j-1][1] - 1, a[j][0] = a[j-1][0];
            else
                a[j][0] = a[j-1][0] + 1, a[j][1] = a[j-1][1];
        }

        j++;
    }

    // for(int i=0;i<=n;i++)
    //     cout << a[i][0] << " " << a[i][1] << endl;

    j = n;

    string s2 = s1;
    reverse(s2.begin(),s2.end());

    for(char i:s2)
    {
        if(i == ')')
            b[j][0] = b[j+1][0] + 1, b[j][1] = b[j+1][1];
        else
        {
            if(b[j+1][0] > 0)
                b[j][0] = b[j+1][0] - 1, b[j][1] = b[j+1][1];
            else
                b[j][1] = b[j+1][1] + 1, b[j][0] = b[j+1][0];
        }

        j--;
    }

    // cout << endl;
    // for(int i=0;i<=n;i++)
    //     cout << b[i][0] << " " << b[i][1] << endl;

    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(s1[i-1] == '(')
        {
            if(a[i-1][1] > 0)
                a[i-1][1]--;
            else
                a[i-1][0]++;
        }
        else
            a[i-1][1]++;

        if(a[i-1][0] == 0 && b[i+1][1] == 0 && a[i-1][1] == b[i+1][0])
                ans++;
    }

    cout << ans << endl;
}