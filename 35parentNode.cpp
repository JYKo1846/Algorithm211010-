// BOJ 11725 find tree's parent node 2021.12.06
// If, array's memory is huge, then think of vector use.
// tree[100005][100005] => vector<int> tree[1000005] will reduce memory.
/*
#include <bits/stdc++.h>
#include <vector>
#define MAX 100005

using namespace std;

int prt[MAX];
bool visited[MAX];
vector<int> tree[MAX];

void dfs(int N, int cur) {
	if(tree[cur].empty()) return ;
	for(int i= 0; i< tree[cur].size(); i++)
	{
		int t= tree[cur][i];
		if(!visited[t]) 
		{
			visited[t]= 1;
			prt[t]= cur;
			dfs(N, t);
		}
	}
}

void parentNode() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	int i, j;
	
	cin >> N;
	
	prt[1]= 1;
	visited[1]= 1;
	for(i= 0; i< N-1; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		tree[t1].push_back(t2);
		tree[t2].push_back(t1);
	}
	
	dfs(N, 1);
	for(i= 2; i<= N; i++)
		cout << prt[i] << "\n";
}*/
