#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll int a[200010];

ll two[100];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    two[0] = 1;

    for(int i=1;i<64;i++)
        two[i] = 2*two[i-1];

    ll count = 0;

    for(int i=0;i<n;i++)
    {
        bool flag = false;

        for(int j=0;j<64;j++)
        {
            if(a[i] < two[j])
            {
                ll temp = two[j] - a[i];

                if(binary_search(a,a+i,temp) || binary_search(a+i+1,a+n,temp))
                {
                    flag = true;
                    break;
                }
            }
        }

        if(!flag)
            count++;
    }

    cout << count << endl;
}