// BOJ 2638 cheese 2022.02.22 
// USE BFS TWICE 
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int N, M;
int cN;
int bd[2][102][102];
bool vst[102][102];
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};
queue<pair<int, int> > q;

bool chk(int x, int y) {	// return 1 : it's melted. 
	int ctc= 0;				// return 0 : it's not
	
	for(int i= 0; i< 4; i++)
	{
		int nx= x+ dx[i];
		int ny= y+ dy[i];
		
		if(nx< 0 || nx>= N) continue;
		if(ny< 0 || ny>= M) continue;
		if(bd[0][nx][ny]== 2) ctc++;
	}
	
	if(ctc< 2) return 0;
	else return 1;
}

int bfs() {
	int day= 0;
	int i, j;
	int x, y, nx, ny;
	
	pair<int, int> fr;
	
	while(cN> 0)
	{
		memset(bd[1], 0, sizeof(bd[1]));
		memset(vst, 0 ,sizeof(vst));
		
		// first, search air area. bd[x][y]= 2
		q.push({0, 0});
		bd[0][0][0]= 2;
		vst[0][0]= 1;
		
		while(!q.empty())
		{
			fr= q.front();
			x= fr.first;
			y= fr.second;
			q.pop();
			
			for(i= 0; i< 4; i++)
			{
				nx= x+ dx[i];
				ny= y+ dy[i];
				
				if(nx< 0 || nx>= N) continue;
				if(ny< 0 || ny>= M) continue;
				if(!vst[nx][ny] && bd[0][nx][ny]== 0)
				{
					vst[nx][ny]= 1;
					bd[0][nx][ny]= 2;
					q.push({nx, ny});
				}
			}
		}
		
		// second, simulate cheese area. bd[x][y]= 1
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				if(!vst[i][j] && bd[0][i][j]== 1)
				{
					q.push({i, j});
					vst[i][j]= 1;
					if(chk(i, j)) 
					{
						bd[1][i][j]= 0;
						cN--;
					}
					else bd[1][i][j]= 1;
					
					while(!q.empty())
					{
						fr= q.front();
						x= fr.first;
						y= fr.second;
						q.pop();
						
						for(int k= 0; k< 4; k++)
						{
							nx= x+ dx[k];
							ny= y+ dy[k];
							if(nx< 0 || nx>= N) continue;
							if(ny< 0 || ny>= M) continue;
							if(!vst[nx][ny] && bd[0][nx][ny]== 1)
							{
								vst[nx][ny]= 1;
								if(chk(nx, ny)) {
									bd[1][nx][ny]= 0;
									cN--;
								}
								else bd[1][nx][ny]= 1;
								q.push({nx, ny});
							}
						}
					}
				}
			}
		}
		
		// last, copy bd[1] => bd[0]
		for(i= 0; i< N; i++)
			for(j= 0; j< M; j++) bd[0][i][j]= bd[1][i][j];
		day++;
	}
	return day;
}
						

void cheese() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	cN= 0;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			cin >> bd[0][i][j];
			if(bd[0][i][j]== 1) cN++;
		}
	}
			
	cout << bfs() << endl;
}*/
