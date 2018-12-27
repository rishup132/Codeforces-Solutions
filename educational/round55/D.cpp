#include <bits/stdc++.h>

using namespace std;

vector <int> v,v1;
int a[550];

int32_t main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];

        sum += a[i];

        if(a[i] == 1)
            v.push_back(i);
        else
            v1.push_back(i);
    }

    if(sum < 2*(n-1))
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES " << n-1-v.size()+min(2,(int)v.size()) << endl << n-1 << endl;

    if(!v.empty())
    {
        cout << v1.back() << " " << v.back() << endl;
        a[v1.back()]--;
        v.pop_back();
    }

    for(int i=1;i<v1.size();i++)
        cout << v1[i-1] << " " << v1[i] << endl, a[v1[i-1]]--, a[v1[i]]--;

    for(int i:v1)
    {
        while(!v.empty() && a[i])
            cout << i << " " << v.back() << endl, v.pop_back(), a[i]--;
    }
}