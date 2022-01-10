// BOJ 2636 cheese 2022.01.10
// USE BFS. STEP 1. search [0][0] for bd[i][j]-> 2
// STEP 2. search Cheese for be meltend
// STEP 3. loop while rest cheese == 0
// compact the code after 01.12 ulsan travel
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

int N, M;
int bd[102][102];
bool vst[102][102];
queue<pair<int, int> > q;	// queue for BFS
int rC, T;					// rC : remained cheese. T : spent time 

void bfs() {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int tbd[102][102];
	pair<int, int> fr;
	int i, j, k;
	int x, y, nx, ny;
	
	int nC= rC;
	
	while(nC> 0)
	{
		rC= nC;
		
		// search air
		for(i= 0; i< N; i++) 
		{
			for(j= 0; j< M; j++) 
			{
				if(bd[i][j]== 2) bd[i][j]= 0;
				tbd[i][j]= bd[i][j];
			}
		}
		
		//for(i= 0; i< N; i++) for(j= 0; j< M; j++) tbd[i][j]= bd[i][j];
		memset(vst, 0, sizeof(vst));
	
		q.push({0, 0});
		vst[0][0]= 1;
	
		while(!q.empty())
		{
			fr= q.front();
			x= fr.first;
			y= fr.second;
			q.pop();
		
			for(k= 0; k< 4; k++)
			{
				nx= x+ dx[k];
				ny= y+ dy[k];
			
				if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
				if(!vst[nx][ny] && bd[nx][ny]== 0)
				{
					vst[nx][ny]= 1;
					q.push({nx, ny});
				}
			}
			tbd[x][y]= 2;
		}
		
		for(i= 0; i< N; i++) for(j= 0; j< M; j++) bd[i][j]= tbd[i][j];
		*/
	
		/*cout << "\n";
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)	cout << bd[i][j] << " ";
			cout << "\n";
		}
		cout << "\n";
		*/
		/*
		// why print wrong answer when I dont memset below code
		memset(vst, 0, sizeof(vst));
	
	
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)
			{
				if(!vst[i][j] && bd[i][j]== 1)
				{
					q.push({i, j});
					vst[i][j]= 1;
					
					while(!q.empty())
					{
						fr= q.front();
						x= fr.first;
						y= fr.second;
						bool conA= false;
						q.pop();
						
						for(k= 0; k< 4; k++)
						{
							nx= x+ dx[k];
							ny= y+ dy[k];
							
							if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
							if(!vst[nx][ny] && bd[nx][ny]== 1)
							{
								vst[nx][ny]= 1;
								q.push({nx, ny});
							}
							if(bd[nx][ny]== 2)
								conA= true;
						}
						if(conA)
						{
							tbd[x][y]= 2;
							nC--;
						}
						else
							tbd[x][y]= 1;
					}
				}
			}
		}
		T++;
		cout << "nC :" << nC << "\n";
		for(i= 0; i< N; i++) for(j= 0; j< M; j++) bd[i][j]= tbd[i][j];
		
		cout << "\n";
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< M; j++)	cout << tbd[i][j] << " ";
			cout << "\n";
		}
		cout << "\n";
		
	}
	
	
	cout << nC << "\n";

}
								

void cheese() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	rC= T= 0;
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			cin >> bd[i][j];
			if(bd[i][j]) rC++;
		}
	}
			
	bfs();
	
	cout << T << "\n" << rC << "\n";
}*/
