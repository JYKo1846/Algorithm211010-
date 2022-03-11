// BOJ 1926 picture 2022.03.11
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int cv[502][502];
bool vst[502][502];
int N, M;
int ansN= 0, ansW= 0;
queue<pair<int, int> > q;

void bfs() {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j;
	int tmpW= 0;
	pair<int, int> fr;
	
	memset(vst, 0, sizeof(vst));
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(cv[i][j]== 1 && !vst[i][j])
			{
				tmpW= 1;
				q.push({i, j});
				vst[i][j]= 1;
				
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
						
						if(nx< 0 || nx>= N) continue;
						if(ny< 0 || ny>= M) continue;
						if(cv[nx][ny]== 1 && !vst[nx][ny])
						{
							q.push({nx, ny});
							vst[nx][ny]= 1;
							tmpW++;
						}
					}
				}
				
				ansW= ansW > tmpW ? ansW : tmpW;
				ansN++;
			}
		}
	}
}

void picture() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	
	cin >> N >> M;
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			cin >> cv[i][j];
			
	bfs();
	cout << ansN << "\n" << ansW << "\n";
}*/
