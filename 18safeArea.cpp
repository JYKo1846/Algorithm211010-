// BOJ 2468 2021.11.24
// BruteForce + BFS
// Search Maximum number of safe area at each height of raindrop.
/*
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int area[102][102];				// Area height value array
bool visit[102][102];			// Visit availability check array
queue<pair<int, int> > q;		// Queue for BFS

int bfs(int N, int maxH) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int ans= 1, ans_t;					// There is existed that no rain. => ans= 1
	int i, j;
	
	for(int h= 1; h< maxH; h++)
	{
		ans_t= 0;				// answer of each h(raindrop's height)
		for(i= 0; i< N; i++)		// initialize visitation before search the safe area.
			for(j= 0; j< N; j++) 
				visit[i][j]= 0;
		
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< N; j++)
			{
				if(area[i][j]> h && !visit[i][j])
				{
					q.push(make_pair(i, j));
					visit[i][j]= 1;
					
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
							if(area[nx][ny]> h && !visit[nx][ny])
							{
								q.push(make_pair(nx, ny));
								visit[nx][ny]= 1;
							}
						}
					}
					ans_t++;
				}
			}
		}
		ans= ans > ans_t ? ans : ans_t;
	}
	return ans;
}

void safeArea() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int maxH= 0;
	int i, j;
	
	for(i= 0; i< 102; i++)
		for(j= 0; j< 102; j++)
			area[i][j]= 0;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			cin >> area[i][j];
			maxH= maxH > area[i][j] ? maxH : area[i][j];
		}
	}
	
	cout << bfs(N, maxH) << "\n";
}
*/		
