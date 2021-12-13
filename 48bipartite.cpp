// BOJ 1707 bipartite 2021.12.13
// USE BFS. KEEP IN MIND !!!! BI-PARTITE CODE!! 
// AND MUST INITIALIZE QUEUE WHEN QUEUE WILL USE MULTIPLE IN RUNNING PROGRAM
/*
#include <iostream>
#include <queue>
#include <cstring>
#include <vector>

using namespace std;

vector<int> v[20003];			// node<-> node connection check
queue<int> q;					// queue for BFS
int color[20003];				// node's color			color[]== 1 : red, color[]== 2: blue
bool vst[20003];				// visitation check
int N;							// all nodes number

bool bfs() {
	int i, j;
	
	memset(color, 0, sizeof(color));
	memset(vst, 0, sizeof(vst));
	
	// color setting BFS
	for(i= 1; i<= N; i++)
	{
		if(!vst[i])
		{
			vst[i]= 1;
			color[i]= 1;
			if(!v[i].empty())
			{
				q.push(i);
				
				while(!q.empty())
				{
					int fr= q.front();
					q.pop();
					
					for(j= 0; j< v[fr].size(); j++)
					{
						int t= v[fr][j];
						if(vst[t] && (color[t]== color[fr]))
							return 0;
						
						if(!vst[t] && (color[t]== 0))
						{
							if(color[fr]== 1) color[t]= 2;
							else			  color[t]= 1;
							vst[t]= 1;
							q.push(t);
						}
					}
				}
			}
		}
	}
	// find it is Bi-partite
	return 1;
}
			

void bipartite() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int K, E;
	int i, j;
	int t1, t2;
	
	cin >> K;
	for(i= 0; i< K; i++) {
		
		cin >> N >> E;
		for(j= 0; j<= N; j++)
			v[j].clear();
		
		for(j= 0; j< E; j++) 
		{
			cin >> t1 >> t2;
			v[t1].push_back(t2);
			v[t2].push_back(t1);
		}
		
		for(j= 1; j<= N; j++) 
		{
			cout << "v[" << j << "] : ";
			for(int k= 0; k< v[j].size(); k++)
				cout << v[j][k] << " ";
			cout << "\n";
		}
		
		for(j= 1; j<= N; j++)
			cout << "color[" << j << "] : " << color[j] << " ";
		cout << "\n";
		
		if(bfs()) cout << "YES\n";
		else cout << "NO\n";
		
		q= queue<int>();
	}
}*/
