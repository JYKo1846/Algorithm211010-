// BOJ 2961 doyeong's delicious food 2022.02.18
/*
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int N;
int mtl[12][2];
bool used[12];
int ans= 1e10;

void calc() {
	int sN= 1, bN= 0;
	for(int i= 0; i< N; i++)
	{
		if(used[i])
		{
			sN*= mtl[i][0];
			bN+= mtl[i][1];
		}
	}
	int t= abs(sN- bN);
	ans= ans < t ? ans : t;
}

void dfs(int cur) {
	if(cur== N) return ;
	
	int i, j;
	calc();
	
	for(i= cur+1; i< N; i++)
	{
		if(!used[i])
		{
			used[i]= 1;
			dfs(i);
			used[i]= 0;
		}
	}
}
	

void delicious() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N;
	for(i= 0; i< N; i++)
		cin >> mtl[i][0] >> mtl[i][1];
		
	memset(used, 0 ,sizeof(used));
	for(i= 0; i< N; i++)
	{
		used[i]= 1;
		dfs(i);
		used[i]= 0;
	}
	
	cout << ans << endl;
}*/
