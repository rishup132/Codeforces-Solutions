#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,m;
    cin >> n >> m;

    int a[10010];

    memset(a,0,10010*sizeof(a[0]));

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        a[x] += 1;
        a[y+1] += -1;
    }

    for(int i=2;i<=m;i++)
        a[i] += a[i-1];

    vector <int> v;

    for(int i=1;i<=m;i++)
    {
        if(a[i] == 0)
            v.push_back(i);
    }

    cout << v.size() << endl;

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    cout << endl;
}