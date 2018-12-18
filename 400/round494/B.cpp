#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int a,b,x;
    cin >> a >> b >> x;

    if(a > b)
    {
        string s = "";
        
        int temp = (x+1)/2;

        while(temp--)
            s += "10";

        temp = (x+1)/2;

        a = a - temp;
        b = b - temp;

        if(x%2 == 0)
        {
            for(int i=0;i<a;i++)
                cout << 0;

            for(int i=0;i<b;i++)
                cout << 1;

            cout << s;
        }
        else
        {
            for(int i=0;i<b;i++)
                cout << 1;

            cout << s;

            for(int i=0;i<a;i++)
                cout << 0;
        }
    }
    else
    {
        string s = "";
        
        int temp = (x+1)/2;

        while(temp--)
            s += "01";

        temp = (x+1)/2;

        a = a - temp;
        b = b - temp;

        if(x%2 == 0)
        {
            for(int i=0;i<b;i++)
                cout << 1;
            
            for(int i=0;i<a;i++)
                cout << 0;

            cout << s;
        }
        else
        {
            for(int i=0;i<a;i++)
                cout << 0;

            cout << s;

            for(int i=0;i<b;i++)
                cout << 1;
        }
    }
}