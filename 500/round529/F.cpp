#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

vector <pair<int,pair<int,int> > > v;
vector <pair<int,int> > v1;
int Arr[200010],size[200010],a[200010];

// int root(int i)
// {
//     while(Arr[i] != i)
//     {
//         Arr[i] = Arr[Arr[i]] ; 
//         i = Arr[i]; 
//     }

//     return i;
// }

// void _union(int A, int B)
// {
//     int root_A = root(A);
//     int root_B = root(B);

//     if(size[root_A] < size[root_B])
//     {
//         Arr[root_A] = Arr[root_B];
//         size[root_B] += size[root_A];
//     }
//     else
//     {
//         Arr[root_B] = Arr[root_A];
//         size[root_A] += size[root_B];
//     }
// }

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        size[i] = 1;
        Arr[i] = i;

        v1.push_back({a[i],i});
    }

    sort(v1.begin(),v1.end());

    for(int i=0;i<m;i++)
    {
        int x,y,d;
        cin >> x >> y >> d;

        v.push_back({d,{x,y}});
    }

    for(int i=1;i<v1.size();i++)
        v.push_back({v1[0].first+v1[i].first,{v1[0].second,v1[i].second}});

    sort(v.begin(),v.end());

    int ans = 0;

    for(auto i:v)
    {
        int x,y;
        x = i.second.first;
        y = i.second.second;

        if(root(x) != root(y))
            _union(x, y), ans += i.first;
    }

    cout << ans << endl;
}