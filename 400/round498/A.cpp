#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

int main()
{
    int n,x;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x%2 == 0)
            x--;
        
        cout << x << " ";
    }
    
    return 0;
}