#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,temp;
    cin >> n >> k;

    while(k)
    {
        if(n%10 == 0)
        {
            n /= 10;
            k--;
        }
        else
        {
            temp = min(k,n%10);
            k -= temp;
            n -= temp;
        }
    }

    cout << n << endl;
}