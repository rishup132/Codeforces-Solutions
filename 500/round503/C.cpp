#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

vector <int> v[5050];

bool cmp(vector <int> a, vector <int> b)
{
    return a.size() >= b.size();
}

main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
    }

    for(int i=1;i<=m;i++)
        sort(v[i].begin(),v[i].end());

    sort(v+2,v+m+1,cmp);
    
    priority_queue<pair<int,int>, vector<pair<int,int> > >q;

    for(int i=2;i<=m;i++)
    {
        int j = 0;

        if(v[i].size() >= q.size()+v[1].size())
        {
            j = v[i].size() - q.size() - v[1].size();

            cout << j << " ";

            j = j/2 + 1;

            cout << j << " ";

            for(int k=0;k<j;k++)
                q.push((v[i][k]);
        }

        while(!q.empty() && j < v[i].size() && q.top() > v[i][j])
        {
            q.pop();
            q.push(v[i][j]);
            j++;
        }
    }

    int ans = 0;

    while(!q.empty())
    {
        ans += q.top();
        q.pop();
    }

    cout << ans << endl;
}