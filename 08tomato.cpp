//BOJ 7576 2021.11.17 
// Completed with BFS
// checking tomatoes number for checking unriped tomatoes. If, tmtNum value != 0 -> It means cannot reached tomato existed.
// and, check queue size for required minimum days.
/*
#include <stdio.h>
#include <queue>
#include <utility>
#define MAX 10000005

using namespace std;

int tmt[1005][1005];		// report array for status of tomato
int check[1005][1005];
queue<pair<int, int> > q;	// Queue for BFS
int day;
int tmtNum;					// Number of total tomatoes

void bfs(int M, int N) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	
	while(!q.empty())
	{
		int x= q.front().first;
		int y= q.front().second;
		if(q.size()== 1) day= check[x][y];
		tmtNum--;
		q.pop();
		
		
		for(int i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx < 0 || ny< 0 || nx>= N || ny>= M || tmt[nx][ny]== -1) continue;
			if(tmt[nx][ny]== 0 && check[nx][ny]== MAX) 
			{
				check[nx][ny]= check[x][y] + 1;
				q.push(make_pair(nx, ny));
			}
		}
	}
}

void tomato() {
	int M, N;
	int i, j;
	
	scanf("%d %d", &M, &N);
	
	day= 0;
	for(i= 0; i< 1005; i++)		// initialization
	{
		for(j= 0; j< 1005; j++) 
		{
			tmt[i][j]= 0;
			check[i][j]= MAX;
		}
	}
	
	for(i= 0; i< N; i++)
	{ 
		for(j= 0; j< M; j++)
		{
			scanf("%d", &tmt[i][j]); 
			if(tmt[i][j]== 1) 
			{
				q.push(make_pair(i, j));
				check[i][j]= 0;
			}
			if(tmt[i][j]== -1) continue;
			tmtNum++;
		}
	}
	bfs(M, N);
	
	if(tmtNum!= 0) day= -1;
	printf("%d\n", day);
}*/
