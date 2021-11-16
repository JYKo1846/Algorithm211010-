// BOJ 2667 2021.11.16
// BFS로 구현해보자  =>  성공, 항상 시작점의 방문여부를 잘 체크하자.
/*
#include <algorithm>
#include <stdio.h>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int estate[30][30];			// 입력값으로 들어오게 되는 아파트들의 좌표값을 저장하기 위한 배열 
bool visit[30][30];
vector<int> num;			// 각 단지 수를 저장하기 위한 배열 
queue<pair<int, int> > q;	// BFS 탐색을 위해, 아파트의 좌표값을 저장하기 위한 큐 

void bfs(int N) {			// BFS이용, estate에서 1이 발견될 경우, 그 좌표를 기준으로 탐색하며 size변수 ++, 큐가 비게 되면 size 저장, 마지막 점까지 탐색을 완료시키는 함수 
	int size= 0;
	int i, j;
	int dx[4]= { -1, 0, 1, 0};
	int dy[4]= { 0, 1, 0, -1}; 
	
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< N; j++) 
		{
			if(estate[i][j]==1 && !visit[i][j])		// 첫 방문한 아파트 일 경우, 해당 아파트를 기준으로 bfs탐색 실시 
			{
				q.push(make_pair(i, j));
				visit[i][j]= 1;
				while(!q.empty())
				{
					int x= q.front().first;
					int y= q.front().second;
					size++;
					q.pop();
					
					for(int k= 0; k< 4; k++)
					{
						int nx= x+dx[k];
						int ny= y+dy[k];
						if(nx< 0 || ny< 0 || nx> N || ny> N) continue;
						if(estate[nx][ny] && !visit[nx][ny])
						{
							q.push(make_pair(nx, ny));
							visit[nx][ny]= 1;
						}
					}
				}
				num.push_back(size);
				size= 0;
			}
			
		}
	}
}

void estateNum() {
	int N;		// 현재 입력값의 크기
	int i;
	 
	for(i= 0;i< 30; i++)		// 아파트 단지 입력 배열, 방문여부 배열 초기화 
	{
		for(int j= 0; j< 30; j++) 
		{
			visit[i][j]= 0;
			estate[i][j]= 0;
		}
	}
	
	scanf("%d", &N);
	for(i= 0; i< N; i++)
		for(int j= 0; j< N; j++) 
			scanf("%1d", &estate[i][j]);
	
	bfs(N);
	sort(num.begin(), num.end());
	printf("%d\n", num.size());
	for(i= 0; i< num.size(); i++) printf("%d\n", num[i]);
}*/
