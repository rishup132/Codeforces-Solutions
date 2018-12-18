#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

map <int,int> m;
map <int,vector<int> > m1;
int a[20010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for(auto i:m)
        m1[i.second].push_back(i.first);

    m1.erase(2);

    if(m1[1].size()%2 == 0)
    {
        int k = m1[1].size()/2;

        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j] == m1[1][i])
                    a[j] = -1;
            }
        }

        cout << "YES\n";

        for(int i=0;i<n;i++)
        {
            if(a[i] == -1)
                cout << "A";
            else
                cout << "B";
        }
    }
    else if(m1[1].size()%2 == 1 && m1.size() > 1)
    {
        int k = m1[1].size()/2;

        for(int i=0;i<k;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j] == m1[1][i])
                    a[j] = -1;
            }
        }

        int temp = (++m1.begin())->second[0];

        for(int i=0;i<n;i++)
        {
            if(a[i] == temp)
            {
                a[i] = -1;
                break;
            }
        }

        cout << "YES\n";

        for(int i=0;i<n;i++)
        {
            if(a[i] == -1)
                cout << "A";
            else
                cout << "B";
        }
    }
    else
        cout << "NO\n";
}