// BOJ 9663 2021.11.26 N-queen 2nd try.
// Bruteforce. 1st code was too rough.
// save queen's col position, row position, pos-diagonal pos, neg-diagonal pos.
// all queens has different position of col, row, diag.
// diagonal = |col1 - col2| != |row1- row2| . If, condition is true, then queens are got same line
// Use DFS & Backtracking.
/*
#include <iostream>
#include <math.h>

int qpos[16];						// qpos[ queen's row ] = queen's column


using namespace std;

bool chk(int row) {					// check function. row will never same, compare column & diagonal and find the same line.
	for(int i= 0; i< row; i++)	
		if((qpos[row] == qpos[i]) || abs(row-i) == abs(qpos[row]- qpos[i])) return false;
	return true;
}

void dfs(int row, int &ans, int N) {
	if(row== N) 
	{
		ans++;
		return ;
	}
	for(int i= 0; i< N; i++) 
	{
		qpos[row]= i;
		if(chk(row)) dfs(row+1, ans, N);		// backtrack point. If, qpos[row] is false value, don't run dfs().
	}
}

void queen() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int N, ans= 0;
	cin >> N;
	dfs(0, ans, N);
	cout << ans << "\n";		
}*/
