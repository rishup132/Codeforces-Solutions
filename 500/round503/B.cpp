#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[1010];
bool m[1010];

main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;i++)
    {
        memset(m,true,1010*sizeof(m[0]));

        int temp = i;

        do
        {
            m[temp] = false;
            temp = a[temp];
        }while(m[temp]);

        cout << temp << " ";
    }
    cout << endl;
}