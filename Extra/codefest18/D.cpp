#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

vector <int> v[200010];
bool vis[200010];
int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=0;i<200010;i++)
        sort(v[i].begin(),v[i].end());

    for(int i=0;i<n;i++)
        cin >> a[i];

    stack <int> s;

    for(int i=n-1;i>0;i--)
        s.push(a[i]);

    if(a[0] != 1)
    {
        cout << "No\n";
        return 0;
    }

    memset(vis,false,200010*sizeof(vis[0]));

    queue <int> q;
    q.push(1);
    vis[1] = true;

    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        set <int> ss,st;
        //queue <int> qq;

        for(int i=0;i<v[t].size();i++)
        {
            if(!vis[v[t][i]])
            {
                vis[v[t][i]] = true;
                ss.insert(v[t][i]);
                st.insert(s.top());
                //qq.push(s.top());
                q.push(s.top());
                s.pop();
            }
        }

        if(ss != st)
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
}