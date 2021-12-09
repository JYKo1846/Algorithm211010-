// BOJ 2644 villager calculation 2021.12.09
// 1st try succeed. But, I'm curious. How imply bfs node moving count with not use structure.
// In repeat time, think about this.

/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct cnt{
	int c;
	int n;
}typedef cnt;

bool vill[102][102];		// villager connection check array; vill[i][j]== 0 : not connected, == 1 : connected
bool vst[102];				// checking visitation;		vst[]== 0 : not visited, == 1 : visited
queue<cnt> q;				// queue for bfs
int N;

void bfs(int st, int dst) {
	int i, j;
	int num= 0;
	bool find= 0;
	cnt f1;
	
	f1.c= st; f1.n= 0;
	q.push(f1);
	vst[st]= 1;
	
	while(!q.empty())
	{
		cnt t= q.front();
		q.pop();
		if(t.c== dst) 
		{
			find= 1;
			cout << t.n << "\n";
			break;
		}
		for(i=1; i<= N; i++)
		{
			if(!vst[i] && vill[t.c][i])
			{
				cnt ch; ch.c= i; ch.n= t.n+1;
				q.push(ch);
				vst[i]= 1;
			}
		}
	}
	if(!find) cout << -1 << "\n";
}
void villager() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int st, dst;			// find st<-> dst villager connection number
	int rel;				// number of family 
	int t1, t2;				// temporary input variable
	
	
	memset(vill, 0, sizeof(vill));
	memset(vst, 0, sizeof(vst));
	cin >> N >> st >> dst >> rel;
	for(int i= 0; i< rel; i++)
	{
		cin >> t1 >> t2;
		vill[t1][t2]= 1;
		vill[t2][t1]= 1;
	}
	
	bfs(st, dst);
}*/
