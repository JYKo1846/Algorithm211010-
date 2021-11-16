/*// BOJ 2178 미로 탐색

#include <iostream>
#include <stdio.h>
#include <queue>
#include <utility>
#define MAX 10050

int min(int a, int b) { return a < b ? a : b; }

using namespace std;

bool check[105][105];	// 미로 방문 체크 배열 
int maze[105][105];		// 미로 길과 벽 여부 저장배열 
int search[105][105];	// 거리 저장 배열 
queue<pair<int, int> > q;		// 처음 컴파일할때, 오류가 나옴. => 인트 뒤의 ">>" 가 붙어 있어서 문법오류가 남. 띄어쓰기로 수정완료. 

void bfs(int N, int M)	// 거리를 탐색할 경우, dfs 보다 bfs로 탐색하는게 정확하다. 
{
	int dx[4]= {0, 1, 0, -1};	// 상하좌우로 탐색을 하기 위한 배열 
	int dy[4]= {-1, 0, 1, 0};
	
	int nx, ny;
	
	while(!q.empty()) {			// bfs는 큐를 이용하여 구현된다. 
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
			scanf("%1d", &maze[i][j]);			// 띄어쓰기로 구분되어있지 않은 미로의 구조를 입력하기 위해 1d를 사용함 

	q.push(make_pair(1, 1));
	search[1][1]= 1;
	check[1][1]= 1;
	bfs(N, M);
}*/
