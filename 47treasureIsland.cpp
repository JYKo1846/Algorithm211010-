// BOJ 2589 treasureIsland 2021.12.13
// Every point of land, do BFS for find farthest land

/*
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

struct pos{
	int x;
	int y;
	int mv;
}typedef pos;

int maps[52][52];		// map information
bool vst[52][52];		// visitation check array
queue<pos> q;			// queue for BFS
int N, M;
int ans= 0;

void bfs(pos st) {		// BFS function. st : start position. search all position of land.
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j;
	
	memset(vst, 0, sizeof(vst));		// vst[]== 0 : not visited, vst[]== 1 : already visited

	q.push(st);
	vst[st.x][st.y]= 1;
	
	while(!q.empty()) 
	{
		pos fr= q.front();
		int x= fr.x;
		int y= fr.y;
		ans= ans > fr.mv ? ans : fr.mv;
		q.pop();
		
		for(i= 0; i< 4; i++)
		{
			pos nt;						// next position to move
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
			if(!vst[nx][ny] && (maps[nx][ny]== 1))
			{
				nt.x= nx;	nt.y= ny;
				nt.mv= fr.mv+ 1;
				q.push(nt);
				vst[nx][ny]= 1;
			}
		}
	}
	q= queue<pos>();
}

void treasureIsland() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N >> M;
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			char c;
			cin >> c;
			if(c=='L') maps[i][j]= 1;
			if(c=='W') maps[i][j]= 0;
		}
	}
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(maps[i][j])
			{
				pos t;
				t.x= i; t.y= j; t.mv= 0;
				bfs(t);
			}
		}
	}
	
	cout << ans << "\n";
}*/
