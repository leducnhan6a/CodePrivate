#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;
     float count = 0;
    for (int  i = 0; i <n; i++) 
    {
        float a; cin >> a;
        count +=a;
    } 
    float d= count/n; cout << d;    
    return 0;
}
