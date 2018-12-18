#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","w",stdout);
    
    int t = rand()%1000;
    cout << t << endl;

    while(t--)
    {
        int n = rand()%100000;

        cout << rand()%9+1;

        while(n--)
            cout << rand()%10;

        cout << endl;
    }
}

