// BOJ 14889 startNlink 2021.12.01
// use DFS
// If, use for(; this area ; ) with extra option, must keep in mind, think twice about exception & calculation omission
/*
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;


int abil[24][24];		// member's ability
int N;

int dfs(int memN, int V, int cur, bool *chk) {	// N : member's number, V : current team's abilty value
	int i, j;									// cur : checked members until now, chk[] : current used members list
	int tV, ans= 10000;
												// tV : value for current team ability calculate.
	
	if(memN== N/2) 						// terminate condition
	{
		int anoV= 0;					// anoV : another team's ability.
		for(i= 1; i<= N; i++)
			if(!chk[i])
				for(j= i+1; j<= N; j++)
					if(!chk[j])
						anoV+= abil[i][j]+ abil[j][i];
		return abs(V- anoV);
	}
	
	for(i= cur+1; i<= N; i++)
	{
		tV= V;
		for(j= 1; j<= N; j++)			// for loop for summation already picked members ability.
			if(chk[j])
				tV+= abil[j][i] + abil[i][j];
		chk[i]= 1;
		tV= dfs(memN-1, tV, i, chk);
		ans= ans< tV ? ans : tV;
		chk[i]= 0;
	}
	return ans;
}
	
void startNlink() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int memN;
	int i, j;
	int curV, tV;
	bool chk[24]; 		// check member's attend availability
	
	cin >> N;
	for(i= 1; i<= N; i++)
		for(j= 1; j<= N; j++)
			cin >> abil[i][j];
	
	memset(chk, 0, sizeof(chk));
	curV= 10000;
	memN= N; 
	for(i= 1; i<= N; i++) 
	{
		chk[i]= 1;
		for(j= i+1; j<= N; j++)
		{
			tV= 0;
			chk[j]= 1;
			tV+= abil[i][j]+ abil[j][i];
			tV= dfs(memN-2, tV, j, chk);
			curV= curV < tV ? curV : tV;
			chk[j]= 0;
		}
		chk[i]= 0;
	}
	cout << curV << "\n";
}*/
