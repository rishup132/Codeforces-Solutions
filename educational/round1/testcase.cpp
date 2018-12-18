#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","w",stdout);

    int n = rand()%40000;
    cout << n << endl;
    for(int i=0;i<n;i++)
    {
        int x,y,z=0;
        x = rand()%30 + 1;
        y = rand()%30 + 1;
        int temp = min(x*y,50);
        z = rand()%temp + 1;

        cout << x << " " << y << " " << z << endl;
    }
}