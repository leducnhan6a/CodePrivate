#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        int nhan[n];
        int chan[n];int le[n];
        int count1(0);int count2(0);
        for (int i = 0; i < n; i++)
        {
            cin >> nhan[i];
            if (nhan[i]%2==0) 
            {
                cin >> chan[i];
                ++count1;
            }
            else 
            {
                cin >> le[i];
                ++count2;
            }
        }
        sort(chan,chan+count1);sort(le,le+count2);
        if (count1%2==0) for (int i = 0; i < count1; i++) cout << chan[i]<<' ';
        else for (int i = 0; i < count1-1; i++) cout << chan[i]<<' ';
        if (count2%2==0) for (int i = 0; i < count2; i++) cout <<le[i]<<' ';
        else for (int i = 0; i < count2-1; i++) cout <<le[i]<<' ';
        cout << chan[count1-1] <<' '<<le[count2-1]<<endl;
        --t;
    }
    return 0;
}
