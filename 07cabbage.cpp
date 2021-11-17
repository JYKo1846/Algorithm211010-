// BOJ 1012 2021.11.17
// implement with DFS
// wrong answer was occured. => I misunderstanded input form. input forms like j i ( arr[i][j] ) but, I understanded i j.
// modification completed. 
/*
#include <iostream>

using namespace std;

bool cab[55][55];		// position of cabbage
bool check[55][55];		// visit availability
int ans;
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};
	


void init() {
	int i, j;
	for(i= 0; i< 55; i++) 
	{
		for(j= 0; j< 55; j++) 
		{
			cab[i][j]= 0;
			check[i][j]= 0;
		}
	}
	ans= 0;
}

void dfs(int x, int y, int M, int N) {
	check[x][y]= 1;
	
	for(int i= 0; i< 4; i++)
	{
		int nx= x+ dx[i];
		int ny= y+ dy[i];
		if(nx < 0 || ny< 0 || nx> N || ny> M) continue;
		if(cab[nx][ny] && !check[nx][ny]) dfs(nx, ny, M, N);
	}
}

void cabbage() {
	int T, M, N, K;		// T : number of testcase, M : width, N : height, K : position of cabbage (x,y) form
	int i, j;
	
	cin >> T;
	for(i= 0; i< T; i++) 
	{
		int tx, ty;
		init();
		cin >> M >> N >> K;
		for(j= 0; j< K; j++)
		{
			cin >> tx >> ty;
			cab[ty][tx] = 1;
		}
		
		for(j= 0; j< N; j++)	// cabbage search loop
		{
			for(int k= 0; k< M; k++)
			{
				if(cab[j][k] && !check[j][k])
				{
					dfs(j, k, M, N);
					ans++;
				}
			}
		}
		cout << "ANS: " << ans << endl;
	}
}*/
