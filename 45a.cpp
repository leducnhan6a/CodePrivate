#include <bits/stdc++.h>
using namespace std;
 

	string st;cin >>st;
	int k;cin >>k;
	int res;
	if (st== "January") res=(1+k)%12<<endl;
	else
		if (st== "February") res=(2+k)%12<<endl;
	else
		if (st== "March") res=(3+k)%12<<endl;
	else
		if (st== "April") res=(4+k)%12<<endl;
	else
		if (st== "May") res=(5+k)%12<<endl;
	else
		if (st== "June") res=(6+k)%12<<endl;
	else
		if (st== "July") res=(7+k)%12<<endl;
	else
		if (st== "August") res=(8+k)%12<<endl;
	else
		if (st== "September") res=(9+k)%12<<endl;
	else
		if (st== "October") res=(10+k)%12<<endl;
	else
		if (st== "November") res=(11+k)%12<<endl;
	else
		if (st== "December") res=(12+k)%12<<endl;
	switch (res)
	{
	case 1: cout <<"January"<<endl;
	break;
	case 2: cout <<"February"<<endl;
	break;
	case 3: cout <<"March"<<endl;
	break;
	case 4: cout <<"April"<<endl;
	break;
	case 5: cout <<"May"<<endl;
	break;
	case 6: cout <<"June"<<endl;
	break;
	case 7: cout <<"July"<<endl;
	break;
	case 8: cout <<"August"<<endl;
	break;
	case 9: cout <<"September"<<endl;
	break;
	case 10: cout <<"October"<<endl;
	break;
	case 11: cout <<"November"<<endl;
	break;
	case 0: cout <<"December"<<endl;
	break;
}


	return 0;

}