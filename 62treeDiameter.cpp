// BOJ 1967 Diameter of Tree 2021.12.23
// USE BFS => 1180ms. => First, find node that most far from root node. Second, find node that most far from last node.
// USE BFS 2nd Try => 4ms. Key is FIND WEIGHT "root -> farest node && last node -> farest node" 
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

struct nd{
	int num;
	int wgt;
}typedef nd;

int N;					// number of nodes
vector<nd> con[10002];	// connection between nodes
bool vst[10002];		// check visitation array
queue<nd> q;			// queue for BFS
int ans= 0;				// maximum diameter

//void dfs(int cW) {		// cW : current weight


int bfs(int st) {	// st: start node, sW : start Weight
	int i, j, dst;
	nd fir, t;

	//for(i= 1; i<= N; i++)
	//{
		for(j= 0; j<= N; j++) vst[j]= 0;
	//	t.num= i;	t.wgt= 0;
		t.num= st; 	t.wgt= 0;
		q.push(t);
		dst= st;
	//	vst[i]= 1;
		vst[st]= 1;
		
		while(!q.empty())
		{
			nd f= q.front();
			q.pop();
			
			int sz= con[f.num].size();
			for(j= 0; j< sz; j++)
			{
				nd nxt= con[f.num][j];
				if(!vst[nxt.num])
				{
					t.num= nxt.num;
					t.wgt= f.wgt+ nxt.wgt;
					q.push(t);
					vst[nxt.num]= 1;
					if(ans< t.wgt)
					{
						ans= t.wgt;
						dst= t.num;
					}
				}
			}
		}
	//}
	return dst;
}
	
void treeDiameter() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	nd tn;
	
	cin >> N;
	
	int tP, tC, t;
	for(i= 0; i< N-1; i++) 
	{
		cin >> tP >> tC >> t;
		tn.wgt= t;
		tn.num= tC;
		con[tP].push_back(tn);
		tn.num= tP;
		con[tC].push_back(tn);
	}
	
	int nxt= bfs(1);
	int longst= bfs(nxt);
	cout << ans << "\n";
}*/
