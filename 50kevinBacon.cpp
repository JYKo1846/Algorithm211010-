// BOJ 1389 kevin bacon's law of 6 level
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>

using namespace std;

struct p{					// p, n: person's number. lvl : st-> person KB-level
	int n;
	int lvl;
}typedef p;

queue<p> q;					// queue for BFS
vector<int> conn[102];		// connection array
int tot[102];				// tot[i] : person i's total KBN. Kevin Bacon Number
bool vst[102];				// i-> j visitation check array
int N;						// people number


void bfs(int st) {			// st : start person, lvl[st][ ] fill function
	int i, j;
	int res= 0;
	memset(vst, 0, sizeof(vst));
	
	p fir;
	fir.n = st;	fir.lvl= 0;
	q.push(fir);
	vst[st]= 1;
	
	while(!q.empty())
	{
		p fr= q.front();
		int x= fr.n;
		q.pop();
		
		for(i= 0; i< conn[x].size(); i++)
		{
			int t= conn[x][i];
			if(!vst[t])
			{
				p nt;
				nt.n= t;	nt.lvl= fr.lvl+1;
				res+= nt.lvl;
				vst[t]= 1;
				q.push(nt);
			}
		}
	}
	
	tot[st]= res;
}
	
void kevinBacon() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	int M;
	
	cin >> N >> M;
	
	int t1, t2;
	
	for(i= 0; i< M; i++)
	{
		cin >> t1 >> t2;
		conn[t1].push_back(t2);
		conn[t2].push_back(t1);
	}
	
	for(i= 1; i<= N; i++)
		bfs(i);
	
	int ans= 105, minV= 10000;
	
	for(i= 1; i<= N; i++)
	{
		if(tot[i] < minV)
		{
			ans= i;
			minV= tot[i];
		}
	}
	cout << ans << "\n";
}*/
