#include<bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[1010],b[1010];

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
    {
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(i != j && __gcd(a[i],a[j]) > 1)
            {
                cout << a[i] << " " << a[j] << endl;
                count++;
            }
        }

        b[i] = count;
    }

    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(b[i] == 1)
            count++;
        else if(b[i] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    int ans;

    if(n == 1)
        ans = 1;
    else if(n == 2)
        ans = 2;
    else
    {
        ans = (n+1)/2;
    }

    if(count > ans)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

