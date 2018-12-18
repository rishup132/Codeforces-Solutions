#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <int> v[100010],v1;

int main()
{
    int n,x,y;
    cin >> n;

    if(n == 2)
    {
        cin >> x >> y;

        cout << "Yes" << endl;
        cout << 1 << endl;
        cout << x << " " << y << endl;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int vertex = 0;
    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(vertex == 0 && v[i].size() == 2)
            vertex = i;

        if(v[i].size() > 2)
        {
            vertex = i;
            count++;
        }

        if(v[i].size() == 1)
            v1.push_back(i);
    }

    if(count > 1)
        cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;

        cout << v1.size() << endl;

        for(int i=0;i<v1.size();i++)
            cout << vertex << " " << v1[i] << endl;
    }
}