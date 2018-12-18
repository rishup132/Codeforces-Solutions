#include<bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

ll int a[20],b[20];

int main()
{
    for(int i=0;i<14;i++)
        cin >> b[i];

    ll int ans = 0,temp,temp1;

    for(int i=0;i<14;i++)
    {
        for(int j=0;j<14;j++)
            a[j] = b[j];

        temp = a[i]/14;
        temp1 = a[i]%14;
        a[i] = 0;

        for(int j=0;j<14;j++)
            a[j] += temp;

        temp = 1;

        while(temp <= temp1)
        {
            a[(temp+i)%14]++;
            temp++;
        }

        temp = 0;

        for(int j=0;j<14;j++)
        {
            if(a[j]%2 == 0)
                temp += a[j];
        }

        if(temp > ans)
            ans = temp;
    }

    cout << ans << endl;
}