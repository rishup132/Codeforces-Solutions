#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[1010],b[1010];

int32_t main()
{
    int n,m,k;
    cin >> n >> m >> k;

    // vector <int> v[1000];
    // map <int,int> m1;

    // for(int i=0;i<n;i++)
    //     cin >> a[i], m1[a[i]] = i;

    // for(int i=0;i<n;i++)
    //     cin >> b[i], v[b[i]].push_back(a[i]);

    // for(int i=1;i<=m;i++)
    //     sort(v[i].begin(),v[i].end());

    // int cnt = 0;

    // for(int i=0;i<k;i++)
    // {
    //     int x;
    //     cin >> x;

    //     if(v[b[m1[x]]].back() != x)
    //         cnt++;
    // }

    // cout << cnt << endl;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
        cin >> b[i];

    int cnt = 0;

    for(int i=0;i<k;i++)
    {
        int x;
        cin >> x;
        x--;

        bool flag = true;

        for(int j=0;j<n;j++)
        {
            if(a[j] > a[x] && b[j] == b[x])
                flag = false;
        }

        if(!flag)
            cnt++;
    }

    cout << cnt << endl;
}