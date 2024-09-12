#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x; cin >> x;
    int res(0);int count(0);
    for (int  i = 5; i >=1; --i) 
    {
        count+=x/i; x = x%i;
    }
    cout << count <<endl;
    
    
    return 0;
}
