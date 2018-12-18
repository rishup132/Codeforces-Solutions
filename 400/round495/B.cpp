#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n%2)
    {
        n--;
        cout << 1;
    }

    for(int i=0;i<n;i+=2)
        cout << "01";
    cout << endl;
}