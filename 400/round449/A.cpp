#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

string s1 =  'What are you doing while sending "'
string s2 = '"? Are you busy? Will you send "'
string s3 = '"?'

string solve(s,n)
{
    if(n == 0)
        return s1;
    
    s = s1 + s + s2 + s + s3;
    return solve(s,n-1);
}

int main()
{
    string s = "What are you doing at the end of the world? Are you busy? Will you save us?";

    int q;
    cin >> q;

    while(q--)
    {
        ll n,k;
        cin >> n >> k;


    }
}