#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
        string res; 
        for (int i = s.size() -1 ; i >=0; i--)  res+=s[i]; 
        if (res == s) return 1; else return 0;

}

void swap(char &a, char &b)
{
    char tmp;
    tmp =a; a=b;b=tmp;
}

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        string s; cin >> s;
        int count = s.size()/2;
        string a,b;
        for (int i = 0; i <count ; i++) a+=s[i];
        for (int i = count ; i < s.size(); i++) b+=s[i];
        //cout << a<<' ' << b;
        if (a==b) 
        {
            cout << "YES"<<endl;
            
        }
        --t;
        
    }

    return 0;
}
