#include <bits/stdc++.h>

using namespace std;

vector <int> v[100010];
bool visited[100010];
int subtree[100010];

void dfs(int idx)
{
    visited[idx] = false;
    subtree[idx] = 1;

    for(int i=0;i<v[idx].size();i++)
    {
        if(visited[v[idx][i]])
        {
            dfs(v[idx][i]);
            subtree[idx] += subtree[v[idx][i]];
        }
    }
}

int main()
{
    int n,x,y;
    cin >> n;

    for(int i=1;i<n;i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    if(n%2)
    {
        cout << -1 << endl;
        return 0;
    }

    memset(visited,true,100010*sizeof(visited[0]));
    memset(subtree,0,100010*sizeof(subtree[0]));

    dfs(1);

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(subtree[i]%2 == 0)
            count++;
    }

    cout << count-1 << endl;
}