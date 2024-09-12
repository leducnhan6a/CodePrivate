#include <bits/stdc++.h>
using namespace std;

void check(int a)
{
switch (a)
    {
    case 0:     
        cout <<"zero"; 
        break;
    case 1:     
        cout <<"one"; 
        break;
        case 2:     
        cout <<"two"; 
        break;
        case 3:     
        cout <<"three"; 
        break;
        case 4:     
        cout <<"four"; 
        break;
        case 5:     
        cout <<"five"; 
        break;
        case 6:     
        cout <<"six"; 
        break;
        case 7:     
        cout <<"seven"; 
        break;
        case 8:     
        cout <<"eight"; 
        break;
        case 9:     
        cout <<"nine"; 
        break;
        case 10:
        cout << "ten";
        break;
   
    }

}



int main()
{
    int n; cin >> n;
    int a(0);int b(0);
    a=n/10;
    b=n%10;
    if (a==0) check(b);
    else if ((n>10) && (n<=19))
    {
        if (n==11) cout<<"eleven";
        else if (n==12) cout << "twelve";
        else if (n==13) cout << "thirteen";
        else if (n==14) cout <<"fourteen";
        else if (n==15) cout <<"fifteen";
        else if (n==16) cout <<"sixteen";
        else if (n==17) cout <<"seventeen";
        else if (n==18) cout <<"eighteen";
        else cout <<"nineteen";
    }

     
    return 0;
}
