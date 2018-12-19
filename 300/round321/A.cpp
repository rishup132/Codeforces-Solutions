#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    int cnt = 0;
    int prev = -1;
    int ans = 1;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x >= prev)
            cnt++;
        else
            ans = max(ans,cnt), cnt = 1;

        prev = x;
    }

    cout << max(ans,cnt) << endl;
}