// BOJ 7562 knight's move 2021.11.30
// solved with BFS
// 1st try failed. 2nd try succeed.
// why? after searching, there is often existed element in queue.
// so, must keep in mind. using same variable when running loop, there must be existed initialization.!!!!

/*
#include <iostream>
#include <string.h>
#include <queue>

struct kpos{
	int x;
	int y;
	int day= 0;
}typedef kpos;

using namespace std;

queue<kpos> q;	// queue for bfs
kpos goal;	// goal
bool visit[302][302];	// visitation availability

void bfs(int L) {
	kpos t;
	int dx[8]= {-2, -2, -1, 1, 2, 2, 1, -1};
	int dy[8]= {-1, 1, 2, 2, 1, -1, -2, -2};
				
	while(!q.empty())
	{
		t= q.front();
		int x= t.x;
		int y= t.y;
		q.pop();
		if(x== goal.x && y== goal.y) break;
		for(int i= 0; i< 8; i++) 
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			if(nx< 0 || ny< 0 || nx>= L || ny>= L) continue;
			if(!visit[nx][ny]) 
			{
				kpos nt;
				nt.x= nx; nt.y= ny; nt.day= t.day+1;
				q.push(nt);
				visit[nx][ny]= 1;
			}
		}
	}
	cout << "ANS : " << t.day << "\n";
}

void knightM() {
	int T;			// Test case number
	int L; 			// board size L * L
	
	cin >> T;
	for(int i= 0; i< T; i++)
	{
		kpos t;
		
		memset(visit, 0, sizeof(visit));
		
		cin >> L;
		cin >> t.x >> t.y;	// start position
		q.push(t);
		visit[t.x][t.y]= 1;
		cin >> goal.x >> goal.y;	// goal position
		bfs(L);
		q= queue<kpos>();
	}
}*/
