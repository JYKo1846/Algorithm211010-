// BOJ 1325 effective hacking 2022.01.26
// 1st try clear~~ 
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int N, M;
bool vst[10005];
vector<int> blv[10004];
vector<pair<int, int> > ans;
queue<int> q;

void bfs() {
	int i, j, fr, comN;
	
	for(i= 1; i<= N; i++)
	{
		memset(vst, 0, sizeof(vst));
		q.push(i);
		vst[i]= 1;
		comN= 0;
		
		while(!q.empty())
		{
			fr= q.front();
			q.pop();
			
			for(j= 0; j< blv[fr].size(); j++)
			{
				if(!vst[blv[fr][j]])
				{
					q.push(blv[fr][j]);
					vst[blv[fr][j]]= 1;
				}
			}
		}
		
		for(j= 1; j<= N; j++) if(vst[j]) comN++;
		if(comN >= ans[0].second) 
		{
			if(comN> ans[0].second) ans= vector<pair<int, int> >();
			 ans.push_back({i, comN});
		}
	}
}
			
		

void effectHack() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, a, b;
	
	cin >> N >> M;
	for(i= 0; i< M; i++)
	{
		cin >> a >> b;
		blv[b].push_back(a);
	}
	
	ans.push_back({0, 0});
	bfs();
	sort(ans.begin(), ans.end());
	for(i= 0; i< ans.size(); i++)	cout << ans[i].first << " ";
	cout << "\n";
}*/
