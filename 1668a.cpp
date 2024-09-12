#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >>t;
    while(t!=0)
    {
        long long n,m; cin >>n>>m;
        if ((n==1 && m>=3) || (n>=3 && m==1)) cout <<-1<<endl;
        else {
            cout <<n+m-2<<endl;
        }
        

        --t;
    }
    return 0;
}
