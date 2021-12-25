// BOJ 1051 number square 2021.12.25
/*
// USE SIMPLE BF

#include <iostream>

using namespace std;

int bd[52][52];		// board
int N, M;			// N: row, M: column
int maxL;			// maxL: square's maximum available length

void numSquare() {
	int i, j;
	int ans= 1;
	
	scanf("%d %d", &N, &M);
	
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			scanf("%1d", &bd[i][j]);
			
	maxL= N < M ? N : M;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			int st= bd[i][j];
			
			for(int l= 1; l< maxL; l++)
			{
				int nx= i+ l;
				int ny= j+ l;
				if((nx< N) && (ny< M))
				{
					if((st== bd[nx][j]) && (st== bd[i][ny]) && (st== bd[nx][ny]))
					{
						int sz= (l+1)*(l+1);
						ans= ans > sz ? ans : sz;
					}
				}
			}
		}
	}
	
	printf("%d\n", ans);
}*/
