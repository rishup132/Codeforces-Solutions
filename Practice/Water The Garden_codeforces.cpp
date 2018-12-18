#include <bits/stdc++.h>

using namespace std;

int a[100000];

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,k;
		cin >> n >> k;

		for(int i=0;i<k;i++)
			cin >> a[i];

		sort(a,a+k);

		vector <int> v;

		v.push_back(a[0]-1);

		for(int i=1;i<k;i++)
			v.push_back((a[i]-a[i-1]-1)%2 == 0 ? a[i]/2+1 : a[i]/2+2);

		v.push_back(n-a[k-1]);

		sort(v.begin(),v.end());

		cout << v[v.size()-1] << endl;
	}
}