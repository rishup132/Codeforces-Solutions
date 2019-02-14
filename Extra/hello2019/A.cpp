#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    for(int i=0;i<5;i++)
    {
        string s1;
        cin >> s1;

        if(s1[0] == s[0] || s1[1] == s[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}