// BOJ 15684 ladder control 2021.12.18
// IMPLY DFS -> TIME OUT.
// IMPLY DFS && save height of before ladder, so save time
// SPEND LONG TIME FOR SOLVE PROBLEM, JUST TAKE A BREAK & SOLVE ANOTHER PROB FIRST
// CODE WAS EASY. JUST TIME LIMIT WAS SO TIGHT PROBLEM
/*
#include <iostream>
#include <cstring>

using namespace std;

bool ld[33][13];			// ladder[i][j] : j----j+1 is existed at 'i' level
int N, M, H;				// N : line number. M : ladder's number. H : maximum ladders number
int ans= 199;				// answer

bool chk() {				// check all line reached their line function
	int cur, i, h;			// cur : current line
	
	for(i= 1; i<= N; i++) 
	{
		cur= i;
		for(h= 1; h<= H; h++)
		{
			if(ld[h][cur-1]) cur-= 1;
			else if(ld[h][cur]) cur+= 1;
		}
		if(cur!= i) return false;
	}
	return true;
}

void dfs(int bfH,  int mv) {				// make wall & check function. ld : ladder check array. mv : current moving value
	if((mv> 3) || (mv >= ans))						// bfH : ladder made Height, next dfs will make ld[ curH+1 ladder ][]
		return ;									// bfL : ladder made line, next dfs will ld[][bfL~]
	
	if(chk())
	{
		ans= ans < mv ? ans : mv;
		return ;
	}
	
	int i, j;
	for(i= 1; i<= H; i++) 
	{
		for(j= 1; j< N; j++) 
		{
			if((i<= bfH) && (j<= bfL+1)) continue;
			if(!ld[i][j] && !ld[i][j-1] && !ld[i][j+1])
			{
				ld[i][j]= 1;
				dfs(i, mv+1);
				ld[i][j]= 0;
			}
		}
	}
}

void ladderControl() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	memset(ld, 0, sizeof(ld));
	
	cin >> N >> M >> H;
	
	int tlv, tl;
	for(int i=0; i< M; i++)
	{
		cin >> tlv >> tl;
		ld[tlv][tl]= 1;
	}
	
	dfs(1, 0);
	if(ans== 199) ans= -1;
	cout << ans << "\n";
}*/
