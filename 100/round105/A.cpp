#include <bits/stdc++.h>

using namespace std;
bool v[100000] = {false};

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    for(int i = a ; i <= e ; i+=a){
        if(!v[i]){
            v[i] = true;
        }
    }
    for(int i = b ; i <= e ; i+=b){
        if(!v[i]){
            v[i] = true;
        }
    }
    for(int i = c ; i <= e ; i+=c){
        if(!v[i]){
            v[i] = true;
        }
    }
    for(int i = d ; i <= e ; i+=d){
        if(!v[i]){
            v[i] = true;
        }
    }
    int ans =0 ;
    for(int i = 1 ; i <= e ; i++){
        if(v[i] == false){
            ans++;
        }
    }
    printf("%d",e - ans);
    return 0;
}