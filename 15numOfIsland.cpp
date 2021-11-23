// BOJ 4963 2021.11.23
// Use BFS.	& Remember when use BFS. Check visitation !!!!! when  wanted value is searched.
// Because of that, first & second try was failed & reason was out of memory.
/*
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int map[52][52];		// position of sea & island.
bool visit[52][52];		// check visitation.
queue<pair<int, int> > q;	// queue for BFS.

int bfs(int w, int h) {

	int dx[8]= { -1, -1, 0, 1, 1, 1, 0, -1};
	int dy[8]= { 0, 1, 1, 1, 0, -1, -1, -1};
	int i, j, ans= 0;
	
	for(i= 0; i< h; i++) 
	{
		for(j= 0; j< w; j++) 
		{
			if(map[i][j]== 1 && !visit[i][j])
			{
				q.push(make_pair(i, j));
				visit[i][j]= 1;
				while(!q.empty())
				{
					int x= q.front().first;
					int y= q.front().second;
					q.pop(); 
					
					for(int k= 0; k< 8; k++)
					{
						int nx= x+ dx[k];
						int ny= y+ dy[k];
						
						if(nx< 0 || ny< 0 || nx>= h || ny>= w) continue;
						if(map[nx][ny]== 1 && !visit[nx][ny])
						{
							q.push(make_pair(nx, ny));
							visit[nx][ny]= 1;
						}
					}
				}
				ans++;
			}
		}
	}
	return ans;
}


void numOfIsland() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int W, H;			// W : width of map, H : height of map.
	int i, j;
	while(1) 
	{
		for(i= 0; i< 52; i++)
		{
			for(j= 0; j< 52; j++)
			{
				map[i][j]= 0;
				visit[i][j]= 0;
			}
		}
		
		cin >> W >> H;
		if(W== 0 && H== 0) return ;
	
		for(i= 0; i< H; i++)
			for(j= 0; j< W; j++) 
				cin >> map[i][j];
	
		cout << bfs(W, H)<< "\n";
	}
	
}*/
