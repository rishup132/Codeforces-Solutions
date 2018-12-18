#include <bits/stdc++.h>

using namespace std;

int a[200010];
int Arr[200010];
int size[200010];

int root(int i)
{
    while(Arr[i] != i)
    {
        Arr[i] = Arr[Arr[i]] ; 
        i = Arr[i];
    }

    return i;
}

void wunion(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);

    if(size[root_A] < size[root_B ])
    {
        Arr[ root_A ] = Arr[root_B];
        size[root_B] += size[root_A];
    }
    else
    {
        Arr[ root_B ] = Arr[root_A];
        size[root_A] += size[root_B];
    }
}

vector <pair<int,int> > v;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i], v.push_back({a[i],i});

    sort(v.begin(),v.end());

    for(int i = 0;i<n;i++)
    {
        Arr[i] = i;
        size[i] = 1;
    }

    int last = -1;
    int cnt = 0;

    for(auto i:v)
    {
        if(last == i.first)
        {
            if(i.second-1 >= 0 && a[i.second-1] <= a[i.second])
            {
                wunion(i.second,i.second-1);

                if(size[i.second]%2)
                    cnt++;
                else
                    cnt--;
            }

            if(i.second+1 < n && a[i.second+1] <= a[i.second])
            {
                wunion(i.second,i.second+1);

                if(size[i.second]%2)
                    cnt++;
                else
                    cnt--;
            }
        }
        else 
        {
            if(cnt > 0)
            {
                cout << "NO\n";
                return 0;
            }
            else
                last = i.first;
        }
    }

    if(cnt == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}