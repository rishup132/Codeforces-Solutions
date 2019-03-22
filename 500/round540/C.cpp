#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[30][30];

map <int,int> m;

int32_t main()
{
    int n;
    cin >> n;

    int x;

    for(int i=0;i<n*n;i++)
        cin >> x, m[x]++;

    set <pair<int,int> > s;

    for(auto i:m)
    {
        pair<int,int> temp = i;
        swap(temp.first,temp.second);
        s.insert(temp);
    }

    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n/2;j++)
        {
            if(s.size() == 0)
            {
                cout << "no";
                return 0;
            }

            auto temp = *s.rbegin();
            s.erase(*(--s.end()));

            if(temp.first < 4)
            {
                cout << "no";
                return 0;
            }

            temp.first -= 4;

            a[i][j] = a[i][n-j+1] = a[n-i+1][j] = a[n-i+1][n-j+1] = temp.second;

            if(temp.first > 0)
                s.insert(temp);
        }
    }

    if(n%2)
    {
        for(int i=1;i<=n/2;i++)
        {
            if(s.size() == 0)
            {
                cout << "no";
                return 0;
            }

            auto temp = *s.rbegin();
            s.erase(*(--s.end()));

            if(temp.first < 2)
            {
                cout << "no";
                return 0;
            }

            temp.first -= 2;

            a[n/2+1][i] = a[n/2+1][n-i+1] = temp.second;

            if(temp.first > 0)
                s.insert(temp);
        }

        for(int i=1;i<=n/2;i++)
        {
            if(s.size() == 0)
            {
                cout << "no";
                return 0;
            }

            auto temp = *s.rbegin();
            s.erase(*(--s.end()));

            if(temp.first < 2)
            {
                cout << "no";
                return 0;
            }

            temp.first -= 2;

            a[i][n/2+1] = a[n-i+1][n/2+1] = temp.second;

            if(temp.first > 0)
                s.insert(temp);
        }

        a[n/2+1][n/2+1] = s.begin()->second;
    }

    cout << "yes\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}