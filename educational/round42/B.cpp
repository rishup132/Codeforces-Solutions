#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    s += '*';

    int ans = a+b;
    int count = 0,temp;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '*')
        {
            int temp1 = count/2;
            int temp2 = count - temp1;

            if(a > b)
            {
                temp = a;
                a = b;
                b = temp;
            }

            a -= min(a,temp1);
            b -= min(b,temp2);

            count = 0;
        }
        else
            count++;
    }

    cout << ans-a-b << endl;
}