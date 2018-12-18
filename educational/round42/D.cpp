#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <ll int,int> m;
ll int a[200010];

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;)
    {
        if(m[a[i]] == 0)
        {
            m[a[i]] = i;
            i++;
        }
        else
        {
            a[m[a[i]]] = 0;
            m[a[i]] = 0;
            a[i] *= 2;
        }
    }

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        if(a[i] != 0)
            count++;
    }

    cout << count << endl;

    for(int i=1;i<=n;i++)
    {
        if(a[i] != 0)
            cout << a[i] << " ";
    }
    cout << endl;
}