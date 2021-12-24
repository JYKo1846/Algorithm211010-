// BOJ 1075 divide 2021.12.24
/*
#include <iostream>

using namespace std;

void divide() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long N, fr;		// N : origin number, fr : N's front number xxxx...xx__
	int F, rr;				// F : divider, rr:  N's rear number ....xx
	
	cin >> N >> F;
	
	fr= N/ 100;
	
	for(rr= 0; rr< 100; rr++)
		if(((fr*100+ rr)% F)== 0)
			break;
			
	if(rr< 10) cout << "0";
	cout << rr << "\n";
}*/
