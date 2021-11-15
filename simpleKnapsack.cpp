/*// BOJ 12865 평범한 배낭 

#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) { return a > b ? a : b; }

int dp[105][100005];		// dp[물건의 번호][ 가방에 넣은 물건들의 무게 총합] , dp[i][j]= 1~i번쨰 까지의 물건을 j무게 만큼 넣었을때 가치의 최대값. 
int stuff[105][2];			// 순서대로 들어온 물건에 따라, stuff[물건의 번호]가 되고, stuff[][0]은 물건의 무게, stuff[][1]은 물건의 가치값이 들어가게 된다. 

void simpleKnapsack()
{
	int N, K;
	int i, j;
	
	for(i= 0; i< 105; i++) {
		stuff[i][0]= 0;
		stuff[i][1]= 0; 
		for(j= 0; j< 100005; j++) dp[i][j]= 0;
	}
	
	scanf("%d %d", &N, &K);
	for(i= 1; i<= N; i++) 
		scanf("%d %d", &stuff[i][0], &stuff[i][1]);
	
	for(i= 1; i<= N; i++){
		for(j= 0; j<= K; j++) {				// 여러번 실패한 요인 : j=0 부터 K 무게가 될때까지 모든 부분을 판단해야 dp[N][K]에서, K가 stuff의 마지막 물건의 무게보다 작을때의 경우를 따질 수 있다.
											// 착각해서, j=0 이 아닌, j= stuff[i][0]으로 했었고, 그것을 BOJ제출페이지에서 수정하지 않았음! 
			if(j-stuff[i][0] >= 0) dp[i][j]= Max(dp[i][j-1], dp[i-1][j-stuff[i][0]] + stuff[i][1]);
			dp[i][j]= Max(dp[i][j], dp[i-1][j]);
		}
	}
	printf("%d\n", dp[N][K]);
	
}*/
