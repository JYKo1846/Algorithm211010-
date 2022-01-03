// BOJ 9466 term project 2022.01.03
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;
int nd[100005];
int ord[100005];
bool vst[100005];
int ans;

void dfs(int cur, int prev) {
	if(ord[cur]!= 0) 
	{
		if(vst[cur])
			ans-= (ord[prev]- ord[cur]+ 1);
		return ;
	}
	
	vst[cur]= 1;
	ord[cur]= ord[prev]+ 1;
	
	dfs(nd[cur], cur);
	vst[cur]= 0;
}

void termProject() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, T;
	
	cin >> T;
	while(T--)
	{
		memset(ord, 0, sizeof(ord));
		
		cin >> N; 
		for(i= 1; i<= N; i++) cin >> nd[i];
		ans= N;
		
		for(i= 1; i<= N; i++)
			if(ord[i]== 0)
				dfs(i, 0);
		
		for(i= 1; i<= N; i++) cout << ord[i] << " ";
		cout << "\n";
		
		cout << ans << "\n";
	}
}*/
