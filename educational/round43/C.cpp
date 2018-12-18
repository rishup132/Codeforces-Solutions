#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

#define pt pair <int,int>
vector <pair<pt,int> > v;

bool myfunc(pair<pt, int> a, pair<pt, int> b)
{
    if (a.fi.fi != b.fi.fi)
        return a.fi.fi < b.fi.fi;
    
    return a.fi.se > b.fi.se;
}

int main()
{
    int n;
    cin >> n;

    int x,y;

    for(int i=1;i<=n;i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(make_pair(x,y),i));
    }

    sort(v.begin(),v.end(),myfunc);

    /*for(int i=0;i<v.size();i++)
        cout << v[i].first << " " << v[i].second << endl;;
    cout << endl;*/

    for(int i=0;i<(n-1);i++)
    {
        if(v[i+1].fi.se <= v[i].fi.se)
        {
            cout << v[i+1].se << " " << v[i].se << endl;
            return 0;
        }
    }

    puts("-1 -1");
    return 0;
}