#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map<string,int> m;

int main()
{
    int n;
    cin >> n;

    string x,y;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y;
        m[y]++;
    }

    int t1,t2,temp,temp1;
    t1 = m["hard"];
    t2 = m["soft"];

    if(t1 > t2)
    {
        temp = t1;
        t1 = t2;
        t2 = temp;
    }

    for(int i=1;i<100;i++)
    {
        temp = i*i;
        temp1 = temp/2;
        temp -= temp1;

        if(temp1 >= t1 && temp >= t2)
        {
            cout << i << endl;
            return 0;
        }
    }
}