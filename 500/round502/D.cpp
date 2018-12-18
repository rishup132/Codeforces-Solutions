#include <bits/stdc++.h>
using namespace std;

int lis( int arr[], int n )
{
    int *lis, i, j, max = 0;
    lis = (int*) malloc ( sizeof( int ) * n );
 
    /* Initialize LIS values for all indexes */
    for (i = 0; i < n; i++ )
        lis[i] = 1;
 
    /* Compute optimized LIS values in bottom up manner */
    for (i = 1; i < n; i++ )
        for (j = 0; j < i; j++ ) 
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
 
    /* Pick maximum of all LIS values */
    for (i = 0; i < n; i++ )
        if (max < lis[i])
            max = lis[i];
 
    /* Free memory to avoid memory leak */
    free(lis);
 
    return max;
}

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};

    int mi = 20;

    int b[9];

    while(next_permutation(a,a+9))
    {
        int temp = lis(a,9);
        reverse(a,a+9);
        temp += lis(a,9);
        reverse(a,a+9);
        if(mi > temp)
        {
            mi = temp;
            for(int i=0;i<9;i++)
                b[i] = a[i];
        }
    }

    cout << mi << endl;

    for(int i=0;i<9;i++)
        cout << b[i] << " ";
}



/*#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100] = {0};
int w[100];

main()
{
    int n,m,q;
    cin >> n >> m >> q;

    for(int i=0;i<n;i++)
        cin >> w[i];

    for(int i=0;i<m;i++)
    {
        string s;
        cin >> s;

        for(int j=0;j<s.size();j++)
            a[j] += (s[j]-'0');
    }

    while(q--)
    {
        string s;
        cin >> s;

        int k;
        cin >> k;

        int ans = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
                ans += a[i]*w[i];
            else
                ans += (m-a[i])*w[i];
        }

        
    }
}*/