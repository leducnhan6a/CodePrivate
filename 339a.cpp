#include <iostream>
using namespace std;

int main()
{
	string st;cin >>st;
	if (st.size()==1) cout <<st;
	else 
	{
	for (int i = 0; i < st.size()-2; i+=2)
		for (int j = i+2; j < st.size(); j+=2)
	{
		if (static_cast<int>(st[i])>static_cast<int >(st[j]))
			{
				char temp;
				temp=st[i];
				st[i]=st[j];
				st[j]=temp;
			}
	}
	cout << st<<endl;
	}
	return 0;
}