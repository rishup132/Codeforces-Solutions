#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    vector <int> v;
    int n,x;
    cin >> n;

    int count = 1;
    cin >> x;
    n--;

    while(n--)
    {
        cin >> x;

        if(x == 1)
        {
            v.push_back(count);
            count = 0;
        }
        count++;
    }

    v.push_back(count);

    cout << v.size() << endl;

    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    
}