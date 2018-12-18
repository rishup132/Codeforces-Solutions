#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool solve(string s, int start, int end)
{
	stack <char> s1,s2;

	bool flag = false;

	for(int i=start;i<=end;i++)
	{
		if(s[i] == ')')
		{
			if(!s1.empty())
				s1.pop();
			else if(!s2.empty())
				s2.pop();
			else
			{
				flag = true;
				break;
			}
		}
		else if(s[i] == '?')
			s2.push(s[i]);
		else
			s1.push(s[i]);
	}

	if(flag)
		return false;

	while(!s1.empty())
	{
		if(s1.top() == '?')
		{
			s2.push(s1.top());
			s1.pop();
		}
		else if(!s2.empty())
		{
			s2.pop();
			s1.pop();
		}
		else
			break;
	}

	if(!s1.empty())
		return false;

	return true;
}

int main()
{
	string s;
	cin >> s;

	int ans = 0;

	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j+=2)
		{
			bool temp = solve(s,i,j);
			cout << temp << endl;
			if(temp)
				ans++;
		}
	}

	cout << ans << endl;
}