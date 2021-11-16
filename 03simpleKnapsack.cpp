/*// BOJ 12865 Æò¹üÇÑ ¹è³¶ 

#include <stdio.h>
#include <stdlib.h>

int Max(int a, int b) { return a > b ? a : b; }

int dp[105][100005];		// dp[¹°°ÇÀÇ ¹øÈ£][°¡¹æ¿¡ ³ÖÀº ¹°°ÇµéÀÇ ¹«°Ô ÃÑÇÕ] , dp[i][j]= 1~i¹ø ±îÁöÀÇ ¹°°ÇÀ» j¹«°Ô ¸¸Å­ ³Ö¾úÀ» °æ¿ì,  °¡Ä¡ÀÇ ÃÖ´ñ°ª 
int stuff[105][2];			// ¼ø¼­´ë·Î µé¾î¿Â ¹°°Ç¿¡ µû¶ó, stuff[¹°°ÇÀÇ ¹øÈ£]°¡ µÇ°í, stuff[][0]´Â ¹°°ÇÀÇ ¹«°Ô, stuff[][1]´Â ¹°°ÇÀÇ °¡Ä¡°ªÀÌ µé¾î°¡°Ô µÈ´Ù. 

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
		for(j= 0; j<= K; j++) {				// ¿©·¯¹ø ½ÇÆÐÇÑ ¿äÀÎ : j=0 ºÎÅÍ K ¹«°Ô°¡ µÉ¶§ ±îÁö ¸ðµç ºÎºÐÀ» ÆÇ´ÜÇØ¾ß  dp[N][K]¿¡¼­, K°¡€ stuffÀÇ ¸¶Áö¸· ¹°°ÇÀÇ ¹«°Ôº¸´Ù ÀÛÀ»¶§ÀÇ °æ¿ì¸¦ µûÁú ¼ö ÀÖ´Ù. 
											// Âø°¢ÇØ¼­ , j=0 ÀÌ ¾Æ´Ñ, j= stuff[i][0]À¸·Î Çß¾ú°í, ±×°ÍÀ» BOJÁ¦Ãâ ÆäÀÌÁö¿¡¼­ ¼öÁ¤ÇÏÁö ¾Ê¾ÒÀ½. 
			if(j-stuff[i][0] >= 0) dp[i][j]= Max(dp[i][j-1], dp[i-1][j-stuff[i][0]] + stuff[i][1]);
			dp[i][j]= Max(dp[i][j], dp[i-1][j]);
		}
	}
	printf("%d\n", dp[N][K]);
	
}*/
