#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int32_t main()
{
    vector <int> v1,v2;
    vector <pair<int,int> > v;

    for(int i=0;i<3;i++)
    {
        int x,y;
        cin >> x >> y;

        v1.push_back(x);
        v2.push_back(y);
        v.push_back({x,y});
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    cout << v1[2] - v1[0] + v2[2] - v2[0] + 1 << endl;

    int x,y;
    x = v1[1];
    y = v2[1];

    cout << x << " " << y << endl;

    for(auto &i:v)
    {
        while(i.first < x)
            cout << i.first++ << " " << i.second << endl;

        while(i.first > x)
            cout << i.first-- << " " << i.second << endl;

        while(i.second < y)
            cout << i.first << " " << i.second++ << endl;

        while(i.second > y)
            cout << i.first << " " << i.second-- << endl;
    }
}