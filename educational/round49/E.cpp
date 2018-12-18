#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool flag = true;

        for(int i=0;i<n/2;i++)
        {
            if(s[i] != s[n-i-1] && abs(s[i]-s[n-i-1]) != 2)
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}