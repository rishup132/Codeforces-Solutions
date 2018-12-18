#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector <int> v1,v2,v3;

    int mi = -1e10;
    int id = -1;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        if(x == 0)
            v1.push_back(i+1);
        else if(x < 0)
        {
            v2.push_back(i+1);

            if(mi < x)
            {
                mi = x;
                id = i+1;
            }
        }
        else
            v3.push_back(i+1);
    }

    //cout << v1.size() << " " << v2.size() << " " << v3.size() << endl;

    if(v2.size()%2 == 1)
    {
        v1.push_back(id);
        mi = 1;
    }

    if(mi != 1)
        id = -1;

    for(int i:v2)
    {
        if(id != i)
            v3.push_back(i);
    }

    //cout << v1.size() << " " << v2.size() << " " << v3.size() << endl;

    sort(v1.begin(),v1.end());
    sort(v3.begin(),v3.end());

    for(int i=1;i<v1.size();i++)
        cout << 1 << " " << v1[i-1] << " " << v1[i] << endl;

    if(!v1.empty() && !v3.empty())
        cout << 2 << " " << v1[v1.size()-1] << endl;

    for(int i=1;i<v3.size();i++)
        cout << 1 << " " << v3[i-1] << " " << v3[i] << endl;
}