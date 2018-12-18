#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n/2;i++)
        cin >> a[i];
    
    sort(a,a+n/2);

    int count1,count2;
    count1 = count2 = 0;

    int j = 1;

    for(int i=0;i<n/2;i++)
    {
        count1 += abs(a[i]-j);
        count2 += abs(a[i]-j-1);
        j+=2;
    }

    cout << min(count1,count2) << endl;
}