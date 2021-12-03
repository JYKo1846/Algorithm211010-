//BOJ 1182 Subsequence sum 2021.12.03
// use DFS, search every node
/*
#include <bits/stdc++.h>

using namespace std;

int seq[22];
int N, ans;
int caseN= 0;		// case number that V value == ans

void dfs(int cur, int V) {		// cur : current node's number, V : current subsequence value
	if(V== ans) caseN++;
	if(cur== N) return ;
	for(int i= cur+1; i< N; i++)
		dfs(i, V+seq[i]);
}

void subsequence() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	cin>> N >> ans;
	for(i= 0; i< N; i++) cin >> seq[i];
	for(i= 0; i< N; i++)
		dfs(i, seq[i]);
	cout << caseN << "\n";
}*/
