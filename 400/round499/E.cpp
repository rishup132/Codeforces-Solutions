#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

pair<string,pair<int,int> > v[1000100];

int dfs(int st)
{
    cout << st << endl;
    
    if(v[st].first == "IN")
        return v[st].second.first;

    if(v[st].first == "NOT")
    {
        int temp = dfs(v[st].second.first) == 1 ? 0 : 1;

        cout << temp << endl;
        return temp;
    }

    int t1 = dfs(v[st].second.first);
    int t2 = dfs(v[st].second.second);

    cout << t1 << t2 << endl;

    if(v[st].first == "AND")
        t1 = t1 && t2;
    else if(v[st].first == "OR")
        t1 = t1 || t2;
    else
        t1 = t1 ^ t2;

    cout << t1 << endl;
    return t1;
}

main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> v[i].first;

        if(v[i].first == "IN" || v[i].first == "NOT")
        {
            cin >> v[i].second.first;
            v[i].second.second = 0;
        }
        else
        {
            cin >> v[i].second.first >> v[i].second.second;
        }
    }

    dfs(1);

    return 0;
}