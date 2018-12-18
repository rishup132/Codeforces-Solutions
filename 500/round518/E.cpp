#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <int> v[100010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    set <int> child,par;

    for(int i=1;i<=n;i++)
    {
        if(v[i].size() == 1)
            child.insert(i);
    }

    while(child.size() > 1)
    {
        k--;
        par.clear();

        for(int i:child)
            par.insert(v[i][0]);

        for(int i:par)
        {
            vector <int> temp;
            int cnt = 0;

            for(int j:v[i])
            {
                if(v[j].size() > 1)
                    temp.push_back(j);
                else
                    cnt++;
            }

            if(temp.size() > 1 || cnt < 3)
            {
                cout << "No\n";
                return 0;
            }

            v[i] = temp;
        }

        child = par;
    }

    if(k == 0)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}