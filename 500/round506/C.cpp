#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

vector <pair<int,int> > s;

bool cmp(pair<int,int> x, pair <int,int> y)
{
    if(x.first == y.first)
        return x.second > y.second;
    else
        return x.first < y.first;
}

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        s.push_back(make_pair(y,x));
    }

    if(n == 2)
    {
        cout << max(abs(s[0].first-s[0].second),abs(s[1].first-s[1].second)) << endl;
        return 0;
    }

    sort(s.begin(),s.end(),cmp);

    int a,ans1,ans2;

    vector <int> vv;

    for(int i=0;i<s.size();i++)
        vv.push_back(s[i].second);

    sort(vv.begin(),vv.end());

    a = vv[n-2];

    if(s[0].first < a)
        ans2 = 0;
    else
        ans2 = s[0].first-a;

    a = INT_MIN;

    for(int i=1;i<s.size();i++)
        a = max(a,s[i].second);

    if(s[1].first < a)
        ans1 = 0;
    else
        ans1 = s[1].first-a;
    
    
    cout << max(ans1,ans2) << endl;
}