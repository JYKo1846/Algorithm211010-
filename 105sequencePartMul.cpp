// BOJ 2670 sequence partition multiplication max value 2022.02.10
/*
#include <cstdio>

using namespace std;

int N;
double val[10003];
double dp[10003];

void sequencePartMul() {
	int i, j;
	double ans= -1;
	
	scanf("%d", &N);
	for(i= 0; i< N; i++) 
	{
		scanf("%lf", &val[i]);
		dp[i]= val[i];
	}
	
	for(i= 1; i< N; i++)
	{
		dp[i]= dp[i]> dp[i]* dp[i-1] ? dp[i] : dp[i]* dp[i-1];
		ans= ans > dp[i] ? ans : dp[i];
	}
	
	for(i= 0; i< N; i++) printf("%.3lf ", dp[i]);
	printf("\n");
	printf("%.3lf\n", ans);
}*/
