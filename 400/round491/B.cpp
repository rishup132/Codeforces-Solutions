#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define first fi
#define second se
#define all(x) x.begin(),x.end()

using namespace std;

int a[1000];

int main()
{
    int n;
    cin >> n;

    float x,sum = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    float avg;
    int count = 0;

    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        //cout << sum << endl;
        avg = sum/n;
        
        if(avg >= 4.5)
            break;
        
        sum += (5-a[i]);
        count++;
    }

    cout << count << endl;
}