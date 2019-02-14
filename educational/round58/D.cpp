#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[200010],b[200010];
int p[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    p[0] = p[1] = 1;

    for(int i=2;i*i<=200010;i++)
    {
        if(p[i] == 0)
        {
            for(int j=i*i;j<200010;j+=i)
                p[j] = 1;
        }
    }
}