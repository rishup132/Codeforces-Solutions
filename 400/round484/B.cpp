#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int> > v;
set <pair<int,int> > sap;

int main()
{
    int n,x;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> x;
        v.push_back(make_pair(x,i));
    }

    sort(v.begin(),v.end());

    string s;
    cin >> s;

    int j = 0;

    for(int i=0;i<2*n;i++)
    {
        if(s[i] == '0')
        {
            sap.insert(v[j]);
            cout << v[j].second << " ";
            j++;
        }
        else
        {
            set <pair<int,int> > :: iterator itr = sap.end();
            itr--;
            cout << (*itr).second << " ";
            sap.erase(itr);
        }
    }
    cout << endl;
}