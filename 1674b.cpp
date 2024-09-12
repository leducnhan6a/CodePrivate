#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while (t!=0)
    {
        string st; cin >> st;
        int sum=0;
        int a= static_cast<int>(st[0])-96; int b = static_cast<int>(st[1])-96;
        //cout<< a<< " "<<b<<endl;

        sum = 25*(a-1)+b;
        if (b>a) --sum;
        cout << sum<<endl;
        
        --t;
    }
    return 0;
}
