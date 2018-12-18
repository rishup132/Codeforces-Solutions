#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    if(n < 6)
        cout << -1 << endl;
    else
    {
        cout << 1 << " " << 2 << endl;
        cout << 2 << " " << 4 << endl;
        cout << 2 << " " << 3 << endl;

        for(int i=5;i<=n;i++)
            cout << 1 << " " << i << endl;
    }

    for(int i=2;i<=n;i++)
        cout << 1 << " " << i << endl;
    
}