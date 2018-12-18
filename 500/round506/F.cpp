#include <bits/stdc++.h>

#define int unsigned long long
#define mod 1000000007

using namespace std;

vector <int> v[200010];
pair<int,int> a[200010];

map <pair<int,int>,int> m;

int solve(int a, int b)
{
    int temp,ans;
    int x,y;

    ans = 1e18;

    for(int i=1;i*i<=a;i++)
    {
        if(a%i == 0)
        {
            x = a/i;

            if(b%i == 0)
            {
                y = b/i;

                temp = 2*(x+y+i);
            }

            ans = min(ans,temp);

            if(b%x == 0)
            {
                y = b/x;

                temp = 2*(x+y+i);
            }

            ans = min(ans,temp);
        }
    }

    return ans;
}

main()
{
    int a,b;
    cin >> a >> b;

    int x,y,ans,temp;

    cout << min(solve(a,b),solve(b,a)) << endl;
}