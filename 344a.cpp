#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    string res;
    for (int i = 0; i < n; i++){
    string s; cin>>s;
    res+=s;
    }
    int count(0);
    for (int i=0; i < res.size()-2;i+=2)
    if (res[i] != res[i+2]) ++count;
    cout <<count +1 << endl;
    
    
    
    return 0;
    
}
