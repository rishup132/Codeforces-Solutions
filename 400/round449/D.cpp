#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[1010];

int main()
{
    int n,m,c;
    cin >> n >> m >> c;

    while(m--)
    {
        int x;
        cin >> x;

        if(x <= c/2)
        {
            for(int i=1;i<=n;i++)
            {
                if(a[i] == 0 || a[i] > x)
                {
                    a[i] = x;
                    cout << i << endl;
                    cout.flush();
                    break;
                }
            }
        }
        else
        {
            for(int i=n;i>=0;i--)
            {
                if(a[i] == 0 || a[i] < x)
                {
                    a[i] = x;
                    cout << i << endl;
                    cout.flush();
                    break;
                }
            }
        }

        bool flag = false;

        for(int i=1;i<=n;i++)
        {
            if(a[i] == 0)
            {
                flag = true;
                break;
            }
        }

        if(!flag)
            break;
    }

    return 0;
}