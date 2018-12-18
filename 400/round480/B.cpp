#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    cout << "YES" << endl;

    for(int i=0;i<n;i++)
        cout << ".";
    cout << endl;

    if(k%2 == 0)
    {
        for(int j=0;j<2;j++)
        {
            cout << ".";
            for(int i=0;i<k/2;i++)
                cout << "#";
            for(int i=1;i<n-k/2;i++)
                cout << ".";
            cout << endl;
        }
    }
    else if(k <= (n-2))
    {
        cout << ".";
        int temp = (n-2-k)/2;
        for(int i=0;i<temp;i++)
            cout << ".";
        for(int i=0;i<k;i++)
            cout << "#";
        for(int i=0;i<temp;i++)
            cout << ".";
        cout << "." << endl;

        for(int i=0;i<n;i++)
            cout << ".";
        cout << endl;
    }
    else
    {
        cout << ".";
        for(int i=2;i<n;i++)
            cout << "#";
        cout << "." << endl;

        cout << ".";
        int temp = (k-n+2)/2;
        for(int i=0;i<temp;i++)
            cout << "#";
        for(int i=2;i<n-2*temp;i++)
            cout << ".";
        for(int i=0;i<temp;i++)
            cout << "#";
        cout << "." << endl;
    }

    for(int i=0;i<n;i++)
        cout << ".";
    cout << endl;
}