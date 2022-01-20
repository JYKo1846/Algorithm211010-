// BOJ 13913 hide and seek 4 2022.01.20
// USE BFS FOR SHORTEST TIME & USE DFS FOR SHORTEST MOVED POSITION
// WRONG ANSWER AT 6%
/*   
#include <iostream>
#include <cstring>
#include <queue>
#include <math.h>
#include <vector>
#define MAXN 150005

using namespace std;

int N, K;
int pos[MAXN];
bool vst[MAXN];
int rcd[MAXN];
int mv[3]= {-1, 1, 2};
bool fin= false;
queue<int> q;

void dfs(int cur, int sz) {
	int i, t;
	
	if(sz> pos[K]) return ;
	
	if(cur== N && sz== pos[K] && !fin)
	{
		for(i= sz; i>= 0; i--)
			cout << rcd[i] << " ";
		fin= true;
		return ;
	}
	
	sz++;
	for(i= 0; i< 3; i++)
	{
		if(i!= 2) t= cur+ mv[i];
		if(i== 2 && cur%2== 0 && cur!= 0) t= cur/2;
		if(0<= t && t<= MAXN && !vst[t] && pos[t]== pos[cur]-1)
		{
			vst[t]= 1;
			rcd[sz]= t;
			dfs(t, sz);
			vst[t]= 0;
		}
	}
}
			
	

void bfs() {
	memset(vst, 0, sizeof(vst));
	
	pos[N]= 0;
	vst[N]= 1;
	q.push(N);
	
	while(!q.empty())
	{
		int fr= q.front();
		int t;
		q.pop();
		
		if(fr== K)
			break;
		
		for(int i= 0; i< 3; i++)
		{
			if(i!= 2) t= fr+ mv[i];
			else t= fr* mv[i];
			if(0<= t && t<= MAXN && !vst[t])
			{
				pos[t]= pos[fr]+ 1;	
				vst[t]= 1;
				q.push(t);
			}
		}
	}
	q= queue<int>();
}

void hideNseek4() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, t;
	vector<int> v;
	memset(pos, 0, sizeof(pos));
	
	cin >> N >> K;
	
	bfs();
	
	t= abs(K-N);
	if(t> pos[K])
	{
		cout << pos[K] << "\n";
		memset(vst, 0, sizeof(vst));
		v.push_back(K);
		rcd[0]= K;
		dfs(K, 0);
	}
	else
	{
		cout << t << "\n";
		if(N< K)
		{
			for(i= N; i<= K; i++)
				cout << i << " ";
		}
		else
		{
			for(i= N; i>= K; i--)
				cout << i << " ";
		}
	}
	
}*/
