#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int temp = abs(a-b);
    int temp1 = temp/2;
    temp -= temp1;

    cout << temp*(temp+1)/2 + temp1*(temp1+1)/2 << endl;
}