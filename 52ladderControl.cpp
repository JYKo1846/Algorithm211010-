// BOJ 15684 ladder control 2021.12.16
// First, imply ladder operation

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct ver{
	int st;
	int dst;
}typedef ver;

vector<ver> lad[32];		// lad[i] : data of " horizon a ---- < data > ---- horizon b "
bool isLine[12][12];		// isLine[i][j] : i---j line existed, 1. else, 0
int N, M, H;
int ans= 199;				// answer that minimum line number that mv()== true

bool mv() {					// find 1~ N's destination function, If one of line i don't reached destination i. return false.
	int i, j;				// every line reach to i. return true 
	int curL;				// current line position
	int cur;				// current height position
	
	for(i= 1; i<= N; i++)	// i : line number
	{
		curL= i;
		cur= 1;					// starting line position
		for(j= cur; j<= H; j++)
		{
			for(int k= 0; k< lad[j].size(); k++)
			{
				ver ld= lad[j][k];
				if(j== cur &&(ld.st== curL))
				{
					curL= ld.dst;
					break;
				}
			}
			cur++;
		}
		if(curL!= i)
		{
			cout << "CURRENT LINE : " << curL << ", START LINE : " << i << "\n";
			return false;
		}
	}
	return true;
}
		
void dfs(int curH, int m) {		// curH : current height.  m : current line number made
	if(m> 3)
		return ;
	
	if(mv())
	{
		ans= ans < m ? ans : m;
		return ;
	}
	
	ver tv;
	for(int i= curH+1; i<= H; i++)
	{
		for(int j= 2; j<= N-1; j++)
		{
			
			int sz= lad[curH].size()-1;
			
			// create ladder to left of line
			if(!isLine[j][j-1] &&
				(j+1 <= N) &&
				!isLine[j][j+1])
			{
				isLine[j][j-1]= 1;
				tv.st= j;	tv.dst= j-1;
				lad[curH].push_back(tv);
				dfs(curH+1, m+1);
				lad[curH].erase(lad[curH].begin()+ sz+1);
			}
			
			// create ladder to right of line
			if(!isLine[j][j+1] &&
				!isLine[j][j-1] &&
				((j==N-1) || (!isLine[j+1][j+2])) )
			{
				isLine[j][j+1]= 1;
				tv.st= j; tv.dst= j+1;
				lad[curH].push_back(tv);
				dfs(curH+1, m+1);
				lad[curH].erase(lad[curH].begin()+ sz+1);
			}
		}
	}
} 

void ladderControl() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	ver tl;
	
	memset(lad, 0, sizeof(lad));
	memset(isLine, 0, sizeof(isLine));
	
	cin >> N >> M >> H;
	int tlv, ts;
	for(i= 0; i< M; i++)
	{	 
		cin >> tlv >> ts;
		
		// st-----st+1 connect
		tl.st= ts; tl.dst= ts+1;
		isLine[ts][ts+1]= 1;
		lad[tlv].push_back(tl);
		
		// st+1-----st connect
		tl.st= ts+1; tl.dst= ts;
		isLine[ts+1][ts]= 1;
		lad[tlv].push_back(tl);
	}

	dfs(0, 0);
	if(ans== 199) ans= -1;
	cout << ans << "\n";
}
