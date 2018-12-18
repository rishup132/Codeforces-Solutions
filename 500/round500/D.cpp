#include <bits/stdc++.h>

#define int long long int
#define mod 1000000007

using namespace std;

int a[200010],b[200010];
map <pair<int,int> ,int> m1;

main()
{
    int n,m,q;
    cin >> n >> m >> q;

    int x,y;

    for(int i=0;i<q;i++)
    {
        cin >> x >> y;

        a[x]++;
        b[y]++;

        m1[make_pair(x,y)]++;
    }

    int count = 0;

    if(m1[make_pair(1,1)] == 1)
    {
        for(int i=2;i<=n;i++)
        {
            if(a[i] == 0)
                count++;
        }

        for(int i=2;i<=m;i++)
        {
            if(b[i] == 0)
                count++;
        }
    }
    else if(m1[make_pair(n,1)] == 1)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i] == 0)
                count++;
        }

        for(int i=2;i<=m;i++)
        {
            if(b[i] == 0)
                count++;
        }
    }
    else if(m1[make_pair(n,m)] == 1)
    {
        for(int i=1;i<n;i++)
        {
            if(a[i] == 0)
                count++;
        }

        for(int i=1;i<m;i++)
        {
            if(b[i] == 0)
                count++;
        }
    }
    else if(m1[make_pair(1,m)] == 1)
    {
        for(int i=2;i<=n;i++)
        {
            if(a[i] == 0)
                count++;
        }

        for(int i=1;i<m;i++)
        {
            if(b[i] == 0)
                count++;
        }
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            if(a[i] == 0)
                count++;
        }

        for(int i=2;i<=m;i++)
        {
            if(b[i] == 0)
                count++;
        }

        count++;
    }

    cout << count << endl;

}