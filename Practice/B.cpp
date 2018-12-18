#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,count=0;
	cin >> n;

	string s;
	cin >> s;

	int x=0,y=0;
	int x1=0,y1=0;
	bool flag = false;

	if(s[0] == 'U')
	{
		y++;
		y1++;
		flag = true;
	}
	else
	{
		x++;
		x1++;
		flag = false;
	}

	for(int i=1;i<s.size();i++)
	{
		if(s[i] == 'R')
			x++;
		else
			y++;

		if(x1 == y1)
		{
			if(flag && x > y)
			{
				count++;
				flag = false;
			}
			if(!flag && x < y)
			{
				count++;
				flag = true;
			}
		}

		x1 = x;
		y1 = y;
	}

	cout << count << endl;
}