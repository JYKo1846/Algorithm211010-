// BOJ 13549 hide & seek 3 2021.12.25
// SIMPLE BRUTE FORCE DFS. CURRENT PROBLEM : N: 1, K: 99999 => spend a lot of time
// CHANGE TO BFS. CURRENT PROBLEM: N=1, K= 9999 => spend 6second
// IN BOJ => MEMORY OVERFLOW
/*
#include <iostream>
#include <cstring>
#include <math.h>
#include <queue>
#define MAXL 200005

using namespace std;

int p[MAXL];				// p[i]: spending time to reach 'i'
bool vst[MAXL];				// visitation check array
int N, K;					// N: start position. K: destination
queue<int> q;				// queue for BFS

int min(int a, int b) { return a < b ? a : b; }
*/
/*
void dfs(int cur, int s) {	// cur: current subin's position
							// s: spend time
	if(p[K] < s ) return ;
	if(cur< 0 || cur>= MAXL || cur>= 2*K) return ;
	p[cur]= p[cur] < s ? p[cur] : s;
	if(cur== K) return ;
	
	if(cur!= 0) dfs(cur*2, s);
	dfs(cur-1, s+1);
	dfs(cur+1, s+1);
}
*/
/*
void bfs() {
	int i;
	
	q.push(N);
	
	while(!q.empty())
	{
		int fr= q.front();
		q.pop();
		
		if(fr> 2*K) continue;
		if(fr== K) {
			p[K]= min(p[K], p[fr]);
			break;
		}
		if(p[fr]>= p[K]) continue;
		
		// move -1
		if(fr> 0 && !vst[fr-1])
		{
			vst[fr-1]= 1;
			p[fr-1]= p[fr]+ 1;
			q.push(fr-1);
		}
		
		// teleport
		if((fr!= 0) && (fr*2<= MAXL) && !vst[fr*2])
		{
			vst[fr*2] =1;
			p[fr*2]=  p[fr];
			q.push(fr*2);
		}
		
		// move +1
		if(fr+1 <= MAXL && !vst[fr+1])
		{
			vst[fr+1]= 1;
			p[fr+1]= p[fr]+ 1;
			q.push(fr+1);
		}
	}
}
	
void hideNseek3() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	for(int i= 0; i< MAXL; i++) p[i]= MAXL;		// initialization
	memset(vst, 0, sizeof(vst));
	
	cin >> N >> K;
	
	vst[N]= 1;
	p[N]= 0;	p[K]= abs(N-K);
	//dfs(N, 0);
	bfs();
	
	cout << p[K] << "\n";
}
*/
