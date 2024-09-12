#include <bits/stdc++.h>
using namespace std;

int check(int a,int b)
{
     while (b!=0)
    {
        if (a%10==0) a/=10; else --a;
        --b;
        
    }
    return a;


}

int main()
{
    int n,k; cin >> n>>k;
    cout << check(n,k) <<endl;

    return 0;
}
