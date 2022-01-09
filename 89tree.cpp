// BOJ 1068 tree 2022.01.09
// IMPLY DFS
/*
#include <iostream>
#include <cstring>

using namespace std;

int nd[53];
bool vst[53];
int brk;
int N;
int ans= 0;

void dfs(int cur) {
	int i;
	bool isL= true;
	
	for(i= 0; i< N; i++)
	{
		if(nd[i]== cur && i!= brk)
		{
			isL= false;
			vst[i]= 1;
			dfs(i);
			vst[i]= 0;
		}
	}

	if(isL) ans++;
}

void tree() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	memset(vst, 0, sizeof(vst));
	
	cin >> N;
	for(i= 0; i< N; i++) cin >> nd[i];
	cin >> brk;
	
	for(i= 0; i< N; i++)
	{
		if(nd[i]== -1 && i!= brk)
		{
			vst[i]= 1;
			dfs(i);
			vst[i]= 0;
		}
	}
	
	cout << ans << "\n";
}*/
