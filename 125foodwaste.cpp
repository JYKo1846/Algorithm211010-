// BOJ 1743 avoid food waste 2022.03.18
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int N, M;
int bd[104][104];
bool vst[104][104];
queue<pair<int, int> > q;

int bfs() {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j;
	pair<int, int> fr;
	int ans= 0, tsz;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(bd[i][j]== 1 && !vst[i][j])
			{
				fr= make_pair(i, j);
				vst[i][j]= 1;
				q.push(fr);
				tsz= 1;
				
				while(!q.empty())
				{
					fr= q.front();
					int x= fr.first;
					int y= fr.second;
					q.pop();
					
					for(int k= 0; k< 4; k++)
					{
						int nx= x+ dx[k];
						int ny= y+ dy[k];
						
						if(nx< 1 || nx> M) continue;
						if(ny< 1 || ny> N) continue;
						if(bd[nx][ny]== 1 && !vst[nx][ny])
						{
							vst[nx][ny]= 1;
							tsz+= 1;
							q.push({nx, ny});
						}
					}
				}
				
				ans= ans> tsz ? ans: tsz;
			}
		}
	}
	
	return ans;
}

void foodwaste() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int K, i, t1, t2;
	
	memset(bd, 0, sizeof(bd));
	
	cin >> N >> M >> K;
	for(i= 0; i< K; i++)
	{
		cin >> t1 >> t2;
		bd[t1][t2]= 1;
	}
	
	cout << bfs() << "\n";	
	
	for(i= 0; i<= N; i++)
	{
		for(int j= 0; j<= M; j++) cout << bd[i][j] << " ";
		cout << "\n";
	}
}*/
