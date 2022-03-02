// BOJ 5567 wedding 2022.03.02
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>

using namespace std;

queue<int> q;
vector<int> v[502];
bool vst[502];
int dept[502];
int N, M;

int bfs() {
	int i, dpt, fr;
	int ans= 0;
	
	memset(vst, 0, sizeof(vst));
	memset(dept, 0, sizeof(dept));
	
	q.push(1);
	vst[1]= 1;
	dept[1]= 0;
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		if(dept[fr]== 2) break;
		
		for(i= 0; i< v[fr].size(); i++)
		{
			int t= v[fr][i];
			if(!vst[t])
			{
				q.push(t);
				ans++;
				vst[t]= 1;
				dept[t]= dept[fr]+ 1;
			}
		}
	}
	
	return ans;
}

void wedding() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, a, b;
	
	cin>> N >> M;
	for(i= 0; i< M; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	cout << bfs() << endl;
}*/
