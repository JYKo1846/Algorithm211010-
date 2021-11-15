/*// BOJ 1260 DFS �� BFS
// dfs, bfs �����Ӱ� ���� => ������ �߻�, ���������� �ݺ� ��µȴ�. 
// ������ �ذ�, ���������� �湮���θ� üũ ���ϰ� �����Ŵ => �����Ϸ�
 
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
	int N, M, V;	// N ���� ����, M ���� ����, V Ž�� ��������
	int i;
	
	
	cin >> N >> M >> V;

	for(i= 0; i< 1005; i++) for(int j= 0; j< 1005; j++) con[i][j]= 0;
	
	for(i= 0; i< M; i++) {
		int x, y;
		cin >> x >> y;
		con[x][y]= 1;
		con[y][x]= 1;
	}
	
	for(i= 0; i< 1005; i++) visit[i]= 0; 	// DFS Ž�� �� �湮 ���� �ʱ�ȭ, �������� ��� �� �Լ��Է� 
	visit[V]= 1;
	cout << V << " ";
	dfs(V, N);
	cout << endl; 
	
	for(i= 0; i< 1005; i++) visit[i]= 0;	// BFS Ž�� �� �湮 ���� �ʱ�ȭ, �Լ��Է� 
	visit[V]= 1;
	bfs(V, N);
	cout << endl;
}*/
