#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int a[200010],b[300],c[300];

int main()
{
    int n,k,x,y;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<300;i++)
    {
        b[i] = -1;
        c[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        x = a[i];
        y = k-1;

        if(b[a[i]] != -1)
            continue;

        while(x > 0 && y > 0)
        {
            x--;
            y--;

            if(b[x] != -1)
            {
                if(c[x] != 0 && c[x] >= (a[i]-x))
                {
                    for(int j=x+1;j<=a[i];j++)
                        b[j] = b[j-1];

                    c[a[i]] = c[x] + x - a[i];
                }
                else
                    x++;
                
                break;
            }
        }

        if(b[a[i]] == -1)
        {
            for(int j=x;j<=a[i];j++)
                b[j] = x;

            c[a[i]] = k-a[i]+x-1;
        }

        /*for(int i=0;i<20;i++)
            cout << b[i] << " ";
        cout << endl;

        for(int i=0;i<20;i++)
            cout << c[i] << " ";
        cout << endl;*/
    }

    for(int i=0;i<n;i++)
        cout << b[a[i]] << " ";
    cout << endl;
}