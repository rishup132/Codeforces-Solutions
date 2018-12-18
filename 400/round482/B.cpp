#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair

using namespace std;

int a[200],n,k;

int main()
{
    cin >> n;

    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;

    int ans1,ans2,ans3;
    ans1 = ans2 = ans3 = 0;
    k = s1.size();

    for(int i=0;i<200;i++)
        a[i] = 0;

    for(int i=0;i<k;i++)
        ans1 = max(ans1,++a[s1[i]]);

    for(int i=0;i<200;i++)
        a[i] = 0;

    for(int i=0;i<k;i++)
        ans2 = max(ans2,++a[s2[i]]);

    for(int i=0;i<200;i++)
        a[i] = 0;

    for(int i=0;i<k;i++)
        ans3 = max(ans3,++a[s3[i]]);

    if(ans1 == k && n == 1)
        ans1 = min(ans1+n,k-1);
    else
        ans1 = min(ans1+n,k);

    if(ans2 == k && n == 1)
        ans2 = min(ans2+n,k-1);
    else
        ans2 = min(ans2+n,k);

    if(ans3 == k && n == 1)
        ans3 = min(ans3+n,k-1);
    else
        ans3 = min(ans3+n,k);

    if(ans1 > ans2 && ans1 > ans3)
        cout << "Kuro" << endl;
    else if(ans2 > ans1 && ans2 > ans3)
        cout << "Shiro" << endl;
    else if(ans3 > ans1 && ans3 > ans2)
        cout << "Katie" << endl;
    else
        cout << "Draw" << endl;
}