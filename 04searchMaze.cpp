/*// BOJ 2178 �̷� Ž�� 

#include <iostream>
#include <stdio.h>
#include <queue>
#include <utility>
#define MAX 10050

int min(int a, int b) { return a < b ? a : b; }

using namespace std;

bool check[105][105];	// �̷� �湮 üũ �迭 
int maze[105][105];		// �̷� ��� �� ���� ���� �迭 
int search[105][105];	// �Ÿ� ���� �迭 
queue<pair<int, int> > q;		// ó�� ������ �Ҷ�, ������ ���� => int ����  ">>"�� �������� �߻�. ����� ���� �Ϸ� 

void bfs(int N, int M)	// �Ÿ��� Ž���� ���, dfs���� bfs�� Ž���ϴ°� ��Ȯ�ϴ�. 
{
	int dx[4]= {0, 1, 0, -1};	// �����¿�� Ž���ϱ� ���� �迭 
	int dy[4]= {-1, 0, 1, 0};
	
	int nx, ny;
	
	while(!q.empty()) {			// bfs�� ť�� ���� �����ȴ�. 
		int x= q.front().first;
		int y= q.front().second;
		q.pop();
		for(int i= 0; i< 4; i++) {
		 	nx= x+ dx[i];
		 	ny= y+ dy[i];
		 	
		 	if(nx== 0 || ny== 0) continue;
		 	if(!check[nx][ny] && maze[nx][ny]== 1) {
			 	check[nx][ny]= 1;
				search[nx][ny]= min(search[nx][ny], search[x][y]+ 1);
				q.push(make_pair(nx, ny));
			}
		}
	}
	
	cout << search[N][M] << endl;
}

void searchMaze()
{
	int N, M; 
	int i, j;
	for(i= 0; i< 105; i++){
		for(j= 0; j< 105; j++){
			check[i][j]= 0; 
			maze[i][j]= 0;
			search[i][j]= MAX;
		}
	}
	
	cin >> N >> M;
	for(i= 1; i<= N; i++) for(j= 1; j<= M; j++)
			scanf("%1d", &maze[i][j]);			// ����� ���еǾ����� ���� �̷��� ������ �Է��ϱ� ���� 1d ��� 

	q.push(make_pair(1, 1));
	search[1][1]= 1;
	check[1][1]= 1;
	bfs(N, M);
}*/
