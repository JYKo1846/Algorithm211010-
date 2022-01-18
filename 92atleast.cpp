// BOJ 1145 at least almost multiple 2022.01.18
/*
#include <iostream>

using namespace std;

void atleast() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n[5];
	int i, t, cnt;
	
	for(i= 0; i< 5; i++)
		cin >> n[i];
	
	t= 1;
	while(cnt< 3) {
		cnt= 0;
		for(i= 0; i< 5; i++)
			if(t% n[i]== 0) cnt++;
		t++;
	}
	
	cout << t-1 << "\n";
}*/
