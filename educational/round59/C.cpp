#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[200010];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    string s;
    cin >> s;

    vector <pair <char,vector <int> > > v;

    for(int i=0;i<n;i++)
    {
        if(v.size() == 0)
        {
            vector <int> temp;
            temp.push_back(a[i]);
            v.push_back({s[i],temp});
        }
        else
        {
            if(v.back().first == s[i])
                v.back().second.push_back(a[i]);
            else
            {
                vector <int> temp;
                temp.push_back(a[i]);
                v.push_back({s[i],temp});
            }
        }
    } 

    int ans = 0; 

    for(auto i:v)
    {
        sort(i.second.begin(),i.second.end(), greater<int>());

        int cnt = k;

        for(int j:i.second)
        {
            if(cnt == 0)
                break;

            cnt--;

            ans += j;
        }
    }

    cout << ans << endl;
}