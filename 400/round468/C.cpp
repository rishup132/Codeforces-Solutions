#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[200010];
map <int,int> m;

int main()
{
    int n;
    cin >> n;

    int mi,ma;
    mi = 1e9;
    ma = -1e9;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];

        m[a[i]]++;

        if(mi > a[i])
            mi = a[i];

        if(ma < a[i])
            ma = a[i];
    }

    //cout << mi << " " << ma << endl;

    if((ma-mi) == 2)
    {
        if(m.size() != 3)
            m[mi+1] = 0;
        
        int temp = min(m[mi],m[ma]);

        map <int,int> :: iterator it;

        int temp1;

        for(it = m.begin();it != m.end();it++)
        {
            if(it->first != mi && it->first != ma)
                temp1 = it->first;
        }

        int temp2 = m[temp1]/2;

        if(temp >= temp2)
        {
            cout << n-2*temp << endl;

            m[temp1] += 2*temp;
            m[ma] -= temp;
            m[mi] -= temp;
        }
        else
        {
            cout << n-2*temp2 << endl;

            m[temp1] -= 2*temp2;
            m[ma] += temp2;
            m[mi] += temp2;
        }

        for(it = m.begin();it != m.end();it++)
        {
            temp = it->second;

            while(temp--)
                cout << it->first << " ";
        }
        cout << endl;
    }
    else
    {
        cout << n << endl;

        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
}