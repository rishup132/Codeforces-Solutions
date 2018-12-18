#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;

        char a = 'a';
        int cnt = 0;

        while(n--)
        {
            cout << a;
            a++;
            cnt++;

            if(cnt == k)
            {
                cnt = 0;
                a = 'a';
            }
        }

        cout << endl;
    }
}