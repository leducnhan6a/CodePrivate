#include <iostream>
using namespace std;

int main()
{
	string st;cin >>st;
	if (st[0]>=97) st[0]-=32;
	cout <<st<<endl;
	return 0;
}