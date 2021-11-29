//BOJ 10026 colorBlindness 2021.11.28
// use BFS twice.
/*
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

char area[104][104];			// color two-dimensional array
bool chk[104][104];				// check visitation availability
queue<pair<int, int> > q;		// Queue for BFS

void bfs(int &ans, int N, bool flg) {
	int i, j;
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			chk[i][j]= 1;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			if(chk[i][j])
			{
				char curC= area[i][j];			// curC : current area's color
				q.push(make_pair(i, j));
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
							if(curC!= 'B' && flg)			// flg== 1, counting color-Blindness person's area number.
							{
								if(area[nx][ny]=='G' || area[nx][ny]=='R')
								{
									q.push(make_pair(nx, ny));
									chk[nx][ny]= 0;
								}
							
							}
							else 		
							{
								if(curC== area[nx][ny])
								{
									q.push(make_pair(nx, ny));
									chk[nx][ny]= 0;
								}
							}
						}
					}
				}
				ans++;
			}
			
		}
	}
}

void colorBlind() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int i;
	
	cin >> N;
	
	for(i= 0; i< N; i++) 
		for(int j= 0; j< N; j++)
			cin >> area[i][j];
	
	int norN= 0, colN= 0;	// norN : normal's area num, colN : colorBlindness's area num
	bfs(norN, N, 0);
	bfs(colN, N, 1);
	cout << norN << " " << colN << "\n";
}	*/
