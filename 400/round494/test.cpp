#include<bits/stdc++.h>
#define ll long long int
#define cin(a,n) for(i=0;i<n;i++){cin>>a[i];}
#define fast ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forl(i,a,n) for(i=a;i<n;i++)
#define ld long double
#define cout(a,n) for(i=0;i<n;i++)cout<<a[i]<<" ";
#define mod 1000000007
#define nl cout<<"\n";
#define inf 1e15
#define de cout<<"here";
using namespace std;
int main()
{
    ll i,j,k,l,m=0,n,a,b;
    cin>>a>>b>>n;
    k=n/2;
    l=k;
    i=0;
    m=n%2;
    char s[1000];
    if(a>=b){
        while(k--)
        {
            s[i]='0';
            i++;
            a--;
            s[i]='1';
            i++;
            b--;
        }
        if(m==0)
        {
            while(b)
            {
                s[i]='1';
                i++;
                b--;
            }
            while(a)
            {
                s[i]='0';
                a--;
                i++;
            }
        }
        else
        {
            while(a)
            {
                s[i]='0';
                a--;
                i++;
            }
            while(b)
            {
                s[i]='1';
                i++;
                b--;
            }

        }
    }
    else
    {
        while(k--)
        {
            s[i]='1';
            i++;
            b--;
            s[i]='0';
            i++;
            a--;
        }
        if(m==0)
        {
            while(a)
            {
                s[i]='0';
                a--;
                i++;
            }
            while(b)
            {
                s[i]='1';
                i++;
                b--;
            }
        }
        else
        {

            while(b)
            {
                s[i]='1';
                i++;
                b--;
            }
            while(a)
            {
                s[i]='0';
                a--;
                i++;
            }

        }
    }
    s[i]='\0';
    cout<<s;
    return 0;
}