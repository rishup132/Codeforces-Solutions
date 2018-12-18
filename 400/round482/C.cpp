#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector <ll int> v[300010],v1[300010];
bool visited[300010];
ll int subtree[300010];

void dfs(int idx)
{
    visited[idx] = false;
    subtree[idx] = 1;
    v1[idx].push_back(subtree[idx]);

    for(int i=0;i<v[idx].size();i++)
    {
        if(visited[v[idx][i]])
        {
            dfs(v[idx][i]);
            subtree[idx] += subtree[v[idx][i]];
            v1[idx].push_back(subtree[v[idx][i]]);
        }
    }
}

int main()
{
    int n,x,y,ti,ta;
    cin >> n >> x >> y;

    for(int i=1;i<n;i++)
    {
        cin >> ti >> ta;
        v[ti].push_back(ta);
        v[ta].push_back(ti);
    }

    memset(visited,true,300010*sizeof(visited[0]));
    memset(subtree,0,300010*sizeof(subtree[0]));

    dfs(y);

    ll int count = 0;

    for(int i=1;i<=n;i++)
    {
        ll int temp = 0;

        for(int j=0;j<v1[i].size();j++)
        {
            for(int k=j+1;k<v1[i].size();k++)
                temp += v1[i][j]*v1[i][k];
        }

        count += 2*temp;
    }

    ll int temp = subtree[x];

    memset(visited,true,300010*sizeof(visited[0]));
    memset(subtree,0,300010*sizeof(subtree[0]));

    dfs(x);

    cout << count - temp*subtree[y] << endl;
}