/*// BOJ 12865 ����� �賶 

#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) { return a > b ? a : b; }

int dp[105][100005];		// dp[������ ��ȣ][���濡 ���� ���ǵ��� ���� ����] , dp[i][j]= 1~i�� ������ ������ j���� ��ŭ �־��� ���,  ��ġ�� �ִ� 
int stuff[105][2];			// ������� ���� ���ǿ� ����, stuff[������ ��ȣ]�� �ǰ�, stuff[][0]�� ������ ����, stuff[][1]�� ������ ��ġ���� ���� �ȴ�. 

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
		for(j= 0; j<= K; j++) {				// ������ ������ ���� : j=0 ���� K ���԰� �ɶ� ���� ��� �κ��� �Ǵ��ؾ�  dp[N][K]����, K��� stuff�� ������ ������ ���Ժ��� �������� ��츦 ���� �� �ִ�. 
											// �����ؼ� , j=0 �� �ƴ�, j= stuff[i][0]���� �߾���, �װ��� BOJ���� ���������� �������� �ʾ���. 
			if(j-stuff[i][0] >= 0) dp[i][j]= Max(dp[i][j-1], dp[i-1][j-stuff[i][0]] + stuff[i][1]);
			dp[i][j]= Max(dp[i][j], dp[i-1][j]);
		}
	}
	printf("%d\n", dp[N][K]);
	
}*/
