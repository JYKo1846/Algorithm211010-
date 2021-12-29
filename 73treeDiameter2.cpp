// BOJ 1167 tree diameter 2 2021.12.29
// USE BFS. WHY EXAMPLE 1 ANSWER IS 11 BEFORE BFS TWICE?
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#define NN	100004

using namespace std;

struct conn{
	int dst;			// destination node
	int ll;				// till now distance
}typedef conn;

int N;
bool vst[NN];
vector<conn> nd[NN];
queue<conn> q;			// queue for BFS
int ans;


conn bfs(int st) {
	int i, j;		// longest distance after all-search
	conn nod, t, nxt;
	
	memset(vst, 0, sizeof(vst));
	nod.dst= st; nod.ll= 0;
	nxt.ll= 0;
	q.push(nod);
	vst[st]= 1;
	
	while(!q.empty())
	{
		nod= q.front();
		q.pop();
		
		if(nxt.ll< nod.ll)
		{
			nxt.ll= nod.ll;
			nxt.dst= nod.dst;
		}
		
		for(i= 0; i< nd[nod.dst].size(); i++)
		{
			t= nd[nod.dst][i];
			
			if(!vst[t.dst])
			{
				vst[t.dst]= 1;
				t.ll+= nod.ll;
				q.push(t);
			}
		}
	}
	
	return nxt;
}
				

void treeDiameter2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, t, stN, dist;
	conn tc;
	ans= 0;
	
	bool set= true;		// set== 1: setting start node not yet. ==0: setting complete	
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		while(1)
		{
			cin >> t;
			if(set) 
			{
				stN= t;
				set= false;
				continue;
			}
			else if(t== -1)
				break;
			else {
				cin >> dist;
				tc.dst= t;	tc.ll= dist;
				nd[stN].push_back(tc);
			}
		}
		set= true;
	}
	
	tc= bfs(1);
	//tc= bfs(tc.dst);
	cout << "ROOT -> LEAF LONGEST : " << tc.ll << "\n";
}
*/
