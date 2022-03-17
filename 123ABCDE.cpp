// BOJ 13023 ABCDE 2022.03.17
/*
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int N, M;
bool vst[2004];
vector<int> v[2004];
bool isFind;

bool dfs(int cur, int dpt) {
	/if(isFind) return 1;
	if(dpt== 5) 
	{
		isFind= 1;
		return 1;
	}
	
	for(int i= 0; i< v[cur].size(); i++)
	{
		int t= v[cur][i];
		if(!vst[t])
		{
			vst[t]= 1;
			if(dfs(t, dpt+ 1))
				return 1;
			vst[t]= 0;
		}
	}
	
	return 0;
}

void ABCDE() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, t1, t2;
	isFind= false;
	
	memset(vst, 0, sizeof(vst));
	
	cin >> N >> M;
	for(i= 0; i< M; i++)
	{
		cin >> t1 >> t2;
		v[t1].push_back(t2);
		v[t2].push_back(t1);
	}
	
	for(i= 0; i< N; i++)
	{
		vst[i]= 1;
		if(dfs(i, 1))
			break;
		vst[i]= 0;
	}
	cout << isFind << "\n";
}*/
