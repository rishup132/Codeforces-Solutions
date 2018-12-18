#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int ans = 1000000007;
    int index = 1,temp;

    for(int i=0;i<n;i++)
    {
        if(a[i] > i)
            temp = (a[i]-i)/n;
        else
        {
            if(ans >= (i+1))
            {
                ans = i+1;
                index = i+1;
            }
            continue;
        }

        if((a[i]-i)%n != 0)
            temp = (temp+1)*n + i;
        else
            temp = temp*n + i;
        
        //cout << temp << endl;

        if(ans > temp)
        {
            ans = temp;
            index = i+1;
        }
    }

    cout << index << endl;
}