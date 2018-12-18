#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int repeatedNumber(const vector<int> &A) {
    int a,b;
    a = b = -1;
    int c1,c2;
    c1 = c2 = 0;
    int n = A.size();
    
    for(int i=0;i<n;i++)
    {
        if(c1 == 0 || c2 == 0)
        {
            if(c1 == 0 && c2 != 0)
            {
                if(A[i] == b)
                    c2++;
                else
                {
                    a = A[i];
                    c1++;
                }
            }
            else if(c1 != 0 && c2 == 0)
            {
                if(A[i] == a)
                    c1++;
                else
                {
                    b = A[i];
                    c2++;
                }
            }
            else
            {
                a = A[i];
                c1++;
            }
        }
        else
        {
            if(A[i] == a)
                c1++;
            else if(A[i] == b)
                c2++;
            else
            {
                c1--;
                c2--;
            }
        }
    }
    
    c1 = c2 = 0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i] == a)
            c1++;
        
        if(A[i] == b)
            c2++;
    }
    
    if(c1 > n/3)
        return a;
        
    if(c2 > n/3)
        return b;

    return -1;
}



main()
{
    int n;
    cin >> n;

    vector <int> v(n,0);

    for(int i=0;i<n;i++)
        cin >> v[i];

    cout << repeatedNumber(v) << endl;
}