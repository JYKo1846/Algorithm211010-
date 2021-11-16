/*// BOJ 1260 DFS ¿Í€ BFS
// dfs, bfs ¼øÁ¶·Ó°Ô ±¸Çö => ¹®Á¦Á¡ ¹ß»ý, ½ÃÀÛÁöÁ¡ÀÌ ¹Ýº¹Ãâ·ÂµÈ´Ù. 
// ¹®Á¦Á¡ ÇØ°á, ½ÃÀÛÁöÁ¡ÀÇ ¹æ¹® ¿©ºÎ¸¦ Ã¼Å© ¾ÈÇÏ°í ½ÇÇà½ÃÅ´ =>	¼öÁ¤ ¿Ï·á 
 
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
	int N, M, V;	// N ì •ì  ê°¯ìˆ˜, M ê°„ì„  ê°¯ìˆ˜, V íƒìƒ‰ ì‹œìž‘ì§€ì 
	int i;
	
	
	cin >> N >> M >> V;

	for(i= 0; i< 1005; i++) for(int j= 0; j< 1005; j++) con[i][j]= 0;
	
	for(i= 0; i< M; i++) {
		int x, y;
		cin >> x >> y;
		con[x][y]= 1;
		con[y][x]= 1;
	}
	
	for(i= 0; i< 1005; i++) visit[i]= 0; 	// DFS íƒìƒ‰ ì „ ë°©ë¬¸ ì—¬ë¶€ ì´ˆê¸°í™”, ì‹œìž‘ì§€ì  ì¶œë ¥ ë° í•¨ìˆ˜ìž…ë ¥ 
	visit[V]= 1;
	cout << V << " ";
	dfs(V, N);
	cout << endl; 
	
	for(i= 0; i< 1005; i++) visit[i]= 0;	// BFS íƒìƒ‰ ì „ ë°©ë¬¸ ì—¬ë¶€ ì´ˆê¸°í™”, í•¨ìˆ˜ìž…ë ¥ 
	visit[V]= 1;
	bfs(V, N);
	cout << endl;
}*/
