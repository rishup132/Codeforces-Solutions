#include <bits/stdc++.h>

using namespace std;

char a[10][10],b[10][10];
int n;
char temp;

void rotate()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

bool check()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j] != b[i][j])
                return false;
        }
    }

    return true;
}

int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin >> b[i][j];
    }

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    rotate();

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    rotate();

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    rotate();

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    rotate();

    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp = a[i][j];
            a[i][j] = a[n-i-1][j];
            a[n-i-1][j] = temp;
        }
    }

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }

    if(check())
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

}