// BOJ 17070 move pipe 1 2022.01.08
// This problem use DFS
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;
bool rm[18][18];
bool vst[18][18];
int mv0[2][2]= {{0, 1}, {1, 1}};
int mv1[3][2]= {{0, 1}, {1, 1}, {1, 0}};
int mv2[2][2]= {{1, 1}, {1, 0}};
int ans= 0;

void dfs(int sts, int x, int y) {	// sts: current pipe status 0: -, 1: \, 2: | // x,y: position
	int i, j, nx, ny;
	
	if(x== N-1 && y== N-1) 
	{
		ans++;
		return ;
	}
	
	if(sts== 0)		// pipe is '-'
	{
		for(i= 0; i< 2; i++)
		{
			nx= x+ mv0[i][0];
			ny= y+ mv0[i][1];
		
			if(nx>= N || ny>= N) continue;
			if(!vst[nx][ny] && ((i!= 1 && rm[nx][ny]== 0) || 
			(i== 1 && rm[nx][y]== 0 && rm[x][ny]== 0 && rm[nx][ny]== 0)))
			{
				vst[nx][ny]= 1;
				dfs(i, nx, ny);
				vst[nx][ny]= 0;
			}
		}
	}
	
	if(sts== 1)		// pipe is '\'
	{
		for(i= 0; i< 3; i++)
		{
			nx= x+ mv1[i][0];
			ny= y+ mv1[i][1];
			
			if(nx>= N || ny>= N) continue;
			if(!vst[nx][ny] && ((i!= 1 && rm[nx][ny]== 0) || 
			(i== 1 && rm[nx][y]== 0 && rm[x][ny]== 0 && rm[nx][ny]== 0)))
			{
				vst[nx][ny]= 1;
				dfs(i, nx, ny);
				vst[nx][ny]= 0;
			}
		}
	}
	
	if(sts== 2) 
	{
		for(i= 2; i>0; i--)
		{
			nx= x+ mv2[i-1][0];
			ny= y+ mv2[i-1][1];
			
			if(nx>= N || ny>= N) continue;
			if(!vst[nx][ny] && ((i!= 1 && rm[nx][ny]== 0) || 
			(i== 1 && rm[nx][y]== 0 && rm[x][ny]== 0 && rm[nx][ny]== 0)))
			{
				vst[nx][ny]= 1;
				dfs(i, nx, ny);
				vst[nx][ny]= 0;
			}
		}
	}
}
			
			
void movePipe1() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	
	cin >> N;
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			cin >> rm[i][j];
	
	memset(vst, 0 , sizeof(vst));
	vst[0][1]= 1;
	dfs(0, 0, 1);
	
	cout << ans << "\n";
}
*/	
