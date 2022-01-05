// BOJ 14697 assign room 2022.01.05
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;
int room[3];
bool ava[3][302];
bool comb[4][302];		// comb[0] = A * B, comb[1]= A * C, comb[2]= B * C, comb[3]= result ( A*B + B*C + A*C + A*B*C )


void assignRoom() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(comb, 0, sizeof(comb));
	memset(ava, 0, sizeof(ava));
	
	for(i= 0; i< 3; i++) cin >> room[i];
	cin >> N;
	
	for(i= 0; i< 3; i++)
	{
		for(j= 0; j*room[i] <= N; j++)
		{
			ava[i][j*room[i]]= 1;
			comb[3][j*room[i]]= 1;
		}
	}
	

	// A * B + A * C + B * C
	for(int n= 0; n< 2; n++)
	{
		for(i= 0; i<= N; i++)
		{
			if(ava[n][i])
			{
				for(j= 0; j<= N; j++)
				{
					if(ava[n+1][j] && i+j <= N)				// A * B, B * C
					{
						if(n== 0) comb[n][i+j]= 1;
						else comb[n+1][i+j]= 1;
						comb[3][i+j]= 1;
					}
					if(n== 0 && ava[n+2][j] && i+j <= N)	// A * C
					{
						comb[n+1][i+j]= 1;
						comb[3][i+j]= 1;
					}
				}
			}
		}
	}
	
	// A* B* C
	for(int n= 0; n< 3; n++)
	{
		for(i= 0; i<= N; i++)
		{
			if(ava[n][i])
			{
				for(j= 0; j<= N; j++)
				{
					if(i+j <= N)
					{
						if(n== 0)
							if(comb[2][j])
								comb[3][i+j]= 1;
						
						if(n== 1)
							if(comb[1][j])
								comb[3][i+j]= 1;
						
						if(n== 2)
							if(comb[0][j])
								comb[3][i+j]= 1;
					}
				}
			}
		}
	}
	
	cout << comb[3][N] << "\n";
}*/
