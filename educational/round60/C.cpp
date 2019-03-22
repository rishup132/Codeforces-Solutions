#include <bits/stdc++.h>

#define int long long

using namespace std;

int x2,y2;
int n;
string s;
int a[100010][4];

bool solve(int k)
{
    int x,y;
    x = abs(x2 - (k/n)*a[n][0] - a[k%n][0]);
    y = abs(y2 - (k/n)*a[n][1] - a[k%n][1]);

    if(x+y <= k)
        return true;
    else
        return false;
}

int32_t main()
{
    int x1,y1;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> n;
    cin >> s;

    x2 -= x1;
    y2 -= y1;

    int j = 1;

    for(char i:s)
    {
        a[j][0] = a[j-1][0];
        a[j][1] = a[j-1][1];

        if(i == 'L')
            a[j][0]--;
        else if(i == 'R')
            a[j][0]++;
        else if(i == 'U')
            a[j][1]++;
        else
            a[j][1]--;

        j++;
    }

    int l = 1;
    int h = 1e18;
    int ans = -1;

    while(l <= h)
    {
        int mid = (l+h)/2;

        if(solve(mid))
            h = mid - 1, ans = mid;
        else
            l = mid + 1;
    }

    cout << ans << endl;
}