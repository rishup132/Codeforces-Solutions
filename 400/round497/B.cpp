#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

pair <int,int> p[200010];
int a[100010];

int main()
{
    int n,x,y;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    bool flag = false;
    a[n-1] = min(p[n-1].first,p[n-1].second);

    for(int i=n-2;i>=0;i--)
    {
        if(p[i].first > p[i].second)
        {
            int temp = p[i].first;
            p[i].first = p[i].second;
            p[i].second = temp;
        }

        if(a[i+1] > p[i].first && a[i+1] > p[i].second)
        {
            flag = true;
            break;
        }
        else
        {
            if(p[i].first >= a[i+1])
                a[i] = p[i].first;
            else
                a[i] = p[i].second;
        }
    }

    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}