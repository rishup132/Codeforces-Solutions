#include <bits/stdc++.h>
 
#define int long long
#define endl "\n"
 
using namespace std;

int a[1000];
 
int32_t main()
{
	int n,x,y;
    cin >> n >> x >> y;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    if(x > y)
        cout << n << endl;
    else if(x <= y)
    {
        int cnt = 1;

        for(int i=0;i<n;i++)
        {
            if(x >= a[i])
                cnt++;
        }

        cout << cnt/2 << endl;
    }
}