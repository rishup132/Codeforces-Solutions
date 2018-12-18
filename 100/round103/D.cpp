#include <bits/stdc++.h>

#define p pair<int,int>
using namespace std;

vector <p> v[100010];
vector <pair<p,int> > e;
int d[100010];
int n,m,s;

int main()
{
    cin >> n >> m >> s;

    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;

        v[x].push_back({z,y});
        v[y].push_back({z,x});

        e.push_back({{x,y},z});
    }

    int l;
    cin >> l;

    for(int i=0;i<100010;i++)
        d[i] = INT_MAX;

    priority_queue <p, vector <p>, greater <p> > q;

    q.push({0,s});
    d[s] = 0;

    while(!q.empty())
    {
        p pa = q.top();
        q.pop();

        for(auto i:v[pa.second])
        {
            if(pa.first + i.first < d[i.second])
            {
                d[i.second] = pa.first + i.first;
                q.push({pa.first+i.first,i.second});
            }
        }
    }

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(d[i] == l)
            count++;
    }

    for(auto i:e)
    {
        if(d[i.first.first] < l && d[i.first.second] < l)
        {
            int t1 = l - d[i.first.first];
            int t2 = l - d[i.first.second];

            if(t1+t2 == i.second)
                count++;
            else if(t1+t2 < i.second)
                count += 2;
        }
        else if(d[i.first.first] < l)
        {
            int t1 = l - d[i.first.first];

            if(t1 < i.second && d[i.first.second]+i.second-t1 > l)
                count++;
        }
        else if(d[i.first.second] < l)
        {
            int t1 = l - d[i.first.second];

            if(t1 < i.second && d[i.first.first]+i.second-t1 > l)
                count++;
        }
    }

    cout << count << endl;
}