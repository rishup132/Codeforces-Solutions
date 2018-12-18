#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int prime[1000010];
vector <int> v;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=2;i*i<=1e6;i++)
    {
        if(prime[i] == 0)
        {
            for(int j=i*i;j<=1e6;j+=i)
                prime[j] = 1;
        }
    }

    int n;
    cin >> n;

    if(n%2 == 0)
    {
        cout << n/2 << endl;
        return 0;
    }

    for(int i=2;i<=1e6;i++)
    {
        if(prime[i] == 0 && n%i == 0)
        {
            n -= i;
            break;
        }
    }

    if(n == 0 || n%2 == 1)
        cout << 1 << endl;
    else
        cout << n/2+1 << endl;
}