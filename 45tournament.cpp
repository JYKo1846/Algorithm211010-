// BOJ 1057 tournament 2021.12.12
// EZ BF
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;				// player's number
int pl[100004];	// player's personal number

void tournament() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	memset(pl, 0, sizeof(pl));
	int round= 1;
	bool finish= 0;
	int i, j;
	int a, b;
	
	cin >> N >> a >> b;
	
	for(; !finish; round++)
	{
		int pln= 1;
		int cnt= 0;
		int t= 1;	for(j= 1; j<= round; j++) t*= 2;
		for(i= 1; i<= N; i++)
		{
			if(cnt>= t)
			{
				pln++;
				cnt= 0;
			}
			pl[i]= pln;
			cnt++;
		}
		if(pl[a]== pl[b]) finish= 1;
	}
	
	cout << round-1 << "\n";
}*/
