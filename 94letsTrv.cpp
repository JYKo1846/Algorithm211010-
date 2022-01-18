// BOJ 1976 let's travel 2022.01.18
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int N, M;
bool conn[202][202];
bool vst[202];
int need[1002];

void bfs() {
	queue<int> q;
	int i, fr;
	
	q.push(need[0]);
	vst[need[0]]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		
		for(i= 1; i<= N; i++)
		{
			if(conn[fr][i] && !vst[i])
			{
				q.push(i);
				vst[i]= 1;
			}
		}
	}
}

void letsTrv() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(conn, 0, sizeof(conn));
	memset(need, 0, sizeof(need));
	memset(vst, 0, sizeof(vst));
	
	cin >> N >> M;
	for(i= 1; i<= N; i++)
		for(j= 1; j<= N; j++)
			cin >> conn[i][j];
			
	for(i= 0; i< M; i++)
		cin >> need[i];
	
	bfs();
	
	for(i= 0; i< M; i++)
	{
		if(!vst[need[i]]) 
		{
			cout << "NO\n";
			return ;
		}
	}
	cout << "YES\n";
}*/
