#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin >> n;

	int a[100010];
    memset(a,0,100010*sizeof(a[0]));

	for(int i=0;i<n;i++)
	{
        cin >> x;
        a[x]++;
    }

	int count = 0;

    for(int i=0;i<100010;i++)
    {
        if(a[i]%2)
            count++;
    }

    if(count)
        cout << "Conan" << endl;
    else
        cout << "Agasa" << endl;
}