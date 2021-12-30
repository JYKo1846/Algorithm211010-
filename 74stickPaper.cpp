// BOJ 17136 stick color paper 2021.12.30
//
/*
#include <iostream>
#include <cstring>

using namespace std;

bool pap[12][12];
bool vst[12][12];
int ans= 30;								// minimum paper used

bool isCover(int x, int y, int cS) {		// check coverable function
	int i, j;								// cS: current Paper size
	
	for(i= 0; i< cS; i++)
	{
		for(j= 0; j< cS; j++)
		{
			int nx= x+ i;
			int ny= y+ j;
			
			if(nx>= 10 || ny>= 10) return false;
			if(!pap[nx][ny] || vst[nx][ny]) return false;	
		}
	}
	return true;
}

void dfs(int x, int y, int *pp, int cO) {				// cover color-P to paper.
	int a, b;											// pp: 1x1, 2x2 ... paper use count array
	int tP= 0;											// tP: temporary used paper number
	
	if((x> 9) || (y> 9)) return ;
	
	for(int i= 1; i<= 5; i++)
		tP+= (5- pp[i]);
	if(tP == ans) return ;
						
	if(cO== 0)										// cO: current remained 1 (one) number
	{
		ans= ans< tP ? ans: tP;
		return ;
	}
	
	if(pap[x][y] && !vst[x][y])
	{
		for(int s= 5; s> 0; s--)
		{
			if((pp[s]> 0)&& isCover(x, y, s))
			{
				
				pp[s]--;
				for(a= 0; a< s; a++)
					for(b= 0; b< s; b++) 
						vst[x+a][y+b]= 1;
				cO-= s*s;
				
				dfs(x, y, pp, cO);
				cout << "CURRENT <" << x << ", " << y <<">\n";
				
				pp[s]++;
				for(a= 0; a< s; a++)
					for(b= 0; b< s; b++)
						vst[x+a][y+b]= 0;
				cO+= s*s;
			}
		}
	}
	else
	{
		if(y== 9) dfs(x+1, 0, pp, cO);
		else dfs(x, y+1, pp, cO);
	}
}

void stickPaper() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	int totO= 0;					// total 1 space number
	int pp[6];						// 1x1, 2x2, 3x3... paper's remained number
	
	memset(pap, 0, sizeof(pap));
	memset(vst, 0, sizeof(vst));
	for(i= 1; i<= 5; i++) pp[i]= 5;
	
	for(i= 0; i< 10; i++)
	{	
		for(j= 0; j< 10; j++)
		{
			cin >> pap[i][j];
			if(pap[i][j]) totO++;
		}
	}
	
	dfs(0, 0, pp, totO);
	
	if(ans== 30) ans= -1;
	cout << ans << "\n";
}*/
