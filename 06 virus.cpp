// BOJ 2606 2021.11.16
// DFS로 해보자 => 첫번째 시도는 실패, 두번째 시도는 성공 
// dfs()내에 종료문으로 if(cur == N) return ; 과 이 조건문을 통과했을 경우에만, check[cur]= 1로 바꿨다. 그래서 틀린듯. 아님
// if(cur== N) return ; 자체가 문제였음. 1-10-5 이런 식으로 연결되어 있는걸 생각하지 못함. 이 구문 제거시 통과됨. 
 /*
#include <iostream>

using namespace std;

bool connect[105][105];
bool check[105]; 

void dfs(int N, int cur) {
	check[cur]= 1;
	for(i= 1; i<= N; i++)
		if(connect[cur][i] && !check[i]) 
			dfs(N, i);
	return ;
}


void virus() {
	int N, M;
	int i;
	
	for(i= 0; i< 105; i++) 
	{
		check[i]= 0;
		for(int j= 0; j< 105; j++)
			connect[i][j]= 0;
	}
	
	cin >> N >> M;
	for(i= 0; i< M; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		connect[t1][t2]= 1;
		connect[t2][t1]= 1;
	}
	
	dfs(N, 1);
	int ans= 0;
	for(i= 2; i<= N; i++) if(check[i]) ans++;
	cout << ans << endl;
}*/
