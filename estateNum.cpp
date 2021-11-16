// BOJ 2667 2021.11.16
// BFS�� �����غ���  =>  ����, �׻� �������� �湮���θ� �� üũ����.
/*
#include <algorithm>
#include <stdio.h>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int estate[30][30];			// �Է°����� ������ �Ǵ� ����Ʈ���� ��ǥ���� �����ϱ� ���� �迭 
bool visit[30][30];
vector<int> num;			// �� ���� ���� �����ϱ� ���� �迭 
queue<pair<int, int> > q;	// BFS Ž���� ����, ����Ʈ�� ��ǥ���� �����ϱ� ���� ť 

void bfs(int N) {			// BFS�̿�, estate���� 1�� �߰ߵ� ���, �� ��ǥ�� �������� Ž���ϸ� size���� ++, ť�� ��� �Ǹ� size ����, ������ ������ Ž���� �Ϸ��Ű�� �Լ� 
	int size= 0;
	int i, j;
	int dx[4]= { -1, 0, 1, 0};
	int dy[4]= { 0, 1, 0, -1}; 
	
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< N; j++) 
		{
			if(estate[i][j]==1 && !visit[i][j])		// ù �湮�� ����Ʈ �� ���, �ش� ����Ʈ�� �������� bfsŽ�� �ǽ� 
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
	int N;		// ���� �Է°��� ũ��
	int i;
	 
	for(i= 0;i< 30; i++)		// ����Ʈ ���� �Է� �迭, �湮���� �迭 �ʱ�ȭ 
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
