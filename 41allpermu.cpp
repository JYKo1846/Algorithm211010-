// BOJ 10974 All Permutation 2021.12.09
// use DFS, VECTOR.  ERASE VECTOR END VALUE : v.erase(v.begin()+[ wanted order ]);
/*
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int N;
bool used[10];			// used[i]== 0 : not used, used[i]== 1 : used already

void dfs(int cur, vector<int> v) {		// cur : current used number
	if(cur== N) 
	{
		for(int i= 0; i< N; i++) cout << v[i] << " ";
		cout << "\n";
		return ;
	}
	
	for(int i= 1; i<= N; i++)
	{
		if(!used[i])
		{
			used[i]= 1;
			v.push_back(i);
			dfs(cur+1, v);
			v.erase(v.begin()+cur);
			used[i]= 0;
		}
	}
}
		
void allpermu() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	vector<int> v;
	
	cin >> N; 
	memset(used, 0, sizeof(used));
	
	dfs(0, v);
}*/
