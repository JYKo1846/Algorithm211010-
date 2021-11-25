// BOJ 1987 alphabet 2021-11-25
// Use DFS. 1st, 2nd try was failed. because, variable t was not initialized when was not-satified condition phrase in dfs().
// DONT FORGET INITIALIZATION BY WHETHER. 
/*
#include <iostream>

using namespace std;

char in[23][23];			// input board.
bool visit[23][23];			// check visited area.
bool already[27];			// check visited alphabet.
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};


int dfs(int R, int C, int x, int y, int curA) {
	
	int t;
	int res= curA;
	for(int i= 0; i< 4; i++)
	{
		int nx= x+ dx[i];
		int ny= y+ dy[i];
		if(nx < 0 || ny < 0 || nx>= R || ny>= C) continue;
		if(!visit[nx][ny] && !already[in[nx][ny]-65])
		{
			visit[nx][ny]= 1;
			already[in[nx][ny]-65]= 1;
			t= dfs(R, C, nx, ny, curA+1);
			already[in[nx][ny]-65]= 0;
			visit[nx][ny]= 0;
			res= res > t ? res : t;
		}
		
	}
	return res;
}


void alphabet() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int R, C;			// R : height, C : width
	int i, j;
	
	for(i= 0; i< 23; i++)
	{
		for(j= 0; j< 23; j++)
		{
			in[i][j]= 0;
			visit[i][j]= 0;
		}
	}
	for(i= 0; i< 27; i++) already[i]= 0;
	
	cin >> R >> C;
	for(i= 0; i< R; i++)
		for(j= 0; j< C; j++) 
			cin >> in[i][j];
	
	visit[0][0]= 1;	
	already[in[0][0]-65]= 1;
	int t= dfs(R, C, 0, 0, 1);
	cout << t << "\n";
}*/
