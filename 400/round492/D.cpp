#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[210];
vector <int> v[110];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<2*n;i++)
        cin >> a[i];
    
    int count = 0;

    for(int i=1;i<2*n;i+=2)
    {
        if(a[i] == a[i-1])
            continue;

        int temp,temp1;
        
        for(int j=i+1;j<2*n;j++)
        {
            if(a[j] == a[i-1])
            {
                temp = j;
                break;
            }
        }

        for(int j=temp;j>i;j--)
        {
            if(a[j-1] == a[j])
                break;
            
            temp1 = a[j];
            a[j] = a[j-1];
            a[j-1] = temp1;
            count++;
        }
    }

    cout << count << endl;
}