// BOJ 2573 glacier 2021.12.22
// I can't handle if "all glaciers are melten, but bfs() don't return 1."
// 1st try-> failed at 62% -> modify Line 106 ~ 111 -> success 
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int maps[302][302];			// glacier's height
int t[302][302];			// temporary glacier calculation
queue<pair<int, int> > q;	// queue for BFS
bool chk[302][302];			// visitation check array for BFS
int N, M;					// N : row, M : column
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};
int day= 0;

bool bfs() {				// if, land >= 2, return true. else, false
	int i, j;
	int land= 0;			// land number
	
	memset(chk, 0, sizeof(chk));

	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(!chk[i][j] && (maps[i][j]!= 0))
			{
				q.push({i, j});
				chk[i][j]= 1;
				
				while(!q.empty())
				{
					pair<int, int> fir= q.front();
					int x= fir.first;
					int y= fir.second;
					q.pop();
					
					for(int k= 0; k< 4; k++)
					{
						int nx= x+ dx[k];
						int ny= y+ dy[k];
						
						if(nx< 0|| ny< 0|| nx>= N|| ny>= M) continue;
						if(!chk[nx][ny] && (maps[nx][ny]!= 0))
						{
							q.push({nx, ny});
							chk[nx][ny]= 1;
						}
					}
				}
				land++;
			}
		}
	}
	
	if(land>= 2) return true;
	else return false;
}

void search() {
	int i, j;
	int tch;		// side of touced by sea
	bool nxt= 0;	// if need to change, nxt= 1
	
	if(bfs()) {
		cout << day << "\n";
		return ;
	}
	
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(maps[i][j]!= 0)
			{
				nxt= 1;
				tch= 0;
				for(int k= 0; k< 4; k++)
				{
					int nx= i+ dx[k];
					int ny= j+ dy[k];
					
					if(nx< 0 || ny< 0|| nx>= N || ny>= M) continue;
					if(maps[nx][ny]== 0)
						tch++;
				}
				t[i][j]= maps[i][j]- tch;
				if(t[i][j]< 0) t[i][j]= 0;
			}
		}
	}
	
	for(i= 0; i< N; i++) for(j= 0; j< M; j++) maps[i][j]= t[i][j];
	
	if(nxt)
	{
		day++;
		search();
	}
	else		// if, land don't divided after all glacier melten
	{
		day= 0;
		cout << day << "\n";
		return ;
	}
}

void glacier() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			cin >> maps[i][j];
	
	search();
	
}*/
