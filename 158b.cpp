#include   <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int res(0);int count(0);
    int nhan[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nhan[i];
        if (nhan[i]!=4) 
        {
            res+=nhan[i];
            ++count;
        }
    }
    
    int x=res/4;
    if (res%4 !=0) ++x;
    cout << x+n-count<<endl;
    
    return 0;
}
