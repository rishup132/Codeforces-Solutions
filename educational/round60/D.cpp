#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int n,m;

void multiply(int a[110][110], int b[110][110]) 
{ 
    int mul[110][110]; 

    for (int i = 0; i < m; i++) 
    { 
        for (int j = 0; j < m; j++) 
        { 
            mul[i][j] = 0; 
            for (int k = 0; k < m; k++) 
                mul[i][j] = (mul[i][j]%mod + (a[i][k]%mod * b[k][j]%mod)%mod)%mod;
        } 
    } 

    for (int i=0; i<m; i++) 
        for (int j=0; j<m; j++)
            a[i][j] = mul[i][j]%mod;
} 

int power(int F[110][110], int n) 
{ 
    int M[110][110];

    for(int i=1;i<m;i++)
        M[i][i-1]++;

    M[0][0] = M[0][m-1] = 1;
  
    if(n==1) 
        return (F[0][0] + F[0][1])%mod; 
  
    power(F, n/2); 
  
    multiply(F, F); 
  
    if(n%2 != 0) 
        multiply(F, M); 

    return (F[0][0] + F[0][1])%mod; 
} 

int32_t main()
{
    cin >> n >> m;

    if(n < m)
    {
        cout << 1;
        return 0;
    }

    int a[110][110];

    for(int i=1;i<m;i++)
        a[i][i-1]++;

    a[0][0] = a[0][m-1] = 1;

    cout << power(a,n-1) << endl;
}