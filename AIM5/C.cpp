#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>

using namespace std;

vector <pair<p,p> > v,v1,v2;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x,y,x1,y1;
        cin >> x >> y >> x1 >> y1;

        v.push_back({{x,y},{x1,y1}});
    }

    v1.push_back(v[0]);

    for(int i=1;i<n;i++)
    {
        pair <p,p> t = v1[i-1];

        t.first.first = max(t.first.first, v[i].first.first);
        t.first.second = max(t.first.second, v[i].first.second);
        t.second.first = min(t.second.first, v[i].second.first);
        t.second.second = min(t.second.second, v[i].second.second);

        v1.push_back(t);
    }

    v2.push_back(v[n-1]);

    for(int i=n-2;i>=0;i--)
    {
        pair <p,p> t = v2[n-2-i];

        t.first.first = max(t.first.first, v[i].first.first);
        t.first.second = max(t.first.second, v[i].first.second);
        t.second.first = min(t.second.first, v[i].second.first);
        t.second.second = min(t.second.second, v[i].second.second);

        v2.push_back(t);
    }

    reverse(v2.begin(),v2.end());

    /*cout << endl;

    for(int i=0;i<n;i++)
    {
        cout << v1[i].first.first << " " << v1[i].first.second << " " << v1[i].second.first << " " <<
            v1[i].second.second << endl;
    }
    cout << endl;
    for(int i=0;i<n;i++)
    {
        cout << v2[i].first.first << " " << v2[i].first.second << " " << v2[i].second.first << " " <<
            v2[i].second.second << endl;
    }*/

    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            if(v2[1].first.first <= v2[1].second.first && v2[1].first.second <= v2[1].second.second)
            {
                cout << v2[1].first.first << " " << v2[1].first.second << endl;
                return 0;
            }
        }
        else if(i == n-1)
        {
            if(v1[n-2].first.first <= v1[n-2].second.first && v1[n-2].first.second <= v1[n-2].second.second)
            {
                cout << v1[n-2].first.first << " " << v1[n-2].first.second << endl;
                return 0;
            }
        }
        else
        {
            pair <p,p> t;

            t.first.first = max(v2[i+1].first.first, v1[i-1].first.first);
            t.first.second = max(v2[i+1].first.second, v1[i-1].first.second);
            t.second.first = min(v2[i+1].second.first, v1[i-1].second.first);
            t.second.second = min(v2[i+1].second.second, v1[i-1].second.second);

            if(t.first.first <= t.second.first && t.first.second <= t.second.second)
            {
                cout << t.first.first << " " << t.first.second << endl;
                return 0;
            }
        }
    }
}