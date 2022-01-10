// BOJ 17281 baseball ball 2022.01.10
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;						// inning number
bool chk[9];				// chk[0]= player 1, his hit number is must 4. so don't care at make permutation
int hitsc[51][10];			// hit score by every player
int ans= -1;

void mksc(int *o) {
	int i, j;
	int inn, outC, tsc;		// tsc: temporary score
	int tn, tH;			// tn: o[i] player, tH: player's inning score
	bool base[5];			// 1: base 1, 2: base 2, 3: base 3
	
	// calculate score loop
	i= tsc= 0;
	for(inn= 0; inn< N; inn++)
	{
		outC= 0;
		memset(base, 0, sizeof(base));
		
		for(; outC< 3; i++)
		{
			if(i== 9) i= 0;
			tn= o[i];
			tH= hitsc[inn][tn];
			
			if(tH== 0) outC++;
			else
			{
				for(j= 3; j> 0; j--)
				{		
					if(base[j])
					{
						if(j+ tH>= 4) tsc++;
						else
							base[j+tH]= 1;
						base[j]= 0;
					}
					if(j== 1)
					{
						if(tH== 4) tsc++;
						else if(!base[tH]) base[tH]= 1;
					}
				}
			}
		}
	}
	ans= ans > tsc ? ans : tsc;
}

void dfs(int cur, int *o) {
	int i;
	
	if(cur== 9) 
	{
		mksc(o);
		return ;
	}
	
	if(cur== 3)
	{
		o[cur]= 0;
		dfs(cur+1, o);
	}
	else 
	{
		for(i= 1; i< 9; i++)
		{
			if(!chk[i])
			{
				chk[i]= 1;
				o[cur]= i;
				dfs(cur+1, o);
				chk[i]= 0;
			}
		}
	}
}

void baseballball() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	int ord[9];
	memset(chk, 0, sizeof(chk));
	
	cin >> N;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< 9; j++)
			cin >> hitsc[i][j];
			
	for(i= 1; i< 9; i++)
	{
		chk[i]= 1;
		ord[0]= i;
		dfs(1, ord); 
		chk[i]= 0;
	}
	
	cout << ans << "\n";
}*/
