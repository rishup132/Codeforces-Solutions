#include <bits/stdc++.h>
 
#define int long long
#define endl "\n"
 
using namespace std;

int a[3];
set <int> s[3];
 
int32_t main()
{
	int n;
    cin >> n;

    string s1;
    cin >> s1;

    int j = 0;

    for(char i:s1)
        a[i-'0']++, s[i-'0'].insert(j++);

    int cnt = n/3;

    while(a[0] > cnt)
    {
        if(a[2] < cnt)
            a[2]++, s1[*(--s[0].end())] =  '2', s[0].erase(--s[0].end());
        else
            a[1]++, s1[*(--s[0].end())] =  '1', s[0].erase(--s[0].end());

        a[0]--;
    }

    //cout << s1 << endl;

    while(a[1] > cnt)
    {
        if(a[0] < cnt)
            a[0]++, s1[*s[1].begin()] =  '0', s[1].erase(s[1].begin());
        else
            a[2]++, s1[*(--s[1].end())] =  '2', s[1].erase(--s[1].end());

        a[1]--;
    }

    //cout << s1 << endl;

    while(a[2] > cnt)
    {
        if(a[0] < cnt)
            a[0]++, s1[*s[2].begin()] =  '0', s[2].erase(s[2].begin());
        else
            a[1]++, s1[*s[2].begin()] =  '1', s[2].erase(s[2].begin());

        a[2]--;
    }

    cout << s1 << endl;
}