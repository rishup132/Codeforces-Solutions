#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll int a[35],b[35];

int main()
{
	ll int n,l;
	cin >> n >> l;

	for(int i=0;i<n;i++)
	{
		a[i] = pow(2,i);
		cin >> b[i];
	}

	for(int i=1;i<n;i++)
		b[i] = min(b[i],2*b[i-1]);

	ll int ans = 0;

	while(l)
	{
		n--;
		if(l<a[n])
		{
			ans += b[n];
			break;
		}
		else
			ans += l/a[n]*b[n];
		l %= a[n];
	}

	cout << ans << endl;
}