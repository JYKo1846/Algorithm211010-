// BOJ 11403 find route 2022.01.04
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int con[103][103];
bool vst[103];
int res[103][103];
int N;
queue<int> q;

void bfs() {
	int i, j;
	
	for(i= 0; i< N; i++)
	{
		memset(vst, 0, sizeof(vst));
		q.push(i);
		
		while(!q.empty())
		{
			int fr= q.front();
			q.pop();
			
			for(j= 0; j< N; j++)
			{
				if(con[fr][j] && !vst[j])
				{
					vst[j]= 1;
					q.push(j);
				}
			}
		}
		for(j= 0; j< N; j++) res[i][j]= vst[j];
	}
}

void findRoute() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			cin >> con[i][j];
	bfs();
	
	cout << "\n";
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
			cout << res[i][j] << " ";
		cout << "\n";
	}
}
*/
