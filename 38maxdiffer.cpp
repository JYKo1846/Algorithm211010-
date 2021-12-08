// BOJ 10816 maximum difference 2021.12.08
/*
#include <bits/stdc++.h>
#include <cstring>
#include <math.h>

using namespace std;

int arr[10];			// data save array
bool used[10];			// used value check array, 0 : not used, 1: used
int N;					// array's number
int ans= -810;			// answer value.

void dfs(int cur, int curN, int V) {		// cur : current array's number. curN : current used array's number. V: current value . If (curN== N+1) return
	if(curN== N)
	{
		ans= ans> V ? ans : V;
		return ;
	}
	
	for(int i= 1; i<= N; i++)
	{
		if(!used[i])
		{
			used[i]= 1;
			dfs(i, curN+1, V+ abs(arr[cur]- arr[i]));
			used[i]= 0;
		}
	}
}
	

void maxdiffer() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	cin >> N;
	memset(used, 0, sizeof(used));
	arr[0]= 0;
	
	for(i= 1; i<= N; i++) 
		cin >> arr[i];
	for(i= 1; i<= N; i++)
	{
		used[i]= 1;
		dfs(i, 1, 0);
		used[i]= 0;
	}
	cout << ans << "\n";
}*/
