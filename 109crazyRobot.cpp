// BOJ 1405 crazy robot 2022.02.18
/*
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int N;
double dir[5];
bool vst[40][40];
double ans= 0;
int dx[4]= {0, 0, 1, -1};
int dy[4]= {1, -1, 0, 0};

void dfs(int curN, double V, int x, int y) {
	int i, nx, ny;
	double tV;
	if(curN== N)
	{
		ans+= V;
		return ;
	}
	
	for(i= 0; i< 4; i++)
	{
		nx= x+ dx[i];
		ny= y+ dy[i];
		if(dir[i]!= 0 && !vst[nx][ny])
		{
			vst[nx][ny]= 1;
			tV= V*dir[i];
			dfs(curN+1, tV, nx, ny);
			vst[nx][ny]= 0;
		}
	}
}

void crazyRobot() {
	int i, j;
	memset(vst, 0, sizeof(vst));
	
	scanf("%d", &N);
	for(i= 0; i< 4; i++)
	{
		int t;
		scanf("%d", &t);
		printf("%d\n", t);
		dir[i]= (double)t/100;
	}
	
	vst[20][20]= 1;
	dfs(0, 1, 20, 20);
	printf("%.9lf\n", ans);
}*/
