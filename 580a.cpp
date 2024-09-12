#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int nhan[n];int res[n];int count(0);
    int j(0);
    for (int i = 0; i < n-1; i++) 
    {
        cin >>nhan[i];
        if ( nhan[i]<=nhan[i+1]) ++res[j];
        else ++j;
    }
    sort(   res,res+n,greater<int>());
    cout <<res[0]<<endl;
    return 0;
}
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).
    
The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.