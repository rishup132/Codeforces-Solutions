#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n;
    cin >> n;

    vector <pair<int,string> > v;

    for(int i=0;i<n;i++)
    {
        string s;
        int x;

        cin >> s >> x;

        v.push_back(make_pair(x,s));
    }

    sort(v.begin(),v.end());

    set <int> vv;
    set <string> s;

    if(v[0].first > 0)
    {
        cout << -1 << endl;
        return 0;
    }

    vv.insert(v[0].first);
    s.insert(v[0].second);

    for(int i=1;i<v.size();i++)
    {
        if(v[i].first > i)
        {
            cout << -1 << endl;
            return 0;
        }

        if(v[i].first == 0)
        {
            vv.insert(v[i].first);
            s.insert(v[i].second);
        }
        else
        {
            vv.insert(vv.begin()+v[i].first,*min_element(vv.begin(),vv.begin()+v[i].first)-1);
            s.insert(s.begin()+v[i].first,v[i].second);
        }
    }

    int temp = abs(*min_element(vv.begin(),vv.end())) + 1;

    auto i = vv.begin();
    auto j = s.begin();

    while(i != vv.end())
    {
        cout << *j << " " << *i + temp << endl;
        i++;
        j++;
    }
}