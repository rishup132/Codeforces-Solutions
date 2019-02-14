#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

map <char,int> m;
int f[200010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    f[0] = 1;

    for(int i=1;i<2e5;i++)
        f[i] = (i * f[i-1])%mod;

    string s;
    cin >> s;

    for(char i:s)
        m[i]++;

    int q;
    cin >> q;

    while(q--)
    {
        int x,y;
        cin >> x >> y;

        if(s[x-1] == s[y-1])
        {
            if(m[x-1] > s.size()/2)
                cout << 0 << endl;
            else
            {
                
            }
        }
    }
}