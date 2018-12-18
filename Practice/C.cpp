#include <bits/stdc++.h>

using namespace std;

int main()
{
	double n,a,b,c,d;
	cin >> n >> a >> b >> c >> d;

	double dis = sqrt((a-c)*(a-c)+(b-d)*(b-d));

	if(dis >= n)
	{
		printf("%0.9f %0.9f %0.9f\n",a,b,n);
		return 0;
	}

	if(dis == 0)
	{
		printf("%0.9f %0.9f %0.9f\n",a+n/2,b,n/2);
		return 0;
	}

	double temp1,temp2,temp3,temp4,temp5;

	double m,k;

	temp4 = a-c;
	temp5 = b-d;
	
	

	k = b-m*a;

	//cout << m << " " << k << endl;

	temp1 = 1+m*m;
	temp2 = 2*(m*(k-b)-a);
	temp3 = a*a + (k-b)*(k-b) - n*n;

	//cout << temp1 << " " << temp2 << " " << temp3 << endl;

	temp3 = sqrt(temp2*temp2 - 4*temp1*temp3);

	temp4 = (temp2 + temp3)/(2*temp1);
	temp5 = (temp2 - temp3)/(2*temp1);

	//cout << temp3 << " " << temp4 << " " << temp5 << endl;

	temp1 = m*temp4 + k;
	temp2 = m*temp5 + k;

	//cout << temp1 << " " << temp2 << endl;

	double dis1,dis2;

	dis1 = sqrt((temp4-c)*(temp4-c)+(temp1-d)*(temp1-d));
	dis2 = sqrt((temp5-c)*(temp5-c)+(temp2-d)*(temp2-d));

	//cout << dis1 << " " << dis2 << endl;

	if(dis1 > dis2)
		printf("%0.9f %0.9f %0.9f\n",(temp4-c)/2,(temp1-d)/2,(n+dis)/2);
	else
		printf("%0.9f %0.9f %0.9f\n",(c-temp5)/2,(d-temp2)/2,(n+dis)/2);
}