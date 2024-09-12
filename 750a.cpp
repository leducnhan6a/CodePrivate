#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k; cin >>n>>k;
    int res(0);
    int i(1);

    while (res<=(240-k))
    {
        
        res+=5*i;
        ++i;
        
    }
    if (n<i) cout <<n<<endl; else cout << i-1<<endl;
    return 0;
}
