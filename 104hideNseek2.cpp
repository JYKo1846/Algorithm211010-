/*
#include <iostream>
#include <cstring>
#include <queue>
#include <math.h>
#include <vector>
#define MAXN 150003

using namespace std;

struct mv{
	int x;
	int mvN;
}typedef mv;

int N, K, cnt;
bool vst[MAXN];
queue<mv> q;
vector<int> v[MAXN];

void dfs(int lmt, int curC) {
	int i, j, t;
	
	for(i= 0; i< lmt; i++)
	{
		for(j= 0; j< v[i].size(); j++)
		{
			t= v[i][j];
			
			if(t< MAXN && !vst[t+1])	v[i+1].push_back(t+1);
			if(t> 0 && !vst[t-1])	v[i+1].push_back(t-1);
			if(t!= 0 && t*2<= MAXN && !vst[t*2])	v[i+1].push_back(t*2);
		}
		
		for(j= 0; j< v[i+1].size(); j++)
			vst[v[i+1][j]]= 1;
	}
	
	for(i= 0; i< v[lmt].size(); i++) 
		if(v[lmt][i]== K) cnt++;
}

int bfs() {
	int nx;
	mv fr, t;
	memset(vst, 0, sizeof(vst));
	
	fr.x= N; fr.mvN= 0;
	q.push(fr);
	vst[N]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		nx= fr.x; t.mvN= fr.mvN+ 1;
		q.pop();
		
		if(nx== K) return fr.mvN;
		
		if(nx< MAXN && !vst[nx+ 1])
		{
			t.x= nx+ 1;
			q.push(t);
			vst[t.x]= 1;
		}
		
		if(nx> 0 && !vst[nx- 1])
		{
			t.x= nx- 1;
			q.push(t);
			vst[t.x]= 1;
		}
		
		if(nx!= 0 && nx*2<= MAXN && !vst[nx*2])
		{
			t.x= nx* 2;
			q.push(t);
			vst[t.x]= 1;
		}
	}
}

void hideNseek2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cnt= 0;
	int minM;
	
	cin >> N >> K;
	
	minM= bfs();
	minM= minM< abs(N- K) ? minM : abs(N- K);
	
	memset(vst, 0, sizeof(vst));
	v[0].push_back(N);
	vst[N]= 1;
	dfs(minM, 0);
	
	cout << minM << "\n" << cnt << "\n";
}*/
