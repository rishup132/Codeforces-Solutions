#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 20000000

using namespace std;

unordered_map <string,int> um;

int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string ss,st;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        cin >> ss;

        vector <int> temp(26,0);

        for(char j:ss)
            temp[j-'a'] ^= 1;

        st = "";

        for(int j:temp)
            st += j == 1 ? '1' : '0';

        ans += um[st];

        for(auto &j:st)
        {
            j = j == '1' ? '0' : '1';
            ans += um[st];
            j = j == '1' ? '0' : '1';
        }

        um[st]++;
    }

    cout << ans << endl;

    return 0;
}