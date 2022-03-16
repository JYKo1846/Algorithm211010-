// BOJ 4375 number 1 2022.03.16
// 1st try-> timeout => no need to make number
// 2nd try-> make operand is bigger or same number at a, sz++; and, divide with a. opr= remain; then, loop opr is bigger or same at a, sz++;
// loop ended at opr%a== 0, cout sz and return;
/*
#include <iostream>
#include <cstring>

using namespace std;

void func(int a) {
	int sz= 1;
	int opr= 1;
	
	while(1)
	{
		if(opr>= a)
		{
			opr-= (opr/a)*a;
			cout << opr << "\n";
			if(opr== 0)
			{
				cout << sz << "\n";
				return ;
			}
		}
		opr= opr*10 + 1;
		sz++;
	}
	
}

void number1() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a;

	while(cin>> a)
		func(a);
}*/
