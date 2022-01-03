// BOJ 18111 minecraft 2022.01.03
/*
#include <iostream>
#include <cstring>

using namespace std;

int bd[505][505];
int tb[505][505];

void mineCraft() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	int N, M, B; 
	int anT= 200000000, anH= -1;
	int tT, tB;								// tT : temporary spended time for leveling ground, tB: temporary block in bag
	int lG= 300, hG= -1;					// lowest ground, highest ground
	
	cin >> N >> M >> B;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M ;j++)
		{
			cin >> bd[i][j];
			lG= lG < bd[i][j] ? lG : bd[i][j];
			hG= hG > bd[i][j] ? hG : bd[i][j];
		}
	}
	
	for(int oH= lG; oH<= hG; oH++)
	{
		int used;
		tT= 0;
		tB= B;
		
		// 1st step. dig all ground for make oH ( object Height )
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				used= bd[i][j]- oH;
				if(used> 0)
				{
					tb[i][j]= oH;
					tT+= used*2;
					tB+= used;
				}
				else tb[i][j]= bd[i][j];
			}
		}
		
		// 2nd step. fill up all ground for make oH
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				used= oH- tb[i][j];
				if((used> 0) && (tB-used>= 0))
				{
					tb[i][j]= oH;
					tT+= used;
					tB-= used;
				}
			}
		}
		
		bool chk= 1;
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				if(tb[i][j]!= oH)
				{
					chk= 0;
					break;
				}
			}
		}
		
		if(chk && (anT> tT))
		{
			anT= tT;
			anH= anH > oH ? anH : oH;
		}
	}
	
	cout << anT <<" " << anH << "\n";
}*/
