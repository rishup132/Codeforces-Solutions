#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    int count = 0;

    for(int i=0;i<n/2;i++)
    {
        if(b[i] == b[n-1-i])
        {
            if(a[i] != a[n-1-i])
                count++;
        }
        else
        {
            if(a[i] == b[i] && a[n-1-i] == b[n-1-i])
                continue;
            if(a[i] == b[n-1-i] && a[n-i-1] == b[i])
                continue;
            if(a[i] == b[i] || a[n-1-i] == b[i] || a[i] == b[n-1-i] || a[n-i-1] == b[n-1-i])
                count++;
            else
                count += 2;
        }
    }

    if(n%2 == 1 && a[n/2] != b[n/2])
        count++;

    cout << count << endl;
    return 0;
}