#include <bits/stdc++.h>

using namespace std;

int a[4];
int b[4];

int main()
{
    for(int i=1;i<=3;i++)
        cin >> a[i], a[i] += a[i-1];

    for(int i=1;i<=3;i++)
        cin >> b[i], b[i] += b[i-1];

    for(int i=1;i<=3;i++)
    {
        if(b[i] < a[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}