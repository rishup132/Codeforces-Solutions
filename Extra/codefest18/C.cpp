#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    int count = 0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i] != b[i])
        {
            if(a[i+1] != b[i+1])
            {
                if(a[i] == a[i+1])
                {
                    count++;
                    a[i] = a[i] == '1' ? '0' : '1';
                }
                else
                {
                    swap(a[i],a[i+1]);
                    count++;
                }
            }
            else
            {
                count++;
                a[i] = a[i] == '1' ? '0' : '1';
            }
        }
    }

    if(a[n-1] != b[n-1])
        count++;

    cout << count << endl;
}