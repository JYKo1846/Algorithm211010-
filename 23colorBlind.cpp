// BOJ 10026 Red,Green Color-blindness
// Use BFS. 1st try failed.

#include <iostream>
#include <queue>
#include <utility>

using namespace std;

char area[105][105];
bool chk[105][105];
queue<pair<int, int> > q;		// queue for bfs
int blindA= 0, normalA= 0;		// blind's area number, normal's area number
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};
	

void dfs(int x, int y, int N, char curC) {
	for(int i= 0; i< 4; i++)
	{
		int nx= x+ dx[i];
		int ny= y+ dy[i];
		
		if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
		char t= area[nx][ny];
		if((t== 'R' || t=='G')&& chk[nx][ny])
		{
			chk[nx][ny]= 0;
			if(t!= curC) 
			{
				normalA++;
				dfs(nx, ny, N, t);
			}
			else 
				dfs(nx, ny, N, curC);
		}
	}
}

void bfs(int N) {				// When search area, use 2 cursor, one for normal, one for color-blindness
	int i, j;
	char curC;					// save Current color for search.
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			if(chk[i][j])		// If, area[i][j] isn't checked, start BFS.
			{					// When searching, If Find R->G area, G->R area, continue BFS.
				q.push(make_pair(i, j));
				curC= area[i][j];
				blindA++; normalA++;
				chk[i][j]= 0;
				
				while(!q.empty())
				{
					int x= q.front().first;
					int y= q.front().second;
					q.pop();
					
					for(int k= 0; k< 4; k++)
					{
						int nx= x+ dx[k];
						int ny= y+ dy[k];
						
						if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
						if(chk[nx][ny])	
						{
							if(curC==area[nx][ny])
							{
								q.push(make_pair(nx, ny));
								chk[nx][ny]= 0;
							}
							else if((curC== 'R'&& area[nx][ny]== 'G') || (curC== 'G'&& area[nx][ny]== 'R'))
							{
								chk[nx][ny]= 0;
								dfs(nx, ny, N, area[nx][ny]);
								normalA++;
							}
						}
					}
				}
			}
		}
	}
}

void colorBlind() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int i, j;
	
	cin >> N;
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++) chk[i][j]= 1;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++) cin >> area[i][j];
	
	bfs(N);
	cout<< normalA << " " << blindA << "\n";
}
