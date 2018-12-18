#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <int> a[5050];
bool mark[5050],mark1[5050];
vector <pair<int,int> > v;

bool myfunc(pair <ll,ll> a, pair <ll,ll> b)
{
    return a.first > b.first;
}

void dfs(int m)
{
    mark[m] = true;

    for(int i=0;i<a[m].size();i++)
    {
        if(mark[a[m][i]] != true)
            dfs(a[m][i]);
    }
}

int dfs1(int m)
{
    mark1[m] = true;
    int count = 1;

    for(int i=0;i<a[m].size();i++)
    {
        if(mark[a[m][i]] != true && mark1[a[m][i]] != true)
            count += dfs1(a[m][i]);
    }

    return count;
}

int main()
{
    int n,m,s,x,y;
    cin >> n >> m >> s;

    for(int i=0;i<m;i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
    }

    memset(mark,false,5050*sizeof(mark[0]));

    dfs(s);

    for(int i=1;i<=n;i++)
    {
        if(mark[i] == false)
        {
            memset(mark1,false,5050*sizeof(mark1[0]));
            v.push_back(make_pair(dfs1(i),i));
        }
    }

    sort(v.begin(),v.end(),myfunc);

    int count = 0;

    for(int i=0;i<v.size();i++)
    {
        if(mark[v[i].second] == false)
        {
            count++;
            dfs(v[i].second);
        }
    }

    cout << count << endl;
} 