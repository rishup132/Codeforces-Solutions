#include <bits/stdc++.h>

using namespace std;

vector <int> v[200010];
bool visited[200010],mark[200010],bulb[200010];
int subtree[200010],subtree1[200010];

void dfs(int idx)
{
    visited[idx] = false;

    if(bulb[idx])
        subtree[idx] = 1;

    subtree1[idx] = 1;

    for(int i=0;i<v[idx].size();i++)
    {
        if(visited[v[idx][i]])
        {
            dfs(v[idx][i]);
            subtree[idx] += subtree[v[idx][i]];
            subtree1[idx] += subtree1[v[idx][i]];
        }
    }
}

int main()
{
    int n,x;
    cin >> n;

    for(int i=2;i<=n;i++)
    {
        cin >> x;
        v[x].push_back(i);
    }

    for(int i=1;i<=n;i++)
        cin >> bulb[i];

    memset(visited,true,100010*sizeof(visited[0]));
    memset(mark,false,100010*sizeof(mark[0]));
    memset(subtree,0,100010*sizeof(subtree[0]));

    dfs(1);

    int q;
    cin >> q;

    while(q--)
    {
        string s;
        cin >> s;

        if(s == "get")
        {
            cin >> x;

            if(mark[x])
                cout << subtree1[x] - subtree[x] << endl;
            else
                cout << subtree[x] << endl;
        }
    }
}