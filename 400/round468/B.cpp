#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,a,b,temp;
    cin >> n >> a >> b;

    vector <int> v;

    for(int i=1;i<=n;i++)
        v.push_back(i);

    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    int k = 1;

    while(true)
    {
        vector <int> v1;

        for(int i=0;i<v.size();i+=2)
        {
            if(v[i] == a && v[i+1] == b)
            {
                if(v.size() == 2)
                    cout << "Final!" << endl;
                else
                    cout << k << endl;

                return 0;
            }
            else if(v[i] == a || v[i+1] == a)
                v1.push_back(a);
            else if(v[i] == b || v[i+1] == b)
                v1.push_back(b);
            else
                v1.push_back(v[i]);
        }

        v = v1;
        k++;
    }
}