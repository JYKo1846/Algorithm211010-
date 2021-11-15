/*// BOJ 1260 DFS 와 BFS
// dfs, bfs 순조롭게 구현 => 문제점 발생, 시작지점이 반복 출력된다. 
// 문제점 해결, 시작지점의 방문여부를 체크 안하고 실행시킴 => 수정완료
 
#include <iostream>
#include <queue>

using namespace std;

int con[1005][1005];
bool visit[1005];

void dfs(int st ,int N)
{
	for(int i= 1; i<= N; i++) {
		if(con[st][i] && !visit[i]) {
			visit[i]= 1;
			cout << i << " ";
			dfs(i, N);
		}
	}
}

void bfs(int st, int N)
{
	queue<int> q;
	q.push(st);
	
	while(!q.empty()) {
		cout << q.front() << " ";
		for(int i= 1; i<= N; i++) {
			if(con[q.front()][i] && !visit[i]) {
				visit[i]= 1;
				q.push(i);
			}
		}
		q.pop();
	}
}

void DFSnBFS()
{
	int N, M, V;	// N 정점 갯수, M 간선 갯수, V 탐색 시작지점
	int i;
	
	
	cin >> N >> M >> V;

	for(i= 0; i< 1005; i++) for(int j= 0; j< 1005; j++) con[i][j]= 0;
	
	for(i= 0; i< M; i++) {
		int x, y;
		cin >> x >> y;
		con[x][y]= 1;
		con[y][x]= 1;
	}
	
	for(i= 0; i< 1005; i++) visit[i]= 0; 	// DFS 탐색 전 방문 여부 초기화, 시작지점 출력 및 함수입력 
	visit[V]= 1;
	cout << V << " ";
	dfs(V, N);
	cout << endl; 
	
	for(i= 0; i< 1005; i++) visit[i]= 0;	// BFS 탐색 전 방문 여부 초기화, 함수입력 
	visit[V]= 1;
	bfs(V, N);
	cout << endl;
}*/
