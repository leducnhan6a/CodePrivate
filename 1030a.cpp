#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int count(0);
    while (n!=-0)
    {
        int a; cin >> a;        
        if (a==1) ++count;
        --n;
    }
    if (count!=0) cout << "hard" ;else cout <<"easy"<<endl;   
    return 0;
}
