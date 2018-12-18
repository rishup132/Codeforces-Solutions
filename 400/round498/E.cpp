#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

vector <int> v[200010];
int child[200010];
bool marked[200010];
vector <int> p;
map <int,int> m;

void dfs(int n)
{
    p.push_back(n);
    marked[n] = true;
    child[n] = 1;

    for(int i=0;i<v[n].size();i++)
    {
        if(!marked[v[n][i]])
        {
            dfs(v[n][i]);
            child[n] += child[v[n][i]];
        }
    }
}

int main()
{
    int n,q,x;
    cin >> n >> q;

    for(int i=2;i<=n;i++)
    {
        cin >> x;
        v[x].push_back(i);
        v[i].push_back(x);
    }

    for(int i=1;i<=n;i++)
        sort(v[i].begin(),v[i].end());

    memset(marked,false,200010*sizeof(marked[0]));
    memset(child,0,200010*sizeof(child[0]));

    dfs(1);

    for(int i=0;i<p.size();i++)
        m[p[i]] = i;

    while(q--)
    {
        int x,y;
        cin >> x >> y;

        if(child[x] < y)
            cout << -1 << endl;
        else
            cout << p[m[x]+y-1] << endl;
    }
}