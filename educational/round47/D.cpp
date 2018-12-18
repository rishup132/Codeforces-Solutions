#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <pair<int,int> > v;

int main()
{
    int n,m;
    cin >> n >> m;

    if(m < n-1)
        cout << "Impossible" << endl;
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(m == 0)
                    break;
                if(__gcd(i,j) == 1)
                {
                    v.push_back(make_pair(i,j));
                    m--;
                }
            }
        }

        if(m != 0)
            cout << "Impossible" << endl;
        else
        {
            cout << "Possible" << endl;

            for(int i=0;i<v.size();i++)
                cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}