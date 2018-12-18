#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;

    set <int> v1,v2,v3;

    int s1,s2;
    s1 = s2 = 0;

    int cnt = 1;

    while(a >= cnt)
    {
        v1.insert(cnt);
        a -= cnt;
        s1 += cnt;
        cnt++;
    }

    while(b >= cnt)
    {
        v2.insert(cnt);
        b -= cnt;
        s2 += cnt;
        cnt++;
    }

    if(!v1.empty())
    {
        int temp = cnt - a;
        int t1 = 0;

        if(s1 >= temp)
        {
            while(temp > t1)
            {
                t1 += *v1.begin();
                v3.insert(v1.begin());
                v1.erase(v1.begin());
            }
        }

        if(t1 && t1 <= b)
        {
            for(int i:v3)
                v2.insert(i);
            v1.insert(cnt);
            s1 -= t1;
            s1 += cnt;
            s2 += t1;
            b -= t1;
            a += t1;
            a -= cnt;
            cnt++;
        }
        else if(t1)
        {
            for(int i:v3)
                v1.insert(i);
        }
    }
    
    if(!v2.empty() && v2.lower_bound(cnt-b) != v2.end() && a >= *v2.lower_bound(cnt-b))
    {
        int t1 = *v2.lower_bound(cnt-b);
        v2.erase(t1);
        v2.insert(cnt);
        v1.insert(t1);
        a -= t1;
        b += t1;
        b -= cnt;
        cnt++;
    }

    cout << v1.size() << endl;
    for(int i:v1)
        cout << i << " ";
    cout << endl;

    cout << v2.size() << endl;
    for(int i:v2)
        cout << i << " ";
    cout << endl;

    return 0;
}