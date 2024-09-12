#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin >>t;
    bool reverse =true;
    while (t!=0)    
    {
        int x,y; cin>>x>>y;
        int max=0,min=0;
        if (x==y) cout << 1<<" "<<1<<endl;
        else
        if (x>y) {
            max=x;min=y;
        }
        else if (x<y){
            max=y;min = x; reverse=false;
        };
        if (max % min<>0) cout <<0<<" "<<0;
        else
        {
            int a= max /min;
            
        }



        --t;
    }
    
    return 0;
}
