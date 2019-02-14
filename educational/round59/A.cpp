#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 2)
        {
            if(s[0] >= s[1])
                cout << "NO\n";
            else
            {
                cout << "YES\n";
                cout << 2 << endl;
                cout << s[0] << " " << s[1] << endl;
            }
        }
        else
        {
            cout << "YES\n";
            cout << 2 << endl;
            cout << s[0] << " ";
            s.erase(s.begin());
            cout << s << endl;
        }
        
    }
}