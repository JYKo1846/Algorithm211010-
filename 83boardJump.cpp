// BOJ 2210 number board jump 2022.01.06
// easy peasy BF code
/*
#include <iostream>
#include <cstring>
#define MAXN 1000002

using namespace std;

int dx[4]= {-1, 0 ,1, 0};
int dy[4]= {0, 1, 0 ,-1};
int bd[6][6];
bool used[MAXN];

void dfs(int x, int y, int curV, int mv) {
	
	if(mv== 5)
	{
		used[curV]= 1;
		return ;
	}
	
	for(int i= 0; i< 4; i++)
	{
		int nx= x+ dx[i];
		int ny= y+ dy[i];
		
		if(nx< 0 || ny< 0 || nx>= 5 || ny>= 5) continue ;
		dfs(nx, ny, curV*10+ bd[nx][ny], mv+1);
	}
}

void boardJump() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, ans= 0;
	
	memset(used, 0, sizeof(used));
	
	for(i= 0; i< 5; i++)
		for(j= 0; j< 5; j++)
			cin >> bd[i][j];
			
	for(i= 0; i< 5; i++)
		for(j= 0; j< 5; j++)
			dfs(i, j, bd[i][j], 0);
			
	for(i= 0; i<MAXN; i++)
		if(used[i]) ans++;
	cout << ans << "\n";
}
*/
