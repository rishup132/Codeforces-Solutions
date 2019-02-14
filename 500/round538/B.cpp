#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];
map <int,vector <int> > mv;
int b[200010];

int32_t main()
{
    int n,m,k;
    cin >> n >> m >> k;

    for(int i=0;i<n;i++)
        cin >> a[i], mv[a[i]].push_back(i);

    sort(a,a+n);

    int sum = 0;

    for(int i=n-m*k;i<n;i++)
        b[mv[a[i]].back()] = 1, mv[a[i]].pop_back(), sum += a[i];

    cout << sum << endl;
    int j = 0;

    while(--k)
    {
        int temp = m;

        while(temp)
        {
            if(b[j] == 1)
                temp--;
            j++;
        }

        cout << j << " ";
    }
}