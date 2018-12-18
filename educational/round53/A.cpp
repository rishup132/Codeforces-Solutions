#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define endl "\n"
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

int32_t main()
{
    //um.reserve(1<<15);
    //um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=1;i<n;i++)
    {
        if(s[i] != s[i-1])
        {
            cout << "YES\n";
            cout << s[i-1] << s[i] << endl;
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}