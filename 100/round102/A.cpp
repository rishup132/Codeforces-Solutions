#include <bits/stdc++.h>

#define int long long

using namespace std;

main()
{
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            for(int k=1;k<10;k++)
            {
                for(int l=1;l<10;l++)
                {
                    set <int> s;
                    s.insert(i);
                    s.insert(j);
                    s.insert(k);
                    s.insert(l);

                    if(i+j == a && k+l == b && i+k == c && j+l == d && i+l == e && j+k == f && s.size() == 4)
                    {
                        cout << i << " " << j << endl;
                        cout << k << " " << l << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << -1 << endl;
}