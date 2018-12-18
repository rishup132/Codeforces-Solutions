#include <bits/stdc++.h>

using namespace std;

vector <pair<int,pair<int,int> > > v;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    if(s.size() == 1)
    {
        if(s[0] == '0')
        {
            cout << 1 << endl;
            cout << 1 << " " << 1 << endl;
        }
        else
            cout << -1 << endl;
    }
    else if(s.size() == 2)
    {
        if(s[0] == '0' && s[1] == '0')
        {
            cout << 2 << endl;
            cout << 1 << " " << 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else
            cout << -1 << endl;
    }
    else
    {
        int st = 0;
        int ed = s.size()-1;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')
                break;
            st++;
        }

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '0')
                break;
            ed--;
        }

        int count = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                if(st < i && ed > i)
                {
                    v.push_back(make_pair(st+1,make_pair(i+1,ed+1)));

                    while(++st && st < s.size())
                    {
                        if(s[st] == '0')
                            break;
                    }

                    while(ed > 0 && --ed)
                    {
                        if(s[ed] == '0')
                            break;
                    }

                }
                else
                {
                    //cout << st << " " << i << " " << ed << endl;
                    cout << -1 << endl;
                    return 0;
                }
            }
            else
                count++;
        }

        count -= 2*v.size();

        if(count < 0)
        {
            cout << -1 << endl;
            return 0;
        }

        cout << count+v.size() << endl;

        for(int i=0;i<count;i++)
        {
            cout << 1 << " " << st+1 << endl;

            while(st++)
            {
                if(s[st] == '0')
                    break;
            }
        }

        for(int i=0;i<v.size();i++)
        {
            cout << 3 << " " << v[i].first << " ";
            cout << v[i].second.first << " " << v[i].second.second << endl;
        }
    }
}