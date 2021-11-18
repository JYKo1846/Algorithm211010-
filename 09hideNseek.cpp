// BOJ 1697 2021.11.18
// Implemented with BFS
// => OUT OF MEMORY, maybe over time limitation
// Use Factorization => coercion. WRONG ANSWER
// BFS was corrected. But, availability of visit wasn't checked.
// And, for solve this problem, value t in bfs() can be available over a K.
// if(visit[t] .... t> K) wasn't corrected.
// this sourcecode received correct sign.
// Must remember, If use BFS, there must check visit availability.
//

/*
#include <iostream>
#include <queue>

using namespace std;

int pos[200005];	// subin's position array. value is spending time for chasing
bool visit[200005];	// array for check visit
queue<int> q;		// queue for BFS

void bfs(int K) {
	int i;
	int mv[3]= { -1, 1, 2};
	int t;
	
	while(!q.empty()) 
	{
		int cur= q.front();
		q.pop();
		
		for(i= 0; i< 3; i++) 
		{
			t= cur;
			if(i== 2) t*= mv[i];
			else t+= mv[i];
			if(visit[t] || t< 0 || t> 200000) continue;
			q.push(t);
			pos[t]= pos[cur]+ 1;
			visit[t]= 1;
			if(t== K) 
			{
				q= queue<int>();
				break;
			}
		}
	}
}
void hideNseek() {
	int N, K;						// N : subin's position, K : brother's position
	int tk;							// temporary value for factorization calculation
	int i;
	
	for(i= 0; i< 200005; i++)  	// initialization
	{
		pos[i]= 0;
		visit[i]= 0;
	}
	
	cin >> N >> K;
	q.push(N);
	visit[N]= 1;
	bfs(K);
	cout << pos[K] << endl;	
} */  
