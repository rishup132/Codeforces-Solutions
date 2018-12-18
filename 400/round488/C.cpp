#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

double p[10],q[10];

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool check(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double x, double y)
{
    double A = area(x1, y1, x2, y2, x3, y3) + area(x1, y1, x4, y4, x3, y3);
 
    double A1 = area(x, y, x1, y1, x2, y2);

    double A2 = area(x, y, x2, y2, x3, y3);

    double A3 = area(x, y, x3, y3, x4, y4);

    double A4 = area(x, y, x1, y1, x4, y4);

    return (A == A1 + A2 + A3 + A4);
}

void solve(double *a)
{
    map <pair<double,double>, int> m;

    double x,y;

    pair<double,double> pp;

    for(int i=0;i<8;i+=2)
    {
        for(int j=i+2;j<8;j+=2)
        {
            x = (a[i]+a[j])/2.0;
            y = (a[i+1]+a[j+1])/2.0;

            pp = make_pair(x,y);

            if(m[pp] == 0)
                m[pp]++;
            else
                break;
        }
    }

    a[8] = x;
    a[9] = y;
}

int main()
{
    for(int i=0;i<8;i++)
        cin >> p[i];

    solve(p);

    for(int i=0;i<8;i++)
        cin >> q[i];

    solve(q);

    bool flag = false;

    for(int i=0;i<10;i+=2)
        flag = flag || check(p[0],p[1],p[2],p[3],p[4],p[5],p[6],p[7],q[i],q[i+1]);

    for(int i=0;i<10;i+=2)
        flag = flag || check(q[0],q[1],q[2],q[3],q[4],q[5],q[6],q[7],p[i],p[i+1]);

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}