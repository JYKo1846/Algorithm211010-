// BOJ 16234 population move. 2021.12.20
// USE BFS.
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
#include <math.h>

using namespace std;

int in[52][52];				// nation's population day 0
bool vst[52][52];			// check visitation
queue<pair<int, int> > q;	// queue for population move
queue<pair<int, int> > uni; // queue for changed population
int ans= 0;
int N, L, R;				// L : minimum limit to moving, R : maximum limit to moving
							// N : land's size
void bfs() {
	int bf[52][52];			// before moving
	int aft[52][52];		// after moving
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	bool mv;				// there is need to move
	int i, j;
	
	for(i= 0; i< N; i++) for(j= 0; j< N; j++) aft[i][j]= in[i][j];
	
	do 
	{
		mv= 0;
		memset(vst, 0, sizeof(vst));
		for(i= 0; i< N; i++) for(j= 0; j< N; j++) bf[i][j]= aft[i][j];
		
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< N; j++) 
			{
				if(!vst[i][j])
				{
					q.push({i, j});
					uni.push({i, j});
					vst[i][j]= 1;
					int nN= 1;				// union member's number
					int nP= bf[i][j];		// union member's total population
					
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
							
							int V= abs(bf[x][y]- bf[nx][ny]);
							if(!vst[nx][ny] && (L<= V) && (V<= R))
							{
								mv= 1;
								nP+= bf[nx][ny];
								nN++;
								uni.push({nx, ny});
								q.push({nx, ny});
								vst[nx][ny]= 1;
							}
						}
					}
					
					// fill aft[][]
					int nV= nP/ nN;
					while(!uni.empty())
					{
						int x= uni.front().first;
						int y= uni.front().second;
						aft[x][y]= nV;
						uni.pop();
					}
				}
			}
		}
		if(mv) ans++;
	}
	while(mv);
}

void popMove() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> N >> L >> R;
	
	for(int i= 0; i< N; i++)
		for(int j= 0; j< N; j++)
			cin >> in[i][j];

	bfs();
	cout << ans << "\n";			
}*/
