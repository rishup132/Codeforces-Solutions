#include <bits/stdc++.h>

#define p pair<int,int>

using namespace std;

map <int,int> m;
multiset <p, greater<p> > s;
vector <pair<p,int> > v;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        m[x]++;
    }

    for(auto i:m)
        s.insert({i.second,i.first});

    while(s.size() > 2)
    {
        auto i = s.begin();

        i = s.begin();
        p t1 = *i;
        s.erase(i);

        i = s.begin();
        p t2 = *i;
        s.erase(i);

        i = s.begin();
        p t3 = *i;
        s.erase(i);

        if(t1.first > 1)
            t1.first--, s.insert(t1);

        if(t2.first > 1)
            t2.first--, s.insert(t2);

        if(t3.first > 1)
            t3.first--, s.insert(t3);

        v.push_back({{t1.second,t2.second},t3.second});
    }

    cout << v.size() << endl;

    for(auto i:v)
    {
        set <int, greater<int> > q;
        q.insert(i.first.first);
        q.insert(i.first.second);
        q.insert(i.second);
        
        for(auto i:q)
            cout << i << " ";
        cout << endl;
    }
}