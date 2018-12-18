#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

vector <pair<int,int> > v;

bool myfun(pair <int,int> a, pair<int,int> b)
{
    return abs(a.first-a.second) > abs(b.first-b.second);
}

main()
{
    int n,m;
    cin >> n >> m;

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        sum += y;

        v.push_back(make_pair(x,y));
    }

    if(sum > m)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(v.begin(),v.end(),myfun);

    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        sum -= v[i].second;
        sum += v[i].first;
        
        if(sum > m)
        {
            cout << n-i << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}