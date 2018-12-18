#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[100010];

	for(int i=0;i<n;i++)
		cin >> a[i];

	sort(a,a+n);

	while(n>0)
	{
		n--;
		int temp = sqrt(a[n]);

		if(a[n] != temp*temp)
		{
			cout << a[n] << endl;
			break;
		}
	}
}