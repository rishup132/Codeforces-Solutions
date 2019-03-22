#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    for(int j=1;j<=t;j++)
    {
        int n;
        cin >> n;

        string s;

        while(n)
        {
            s += (char) (n%10 + '0');
            n /= 10;
        }

        reverse(s.begin(),s.end());

        cout << "Case " << j << ": ";

        for(char i:s)
            cout << i;

        s.pop_back();

        reverse(s.begin(),s.end());

        cout << s << endl;
    }
}