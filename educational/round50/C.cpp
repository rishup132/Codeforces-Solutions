#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    vector <int> v;
    set <int> s;

    int k = 15;

    for(int i=1;k!=0;i*=10,k--)
    {
        for(int j=1;j<=1000;j++)
            s.insert(i*j);
    }

    for(auto i:s)
        v.push_back(i);

    int t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        cout << upper_bound(v.begin(),v.end(),y) - lower_bound(v.begin(),v.end(),x) << endl;
    }
}