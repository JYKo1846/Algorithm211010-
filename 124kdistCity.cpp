// BOJ 18352 Find K distance city 2022.03.17
// BFS . 1st try, line 35 condition was wrong condition. "fr.n -> fr.dst" -> SUCCESS.
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct city{
	int n;
	int dst;
}typedef city;

int N, M, K, X;
bool vst[300005];
queue<city> q;
vector<int> v[300005];
vector<int> ans;

void bfs() {
	int i, j;
	city fr;
	
	fr.n= X;
	fr.dst= 0;
	vst[X]= 1;
	q.push(fr);
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		if(fr.dst== K)
		{
			ans.push_back(fr.n);
			continue;
		}
		
		int t= fr.n;
		fr.dst+= 1;
		for(i= 0; i< v[t].size(); i++)
		{
			if(!vst[v[t][i]])
			{
				vst[v[t][i]]= 1;
				fr.n= v[t][i];
				q.push(fr);
			}
		}
	}
}

void KdistCity() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	int t1, t2;
	
	cin >> N >> M >> K >> X;
	for(i= 0; i< M; i++)
	{
		cin >> t1 >> t2;
		v[t1].push_back(t2);
	}
	
	bfs();
	
	sort(ans.begin(), ans.end());
	if(ans.size()== 0) cout << "-1\n";
	else
	{	
		for(i= 0; i< ans.size(); i++)
			cout << ans[i] << "\n";
	}
}*/
