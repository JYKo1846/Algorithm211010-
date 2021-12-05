// BOJ 15686 Chicken Delivery 2021.12.04
// use DFS
// IDEA was corrected. But, in dfs(), curD[j] = min(...) => tmpD[j]. In dfs, save status, and use temporary status.
// But I was forgotten. KEEP IN MIND!!!
/*
#include <bits/stdc++.h>
#include <math.h>

struct pos{
	int x;
	int y;
}typedef pos;

using namespace std;

int stN, hseN;			// stN : store number, houseN : house number
int ans;
int N, M;
int dist[105];			// dist[house number] = store ~ "NUMBER" house distance
bool remain[15];		// during DFS, store, will remain
pos hse[105];			// house's coordinate
pos st[15];				// store's coordinate


void dfs(int cur, int curStN, int *curD) {				// cur: current store need calculate. curStN: current remained store number.
	int i, j;											// curD: current store ~ house's minimum distance.
	
	if(curStN == M)
	{
		int t= 0;
		for(i= 0; i< hseN; i++) t+= curD[i];
	 	ans= min(t, ans);
	 	return ;
	 }
	
	int tmpD[hseN+1];
	
	for(i= cur+1; i< stN; i++)
	{
		for(j= 0; j< hseN; j++) tmpD[j]= curD[j];
		for(j= 0; j< hseN; j++)
			tmpD[j]= min(tmpD[j], abs(st[i].x- hse[j].x)+ abs(st[i].y- hse[j].y));
		dfs(i, curStN+1, tmpD);
	}
}

void chickenDeli() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	ans= 10000;
	stN= 0, hseN= 0;	// stN : store number, houseN : house number
	
	cin >> N >> M;
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< N; j++)
		{
			int t;
			if(t== 2) 
			{
				st[stN].x= i;
				st[stN++].y= j;
			}
			
			if(t== 1) 
			{
				hse[hseN].x= i;
				hse[hseN++].y= j;
			}
		}
	}	
	
	for(i= 0; i< stN; i++)
	{
		for(j= 0; j< hseN; j++) dist[j]= 120;
		for(j= 0; j< hseN; j++)
			dist[j]= min(dist[j], abs(st[i].x- hse[j].x) + abs(st[i].y- hse[j].y));
		dfs(i, 1, dist);
	}
	
	cout << ans << "\n";
}*/
