#include <bits/stdc++.h>
using namespace std;

bool checkchan(char chr)
{
    if (chr=='0'|| chr=='2'||chr=='4'|| chr=='6'|| chr=='8') return 1; 
    else return 0;
}

void swap( char a,char b)
{
    char tmp =a;
    a=b;b=tmp;
}

int main()
{
    string st; cin >>st;
    int chan,le = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (checkchan(st[i]) == 1) ++chan; else ++le;
    }
    int a[chan],b[le];
   
    for (int i = 0; i < st.length() - 1; i++)
    if (checkchan(st[i])!=checkchan(st[i+1]))
    {
    int i,j=0;
    while( i< chan && j <le)
    {
        if 

    } 


    }
       


    return 0;
}
