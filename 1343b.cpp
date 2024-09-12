#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while ( t!=0)
    {
        int a; cin >>a;
        int res(0);
        int m(2);int n(1);
        if (a%4!=0) cout << "NO" <<endl; else
        {
            cout << "YES"<<endl;
            for (int  i = 1; i <=a/2; i+=1)
            {
            cout <<m<<' ';
            res+=m;
            m+=2;
            }
            for (int i =1; i <a/2   ;i+=1 )
            {
            cout << n<<' ';
            res-=n;
            n+=2;
            }
            cout <<res<<endl;
        }
        --t;
    }
    return 0;
}
