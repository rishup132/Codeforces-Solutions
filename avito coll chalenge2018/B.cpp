#include <bits/stdc++.h>

#define int long long
using namespace std;

int a[100010];
vector <int> v[100010];

int32_t main()
{
    int n;
    cin >> n;

    int x;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        v[n-x].push_back(i);
    }

    int cnt = 1;

    for(int i=1;i<=n;i++)
    {
        if(v[i].empty())
            continue;

        if(v[i].size()%i == 0)
        {
            while(!v[i].empty())
            {
                int temp = i;

                while(temp--)
                {
                    a[v[i].back()] = cnt;
                    v[i].pop_back();
                }
                
                cnt++;
            }
        }
        else
        {
            cout << "Impossible\n";
            return 0;
        } 
    }

    cout << "Possible\n";
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}