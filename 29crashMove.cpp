// BOJ 2206 Crash N move 2021.12.01
// 1st idea, before searching crash every wall. -> imply later -> imply this now. -> time out.
// 2nd idea, during searching, if crash chance be remained, then crash 4 position & push the queue. -> 
// 3rd idea, during searching, search move 1 space & break wall and move at the same time -> time out.
// 4th idea, dfs -> Time out. DFS is not useful at distance calculation problem.
// 5th idea, bfs with use 3-dimensional array. ->>> 2nd idea was almost close. But, forgot control the after break condition

#include <stdio.h>
#include <string.h>
#include <queue>
#define MIN 1000005

struct pos{
	int x;			// i
	int y;			// j
	bool brk= 1;		// if broken a wall 0, not yet 1
}typedef pos;

int min(int a, int b) { return a < b ? a : b; }

using namespace std;

bool maps[1002][1002];				// array for wall & space position 
int visit[1002][1002][2];			// distance save array , visit[x][y][break availiability] [][][0] : break possible, [][][1] : break impossible
queue<pos> q;						// queue for bfs
int ans= MIN;

int bfs(int N, int M) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int dbx[4]= {-2, 0, 2, 0};
	int dby[4]= {0, 2, 0, -2};
	
	int i, j;
	pos t;
	
	while(!q.empty())
	{
		pos fir= q.front();
		int x= fir.x;
		int y= fir.y;
		q.pop();
		for(i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			int nbx= x+ dbx[i];
			int nby= y+ dby[i];
	
			if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
			if(!fir.brk)
			{
				if(!maps[nx][ny] && (visit[nx][ny][1]== MIN))
				{
					visit[nx][ny][1]= visit[x][y][1]+ 1;
					t.x= nx; t.y= ny; t.brk= fir.brk;
					q.push(t);
				}
			}
			else
			{
				if(!maps[nx][ny] && (visit[nx][ny][0]== MIN))
				{
					visit[nx][ny][0]= visit[x][y][0]+ 1;
					t.x= nx; t.y= ny; t.brk= fir.brk;
					q.push(t);
				}
				if(nbx< 0 || nby< 0 || nbx>= N || nby>= M) continue;
				if(fir.brk && !maps[nbx][nby] && maps[nx][ny])
				{
					visit[nbx][nby][1]= min(visit[nbx][nby][1], visit[x][y][0]+ 2);
					t.x= nbx; t.y= nby; t.brk= 0;
					q.push(t);
				}
			}
		}
	}
	return min(visit[N-1][M-1][0], visit[N-1][M-1][1]);
}
/*
int bfs(int N, int M) {				// current problem. If met a wall, dist value saved wrong value. need modify 
	int dx[4]= {-1, 0, 1, 0};		// move with don't break wall
	int dy[4]= {0, 1, 0, -1};		
	int bdx[4]= {-2, 0, 2, 0};		// move wth break wall
	int bdy[4]= {0, 2, 0, -2};
	int i;

	pos fir, t; fir.x= 0; fir.y= 0;
	visit[0][0].dist= 1;
	q.push(fir);
	
	while(!q.empty())
	{
		fir= q.front();
		int x= fir.x;
		int y= fir.y;
		q.pop();
		
		for(i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			int nbx= x+ bdx[i];
			int nby= y+ bdy[i];
			
			if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
			if(!maps[nx][ny] && (visit[nx][ny].dist== MIN))
			{
				visit[nx][ny].bist= min(visit[nx][ny].bist, visit[x][y].bist+ 1);
				visit[nx][ny].dist= visit[x][y].dist+ 1;
				printf("CURRENT NX: %d, NY: %d\n visit[nx][ny]'s dist : %d, bist : %d\n", nx, ny, visit[nx][ny].dist, visit[nx][ny].bist);
				t.x= nx; t.y= ny;
				q.push(t);
			}
			if(nbx< 0 || nby< 0|| nbx>= N || nby>= M) continue;
			if(!maps[nbx][nby] && maps[nx][ny] && (visit[nbx][nby].dist== MIN) && (visit[x][y].bist== MIN))
			{
				int bist= visit[nbx][nby].bist;
				visit[nbx][nby].bist= min(bist, visit[x][y].dist+ 2);
				printf("CURRENT NBX: %d, NBY: %d\n visit[nbx][nby]'s dist : %d, bist : %d\n", nbx, nby, visit[nbx][nby].dist, visit[nbx][nby].bist);
				printf("CURRENT BIST : %d, DIST : %d\n", visit[nbx][nby].bist, visit[nbx][nby].dist);
				t.x= nbx; t.y= nby;
				q.push(t);
			}
		}
		printf("\n");
	}
	dist ans= visit[N-1][M-1];
	return 	ans.bist < ans.dist ? ans.bist : ans.dist;
}*/

void crashMove() {
	int N, M;
	int i, j, t;
	
	scanf("%d %d", &N, &M);
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< M; j++)
		{
			scanf("%1d", &maps[i][j]);
			visit[i][j][0]= MIN;
			visit[i][j][1]= MIN;
		}
	}
	pos fir; fir.x= 0, fir.y= 0;
	visit[0][0][0]= 1; visit[0][0][1]= 1;
	q.push(fir);
	ans= min(ans, bfs(N, M));
	if(ans== MIN) ans= -1;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(visit[i][j][1]== MIN) visit[i][j][1]= 0;
			if(visit[i][j][0]== MIN) visit[i][j][0]= 0;
			if(maps[i][j]) 
			{
				printf("==== ");
				continue;
			}
			printf("%d//%d ", visit[i][j][1], visit[i][j][0]);
		}
		printf("\n");
	}
	
	printf("%d\n", ans);
}
