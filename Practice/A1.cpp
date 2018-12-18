#include <bits/stdc++.h>

using namespace std;

int a[1000010];

int main()
{
    std::ios_base::sync_with_stdio(false);
    
    double n;
    cin >> n;

    double x,y;

    if(n < 4)
    {
        for(int i=0;i<n;i++)
            cin >> x >> y;

        cout << "YES" << endl;

        return 0;
    }

    cin >> x >> y;

    double x1,y1;
    cin >> x1 >> y1;

    y -= y1;
    x -= x1;

    double m1,m2,temp;

    if(x == 0)
        m1 = 1000000007;
    else
        m1 = y/x;

    y1 = y + y1;
    x1 = x + x1;

    int flag = n;

    for(int i=2;i<n;i++)
    {
        cin >> x >> y;

        x -= x1;
        y -= y1;

        if(x == 0)
            temp = 1000000007;
        else
            temp = y/x;

        if(temp != m1)
        {
            m2 = temp;

            x1 = x + x1;
            y1 = y + y1;

            flag = i+1;
            break;
        }
    }

    for(int i=flag;i<n;i++)
    {
        cin >> x >> y;

        x -= x1;
        y -= y1;

        if(x == 0)
            temp = 1000000007;
        else
            temp = y/x;

        if(temp != m2 && temp != m1)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;*/
}
