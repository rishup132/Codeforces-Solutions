#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[200010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);
    int temp = 0;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        temp = upper_bound(a+temp+1,a+n,a[i])-a;

        if(temp == n)
            break;

        count++;
    }

    cout << count << endl;
}