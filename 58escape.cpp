// BOJ 3055 escape 2021.12.21
// USE BFS. USE TWICE
// BE CONSCIOUS AT BFS CONDITION
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

int maps[52][52];			// first map layout. 0 : blank, 1: position. 6: rock. 7: water. 9: exit
int flood[52][52];			// spending time for fill up water
int spend[52][52];			// spending time for visit that place
bool chk[52][52];			// visitation check array for BFS
queue<pair<int, int> > q;	// queue for BFS
int R, C;

int min(int a, int b) { return a < b ? a : b; }

void bfs(bool fl, pair<int, int> st) {	// fl== 0 : for fill flood[][]. fl== 1: search shortest way
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j;

	memset(chk, 0, sizeof(chk));
	
	if(fl) q.push(st);
	while(!q.empty())
	{
		int x= q.front().first;
		int y= q.front().second;
		chk[x][y]= 1;
		q.pop();
		
		for(int i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= R || ny>= C) continue;
			if(!chk[nx][ny] && 
				(maps[nx][ny]!= 6) &&
				((!fl && maps[nx][ny]!= 9) || 
				(fl && (spend[x][y]+1 < flood[nx][ny])))) 
			{
				if(!fl)
					flood[nx][ny]= min(flood[nx][ny], flood[x][y]+ 1);
				else 
					spend[nx][ny]= spend[x][y]+ 1;
	
				q.push(make_pair(nx, ny));
				chk[nx][ny]= 1;
			}
		}
	}
}
		
void escape() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	pair<int, int> st, dst;		// starting position
	int i, j;
	char c;
	
	cin >> R >> C;
	for(i= 0; i< R; i++) for(j= 0; j< C; j++) flood[i][j]= 3000;
	
	for(i= 0; i< R; i++)
	{
		for(j= 0; j< C; j++)
		{
			cin >> c;
			if(c== '.') maps[i][j]= 0;
			if(c== 'S') 
			{
				maps[i][j]= 1;
				spend[i][j]= 0;
				st.first= i;
				st.second= j;
			}
			if(c== 'X') maps[i][j]= 6;
			if(c== '*')	
			{ 
				maps[i][j]= 7;
				flood[i][j]= 0;
				q.push(make_pair(i, j));
			}
			if(c== 'D')	
			{
				maps[i][j]= 9;
				dst.first= i;
				dst.second= j;
			}
		}
	}
	
	bfs(0, st);
	bfs(1, st);
	
	int r= spend[dst.first][dst.second];
	if(r== 0) cout << "KAKTUS" << "\n";
	else cout << r << "\n";
	
}*/
