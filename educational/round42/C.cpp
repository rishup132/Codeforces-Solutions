#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <ll int,int> m,m1;
int co;

int main()
{
    int n;
    cin >> n;

    int temp = sqrt(n);

    co = 0;

    while(n)
    {
        m[n%10]++;
        n /= 10;
        co++;
    }

    int ans = 100;

    for(int i=temp;i>0;i--)
    {
        m1 = m;
        n = i*i;

        int count = 0;

        while(n)
        {
            if(m1[n%10] != 0)
                m1[n%10]--;
            else
                break;

            n /= 10;

            count++;
        }

        if(n == 0 && co >= count)
            ans = min(ans,co-count);
    }

    if(ans == 100)
        cout << -1 << endl;
    else
        cout << ans << endl;
}