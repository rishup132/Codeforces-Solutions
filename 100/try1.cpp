#include <bits/stdc++.h>

using namespace std;

class pat
{
    private:
        int hour,minute,second;
        char zone;

    public:
        void getdata(int a, int b, int c, char x)
        {
            hour = a;
            minute = b;
            second = c;
            zone = x;
        }

        void display()
        {
            cout << hour << ":" << minute << ":" << second << " " << zone << "M" << endl;
        }

        void differance(pat &A)
        {
            int t1,t2;

            if(zone == 'P')
                t1 = 3600*12;
            else
                t1 = 0;
            
            if(A.zone == 'P')
                t2 = 3600*12;
            else
                t2 = 0;

            t1 += (hour%12)*3600 + minute*60 + second;
            t2 += (A.hour%12)*3600 + A.minute*60 + A.second;

            t1 = abs(t1-t2);

            cout << t1/3600 << ":" << (t1%3600)/60 << ":" << (t1%3600)%60 << endl;
        }
};

int main()
{
    pat aa;
    pat bb;
    aa.getdata(12,23,45,'A');
    bb.getdata(1,45,23,'A');

    aa.display();
    bb.display();

    aa.differance(bb);

    return 0;
}