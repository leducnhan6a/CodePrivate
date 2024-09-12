#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nhan[4]; int max(2);
    int res=0;
    for (int i = 0; i < 4; i++)
    cin >> nhan[i];
    sort(nhan,nhan+4);
    if ((nhan[0]==nhan[1]) && (nhan[1] == nhan[2])) cout <<nhan[3]/3;
    else 
    {
        int a(0);int b(0); int c(0);
        a=nhan[3]-nhan[0];
        b=nhan[3]-nhan[1];
        c=nhan[3]-nhan[2];
    }
    


    

    
   

    
    return 0;
}
