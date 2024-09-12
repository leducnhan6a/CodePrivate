#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;cin>>s>>n;
    int x[n];int y[n];  
    int count(0);
    for (int i = 0; i < n; i++) cin >> x[i]>>y[i];
    for (int i = 0; i < n-1; i++)
    for (int j = i+1; j < n; j++)
    if (x[i]>x[j])
    {
        int tmp;tmp=x[i];
        x[i]=x[j];x[j]=tmp;
        tmp=y[i];y[i]=y[j];y[j]=y[i];
    }
    
       
    int i(0);   
    while (s<=x[i]) 
    {
        ++count;
        s+=y[i];
        ++i;
    }
    if (count!=0) cout <<"NO"<<endl;else cout <<"YES";
    return 0;
}
