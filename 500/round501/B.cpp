#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n;
    cin >> n;

    string s,t;
    cin >> s >> t;

    int count = 0;
    vector <int> v;

    for(int i=n-1;i>=0;i--)
    {
        int temp = -1;

        for(int j=0;j<n-count;j++)
        {
            if(s[j] == t[i])
            {
                temp = j;
                break;
            }
        }

        if(temp == -1)
        {
            cout << -1 << endl;
            return 0;
        }

        for(int i=temp;i<n-count-1;i++)
        {
            v.push_back(i+1);
            swap(s[i],s[i+1]);
        }

        count++;
    }

    cout << v.size() << endl;

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
}