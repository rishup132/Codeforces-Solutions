#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[1000010];
bool marked[1000010];

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        marked[i] = false;
    }

    ll sum = 0;

    for(int i=1;i<=n;i++)
    {
        if(!marked[i])
        {
            int st = i;
            ll int count = 1;
            marked[st] = true;

            while(a[st] != i)
            {
                st = a[st];
                marked[st] = true;
                count++;
            }

            sum += (count-1);
        }
    }

    cout << (sum % 2 == (3 * n) % 2 ? "Petr" : "Um_nik") << '\n';
}