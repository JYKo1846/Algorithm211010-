// BOJ 10971 Traveling Salesman Problem 2021.12.11
/*
#include <iostream>
#include <cstring>

using namespace std;

int w[12][12];				// w[i][j]= i->j move value.
int N;
int dst;					// dst : destination city
int ans= 100000005;			

void dfs(int cur, int V, bool *vst) {
	bool tv[12];
	int cityN= 0;
	int i;
	
	for(i= 0; i< N; i++)
		if(vst[i]) cityN++;
		
	if(cityN== N)
	{
		if(w[cur][dst]!= 0)	ans= ans < V+w[cur][dst] ? ans : V+w[cur][dst];
		return ;
	}
	
	for(i= 0; i< N; i++)
	{
		for(int j= 0; j< N; j++) tv[j]= vst[j];
		if(!tv[i] && (w[cur][i]!= 0))
		{
			tv[i]= 1;
			dfs(i, V+w[cur][i], tv); 
			tv[i]= 0;
		}
	}
	return ;
}

void tsp2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	bool vst[12];			// vst : vst[]== 0 : not visited, vst[]== 1 : already visited
	int i, j;
	
	memset(vst, 0, sizeof(vst));
	
	cin >> N;
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			cin >> w[i][j];
	
	for(i= 0; i< N; i++)
	{
		vst[i]= 1;	dst= i;
		dfs(i, 0, vst);
		vst[i]= 0;
	}
	cout << ans << "\n";
}*/
