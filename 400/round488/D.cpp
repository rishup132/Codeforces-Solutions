#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    pair<int,int> p[100],q[100];

    for(int i=0;i<n;i++)
        cin >> p[i].first >> p[i].second;

    for(int i=0;i<m;i++)
        cin >> q[i].first >> q[i].second;

    set <int> s1,s2;

    for(int i=0;i<n;i++)
    {
        set <int> v;

        for(int j=0;j<m;j++)
        {
            if(p[i].first == q[j].first && p[i].second != q[j].second)
                v.insert(p[i].first);

            if(p[i].first != q[j].first && p[i].second == q[j].second)
                v.insert(p[i].second);

            if(p[i].first == q[j].second && p[i].second != q[j].first)
                v.insert(p[i].first);

            if(p[i].first != q[j].second && p[i].second == q[j].first)
                v.insert(p[i].second);
        }

        //cout << v.size() << " " << *v.begin() << endl;

        if(v.size() == 1)
            s1.insert(*v.begin());
    }

    for(int j=0;j<m;j++)
    {
        set <int> v;

        for(int i=0;i<n;i++)
        {
            if(p[i].first == q[j].first && p[i].second != q[j].second)
                v.insert(p[i].first);

            if(p[i].first != q[j].first && p[i].second == q[j].second)
                v.insert(p[i].second);

            if(p[i].first == q[j].second && p[i].second != q[j].first)
                v.insert(p[i].first);

            if(p[i].first != q[j].second && p[i].second == q[j].first)
                v.insert(p[i].second);
        }

        //cout << v.size() << " " << *v.begin() << endl;

        if(v.size() == 1)
            s2.insert(*v.begin());
    }

    if(s1.size() == 1 && s2.size() == 1)
    {
        if(*s1.begin() == *s2.begin())
            cout << *s1.begin() << endl;
        else
            cout << 0 << endl;
    }
    else
        cout << -1 << endl;
}