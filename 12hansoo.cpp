// BOJ 1065 Hansoo 2021.11.22
// ez
/*
#include <iostream>

using namespace std;

void hansoo() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int ans= 0;
	
	cin >> N;
	
	for(int i= 1; i<= N; i++)
	{
		if(i< 100) ans++;
		else
		{
			int fir= i/100;
			int sec= (i%100)/ 10;
			int thr= i%10;
			
			if((fir-sec) == (sec-thr)) ans++;
		}
	}
	cout << ans << "\n";
}*/
