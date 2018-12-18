#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

vector <int> v[100010];

int main()
{
    int n,m,q;
    cin >> n >> m >> q;

    int x,y;

    for(int i=0;i<m;i++)
    {
        cin >> x >> y;

        if(x > y)
            swap(x,y);

        v[x].push_back(y);
    }

    while(q--)
    {
        cin >> x >> y;

        if(x > y)
            swap(x,y);

        int ans = 0;

        for(int i=x;i<=y;i++)
        {
            int temp = upper_bound(v[i].begin(),v[i].end(),y) - v[i].begin();

            ans += temp;
        }

        cout << ans << endl;
    }
}