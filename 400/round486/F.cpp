#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int v[2010][2010];
pair<int,int> p[2010],q[2010];

int main()
{
    int a,n,m;
    cin >> a >> n >> m;

    for(int i=0;i<n;i++)
        cin >> p[i].first >> p[i].second;

    for(int i=0;i<m;i++)
        cin >> q[i].first >> q[i].second;

    sort(q,q+m);

    for(int i=1;i<=a;i++)
    {
        for(int j=0;j<n;j++)
        {

        }
    }
}