// BOJ 12852 make1_2 2022.03.08
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

queue<int> q;
int N;
int ans;
int vst[1000005];
int prnt[1000005];

void dfs(int cur, int cnt) {
	int i;
	
	if(cnt> ans)
		return ;
	
	if(cnt== ans && prnt[cnt]== N)
	{
		for(i= ans; i>= 0; i--) cout << prnt[i] << " ";
		cout << "\n";
		return ;
	}
	
	if(cur+1<= N && vst[cur+1]== vst[cur]-1)
	{
		prnt[cnt+1]= cur+ 1;
		dfs(cur+1, cnt+1);
	}
	
	if(cur*2<= N && vst[cur*2]== vst[cur]-1)
	{
		prnt[cnt+1]= cur*2;
		dfs(cur*2, cnt+1);
	}
	
	if(cur*3<= N && vst[cur*3]== vst[cur]-1)
	{
		prnt[cnt+1]= cur*3;
		dfs(cur*3, cnt+1);
	}
}

int bfs() {
	
	int fr= N;
	q.push(fr);
	vst[N]= 0;
	
	while(!q.empty())
	{
		fr= q.front();
		if(fr== 1) 
			return vst[fr];
		q.pop();
		
		if(fr%3== 0 && vst[fr/3]== -1) 
		{
			vst[fr/3]= vst[fr]+ 1;
			q.push(fr/3);
		}
		
		if(fr%2== 0 && vst[fr/2]== -1)
		{
			vst[fr/2]= vst[fr]+ 1;
			q.push(fr/2);
		}
		
		if(fr> 0 && vst[fr-1]== -1)
		{
			vst[fr-1]= vst[fr]+ 1;
			q.push(fr-1);
		}
	}
}

void make1_2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for(int i= 0; i< 1000005; i++) 
	{
		vst[i]= -1;
		prnt[i]= 0;
	}
	
	cin >> N;
	
	ans= bfs();
	cout << ans << "\n";
	prnt[0]= 1;
	dfs(1, 0);
}*/
