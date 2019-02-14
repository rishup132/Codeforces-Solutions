#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[5202][5202];

string HexToBin(char x)
{
    switch(x) 
    { 
        case '0': 
            return "0000"; 
            break; 
        case '1': 
            return "0001"; 
            break; 
        case '2': 
            return "0010"; 
            break; 
        case '3': 
            return "0011"; 
            break; 
        case '4': 
            return "0100"; 
            break; 
        case '5': 
            return "0101"; 
            break; 
        case '6': 
            return "0110"; 
            break; 
        case '7': 
            return "0111"; 
            break; 
        case '8': 
            return "1000"; 
            break; 
        case '9': 
            return "1001"; 
            break; 
        case 'A': 
        case 'a': 
            return "1010"; 
            break; 
        case 'B': 
        case 'b': 
            return "1011"; 
            break; 
        case 'C': 
        case 'c': 
            return "1100"; 
            break; 
        case 'D': 
        case 'd': 
            return "1101"; 
            break; 
        case 'E': 
        case 'e': 
            return "1110"; 
            break; 
        case 'F': 
        case 'f': 
            return "1111"; 
            break; 
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;

    for(int i=1;i<=n;i++)
    {
        string s;
        cin >> s;

        int t = 1;

        for(int j=0;j<s.size();j++)
        {
            string s1 = HexToBin(s[j]);

            for(char k:s1)
                a[i][t++] = k-'0';
        }
    }

    vector <int> v;

    for(int i=1;i*i<=n;i++)
    {
        if(n%i == 0)
            v.push_back(i), v.push_back(n/i);
    }

    sort(v.begin(),v.end(),greater<int>());

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            a[i][j] += a[i][j-1];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            a[j][i] += a[j-1][i];
    }

    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=n;j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }

    for(int i:v)
    {
        bool flag = true;

        for(int j=1;j<n;j+=i)
        {
            for(int k=1;k<n;k+=i)
            {
                int ans = a[j+i-1][k+i-1] - a[j+i-1][k-1] - a[j-1][k+i-1] + a[j-1][k-1];

                //cout << a[j+i-1][k+i-1] << " " << a[j+i-1][k-1] << " " << a[j-1][k+i-1] << " " << a[j-1][k-1] << " " << endl;

                if(ans != i*i && ans != 0)
                    flag = false;
            }
        }

        if(flag)
        {
            cout << i << endl;
            return 0;
        }
    }
}