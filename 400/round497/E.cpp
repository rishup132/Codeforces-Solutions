#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a > b)
            swap(a,b);
        if(b > c)
            swap(b,c);
        if(a > b)
            swap(a,b);

        vector <int> aa,bb,cc;

        for (int i=1; i<=sqrt(a); i++)
        {
            if (a%i == 0)
            {
                if (a/i != i)
                    aa.push_back(a/i);
                aa.push_back(i);
            }
        }

        for (int i=1; i<=sqrt(b); i++)
        {
            if (b%i == 0)
            {
                if (b/i != i)
                    bb.push_back(b/i);
                bb.push_back(i);
            }
        }

        for (int i=1; i<=sqrt(c); i++)
        {
            if (c%i == 0)
            {
                if (c/i != i)
                    cc.push_back(c/i);
                cc.push_back(i);
            }
        }

        sort(aa.begin(),aa.end());
        sort(bb.begin(),bb.end());
        sort(cc.begin(),cc.end());

        int count = 0;

        for(int i=0;i<aa.size();i++)
        {
            int temp = lower_bound(bb.begin(),bb.end(),aa[i]) - bb.begin();

            for(int j = temp;j<bb.size();j++)
            {
                int temp1 = lower_bound(cc.begin(),cc.end(),bb[j]) - cc.begin();

                count += (cc.size()-temp1);
            }
        }

        cout << count << endl;
    }
}