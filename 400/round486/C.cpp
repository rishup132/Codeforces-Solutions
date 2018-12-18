#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <int,pair<int,int> > m;

int main()
{
    int n,x,y,sum;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> x;
        sum = 0;

        vector<int> v;

        for(int j=0;j<x;j++)
        {
            cin >> y;
            v.push_back(y);
            sum += y;
        }

        for(int j=0;j<x;j++)
        {
            v[j] = sum - v[j];

            if(m[v[j]].first == 0 || m[v[j]].first == i)
                m[v[j]] = make_pair(i,j+1);
            else
            {
                cout << "YES" << endl;

                cout << m[v[j]].first << " " << m[v[j]].second << endl;
                cout << i << " " << j+1 << endl;

                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}