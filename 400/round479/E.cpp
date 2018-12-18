#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector <int> v[300010];
bool visited[300010];
bool flag;

void dfs(int idx)
{
    visited[idx] = false;

    for(int i=0;i<v[idx].size();i++)
    {
        if(visited[v[idx][i]])
            dfs(v[idx][i]);
    }

    if(v[idx].size() != 2)
        flag = false;
}

int main()
{
    int n,m,ti,ta;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        cin >> ti >> ta;
        v[ti].push_back(ta);
        v[ta].push_back(ti);
    }

    memset(visited,true,300010*sizeof(visited[0]));

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(visited[i])
        {
            flag = true;

            dfs(i);

            if(flag)
                count++;
        }
    }

    cout << count << endl;
}