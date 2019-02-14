#include <bits/stdc++.h>
 
//#define int long long
#define endl "\n"
 
using namespace std;

int a[100010];
map <int,vector<int> > m;
 
int32_t main()
{
	int n,k;
    cin >> n >> k;

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        m[a[i]].push_back(i);

        if(ans < m[a[i]].size())
            ans = m[a[i]].size();
    }

    if(ans > k || n < k)
        cout << "NO\n";
    else
    {
        cout << "YES\n";

        int cnt = 1;

        for(auto i:m)
        {
            for(int j:i.second)
            {
                a[j] = cnt++;
                
                if(cnt > k)
                    cnt = 1;
            }
        }

        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
}