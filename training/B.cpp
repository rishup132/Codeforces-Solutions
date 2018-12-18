#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector <pair<int,int> > v;
    int sum = 0,sum1 = 0;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(x,y));

        sum += y;
        sum1 += x;
    }

    if(sum < m || m < sum1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    m -= sum1;

    for(int i=0;i<n;i++)
    {
        int temp = min(m,abs(v[i].second-v[i].first));
        m -= temp;
        cout << v[i].first + temp << " ";
    }
    cout << endl;
}