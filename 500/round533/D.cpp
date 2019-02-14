#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int ans[10];
int sp[10];

int32_t main()
{
    int n,m,p;
    cin >> n >> m >> p;

    for(int i=1;i<=p;i++)
        cin >> sp[i];

    string s[n+2];
    s[n+1] = s[0] = string(m+2,'#');

    vector <pair<int,int> > v[p+1];

    for(int i=1;i<=n;i++)
    {
        cin >> s[i];
        s[i] = "#" + s[i] + "#";

        for(int j=1;j<=m;j++)
        {
            if(s[i][j] == '.' || s[i][j] == '#')
                continue;

            v[s[i][j] - '0'].push_back({i,j});
        }
    }

    // for(int i=0;i<=n+1;i++)
    //     cout << s[i] << endl;

    queue <pair<int,pair<int,int> > > q;

    for(int i=1;i<=p;i++)
    {
        for(auto j:v[i])
            q.push({i,j});
    }

    while(!q.empty())
    {
        auto t = q.front();
        q.pop();

        int c1,c2,c3;
        c1 = t.second.first;
        c2 = t.second.second;
        c3 = sp[t.first];

        while(c1-- && c3--)
        {
            if(s[c1][c2] == '.')
                s[c1][c2] = '0' + t.first, q.push({t.first,{c1,c2}});
            else
                break;
        }

        c1 = t.second.first;
        c2 = t.second.second;
        c3 = sp[t.first];

        while(c1++ && c3--)
        {
            if(s[c1][c2] == '.')
                s[c1][c2] = '0' + t.first, q.push({t.first,{c1,c2}});
            else
                break;
        }

        c1 = t.second.first;
        c2 = t.second.second;
        c3 = sp[t.first];

        while(c2-- && c3--)
        {
            if(s[c1][c2] == '.')
                s[c1][c2] = '0' + t.first, q.push({t.first,{c1,c2}});
            else
                break;
        }

        c1 = t.second.first;
        c2 = t.second.second;
        c3 = sp[t.first];

        while(c2++ && c3--)
        {
            if(s[c1][c2] == '.')
                s[c1][c2] = '0' + t.first, q.push({t.first,{c1,c2}});
            else
                break;
        }
    }

    // for(int i=0;i<=n+1;i++)
    //     cout << s[i] << endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i][j] == '.' || s[i][j] == '#')
                continue;
                
            ans[s[i][j]-'0']++;
        }
    }

    for(int i=1;i<=p;i++)
        cout << ans[i] << " ";
    cout << endl;
}