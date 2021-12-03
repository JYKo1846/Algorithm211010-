//BOJ 2583 Calculate area 2021.12.03
// use BFS. "visit" is ambigious. visit => visited.!!!!
/*
#include <bits/stdc++.h>
#include <string.h>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool paper[102][102];			// 1 : blank paper, 0 : rectangle area
bool visited[102][102];			// 1 : visited , 0 : not yet
queue<pair<int, int> > q;
vector<int> ans;
int areaN= 0;

void bfs(int N, int M) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j;
	pair<int, int> t;
	
	for(i= 0; i< M; i++)
	{
		for(j= 0; j< N; j++)
		{
			if(!visited[i][j]	&& paper[i][j])
			{
				areaN++;
				int areaS= 0;
				q.push({i, j});
				visited[i][j]= 1;
				while(!q.empty())
				{
					areaS++;
					t= q.front();
					int x= t.first;
					int y= t.second;
					q.pop();
					for(int k= 0; k< 4; k++)
					{
						int nx= x+ dx[k];
						int ny= y+ dy[k];
						
						if(nx< 0 || ny< 0 || nx>= M || ny>= N) continue;
						if(!visited[nx][ny] && paper[nx][ny])
						{
							visited[nx][ny]= 1;
							q.push({nx, ny});
						}
					}
				}
				ans.push_back(areaS);
			}
		}
	}
	
}
void calcArea() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N, M, K;
	int i, j;
	
	cin >> M >> N >> K;
	
	memset(paper, 1, sizeof(paper));
	memset(visited, 0, sizeof(visited));
	
	for(i= 0; i< K; i++)
	{
		int lt1, lt2, rt1, rt2;
		cin >> lt1 >> lt2 >> rt1 >> rt2;
		for(j= lt2; j< rt2; j++)
			for(int k= lt1; k< rt1; k++)
				paper[j][k]= 0;
	}
	
	bfs(N, M);
	sort(ans.begin(), ans.end());
	cout << areaN << "\n";
	for(i= 0; i< ans.size(); i++) cout << ans[i] << " ";
	cout << "\n";
}*/
