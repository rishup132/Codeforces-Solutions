#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <int> v[100];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    char x = 'z';
    x++;
    int cnt = 0;

    for(char i:s)
    {
        if(x == i)
            cnt++;
        else
            v[x-'a'].push_back(cnt), cnt = 1, x = i;
    }

    v[x-'a'].push_back(cnt);

    int ans = 0;

    for(int i=0;i<26;i++)
    {
        int cnt = 0;

        for(int j:v[i])
            cnt += j/k;

        ans = max(ans,cnt);
    }

    cout << ans << endl;
}