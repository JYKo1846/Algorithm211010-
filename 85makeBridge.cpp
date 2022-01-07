// BOJ 2146 make bridge 2022.01.07
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct bdg{
	int x;
	int y;
	int len;
	int st;
}typedef bdg;

int N;
int maps[102][102];
bool vst[102][102];
bool mbv[102][102];
int islN= 1;
queue<bdg> q;				// queue for numbering island
queue<bdg> mkbd;			// queue for make bridge 
int minL= 10005;

void bfs(bool mk) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j, k;
	bdg t, fr;
	
	memset(vst, 0, sizeof(vst));
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			if(!vst[i][j] && maps[i][j]!= 0)
			{
				if(!mk) maps[i][j]= islN;
				else t.st= maps[i][j];
				t.x= i; t.y= j; t.len= 0;
				q.push(t);
				vst[i][j]= 1;
				
				while(!q.empty())
				{
					fr= q.front();
					q.pop();
					
					for(k= 0; k< 4; k++)
					{
						int nx= fr.x+ dx[k];
						int ny= fr.y+ dy[k];
						
						if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
						if(!vst[nx][ny])
						{
							t.x= nx; t.y= ny;
							t.len= 0; t.st= fr.st;
							if(maps[nx][ny]!= 0)
							{
								if(!mk) maps[nx][ny]= islN;
								q.push(t);
								vst[nx][ny]= 1;
							}
							if(mk && maps[nx][ny]== 0)
							{
								t.len= 1;
								if(!vst[nx][ny]){
									mkbd.push(t);
									vst[nx][ny]= 1;
								}
							}
						}
						
					}
				}
				if(!mk) islN++;
				
				// In mkbd, all of shoreline of islands are contained
				while(mk && !mkbd.empty())
				{
					fr= mkbd.front();
					q.push(fr);
					cout << fr.st <<"'S SHORELINE [ " << fr.x << ", " << fr.y << " ] \n";
					mkbd.pop();
					
					memset(mbv, 0, sizeof(mbv));
					
					// search shortest bridge point shore
					while(!q.empty())
					{
						fr= q.front();
						q.pop();
						
						for(k= 0; k< 4; k++)
						{
							int nx= fr.x+ dx[k];
							int ny= fr.y+ dy[k];
						
							if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
							if(fr.len > minL) 
							{
								q= queue<bdg>();
								break;
							}
							
							if(maps[nx][ny]!= 0)
							{
								if(maps[nx][ny]== fr.st) continue;
								else
								{
									cout << "START ISLAND : " << fr.st << ", DEST ISLAND : " << maps[nx][ny] << "\n";
									minL= minL < fr.len ? minL : fr.len;
									q= queue<bdg>();
									break;
								}
							}
							else if(!mbv[nx][ny] && maps[nx][ny]== 0)
							{
								t.x= nx; t.y= ny; t.st= fr.st;
								t.len= fr.len+1;
								mbv[nx][ny]= 1;					// memory overflow because of visitation check!!!!
								q.push(t);
							}
						}
					}
				}
			}
		}
	}
}
				

void makeBridge() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N;
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			cin >> maps[i][j];
			
	bfs(0);
	
	cout << "\n";
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
			cout << maps[i][j] << " ";
		cout << "\n";
	}
	cout << "\n";
	
	bfs(1);
	
	cout << minL << "\n";
}*/
