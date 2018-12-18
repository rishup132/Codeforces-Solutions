#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll int n,h;
    cin >> n >> h;

    ll temp = 
}


temp = h*(h+1)//2

if n >= temp :
    n -= temp
    ans = h-1
    n += h

    temp = int(math.sqrt(n))

    temp1 = temp*(temp+1) - h*(h-1)

    if temp1 > n:
        temp -= 1

    temp1 = temp*(temp+1) - h*(h-1)

    n -= temp1
    ans += 2*(temp-h+1)
    temp += 1

    if n <= temp:
        ans += 1
    else:
        ans += 2
        
    print(ans)
else :
    temp = int(math.sqrt(2*n))

    temp1 = temp*(temp+1)//2

    if temp1 > n:
        temp -= 1

    temp1 = temp*(temp+1)//2

    n -= temp1

    ans = temp
    ans += n//temp

    if n%temp != 0:
        ans += 1

    print(ans)