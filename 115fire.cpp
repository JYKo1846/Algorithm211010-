// BOJ 5427 fire 2022.03.04
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int W, H;
int stX, stY;
int mp[3][1005][1005];	// mp[0] : input map. mp[1]: fire spread map. mp[2]: puppet's move map
bool vst[1005][1005];
queue<pair<int, int> > q;

int bfs(bool isFire) {
	int i, x, y, tm;
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	pair<int, int> fr;
	
	if(!isFire)
	{
		q.push({stX, stY});
		vst[stX][stY]= 1;
	}
	
	while(!q.empty())
	{
		fr= q.front();
		x= fr.first;
		y= fr.second;
		q.pop();
		if(!isFire && (x== 0 || x== H-1 || y== 0 || y== W-1)) return mp[2][x][y]+1;
		
		for(i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || nx>= H) continue;
			if(ny< 0 || ny>= W) continue;
			
			if(isFire && mp[0][nx][ny]!= -5 && !vst[nx][ny]) 
			{
				vst[nx][ny]= 1;
				mp[1][nx][ny]= mp[1][x][y]+ 1;
				q.push({nx, ny});
			}
			
			if(!isFire && mp[0][nx][ny]!= -5 && mp[2][x][y]+ 1< mp[1][nx][ny] && !vst[nx][ny])
			{
				vst[nx][ny]= 1;
				mp[2][nx][ny]= mp[2][x][y]+ 1;
				q.push({nx, ny});
			}
		}
	}
	return -100;
}
		

void fire() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, T, res;
	
	cin >> T;
	
	while(T--)
	{
		q= queue<pair<int, int> >();
		memset(vst, 0, sizeof(vst));
		memset(mp, 0, sizeof(mp));
		
		cin >> W >> H;
		for(i= 0; i< H; i++)
		{
			for(j= 0; j< W; j++)
			{
				char c;
				cin >> c;
				if(c=='.')
				{
					mp[0][i][j]= 0;
					mp[1][i][j]= 1500;
				}
				if(c=='#')
					mp[0][i][j]= -5;
				if(c=='@')
				{
					stX= i;
					stY= j;
					mp[2][i][j]= 0;
				}
				if(c=='*') 
				{
					vst[i][j]= 1;
					mp[1][i][j]= 0;
					q.push({i, j});
				}
			}
		}
		res= bfs(1);
		
		memset(vst, 0, sizeof(vst));
		q= queue<pair<int, int> >();
		res= bfs(0);
		
		if(res== -100) cout << "IMPOSSIBLE\n";
		else cout << res << "\n";
	}
}*/
