#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i=0;

    while(true)
    {
        int temp = i*(i+1)/2;

        if(temp >= n)
            break;
        cout << s[temp];
        i++;
    }
}