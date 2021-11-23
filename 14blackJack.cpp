// BOJ 2798 2021.11.23
// Brute Force
// Always beware at function name before submitted at BOJ website.
/*
#include <iostream>

using namespace std;

void blackJack() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, M, ans= 0;	// N : card's number, M : succeed number. ans : currently available answer.
	int card[103];
	int fir, sec, thr;
	int i;
	
	for(i= 0; i< 103; i++) card[i]= 0;
	cin >> N >> M;
	
	for(i= 0; i< N; i++) cin >> card[i];
	
	for(i= 0; i< N-1; i++) 
	{
		fir= card[i];
		for(int j= i+1; j< N; j++) 
		{
			sec= card[j];
			for(int k= j+1; k< N; k++)
			{
				thr= card[k];
				int t= fir+ sec+ thr;
				if(t> M) continue;
				ans= ans > t ? ans : t;
			}
		}
	}
	cout << ans;
}*/
