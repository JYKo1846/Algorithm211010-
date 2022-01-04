// BOJ 17406 turn matrix 2022.01.04
// SIMPE BF. BUT, SPEND A LOT OF TIME FOR IMPLY SPIN MATRIX.
// so many thought were through in my head. need organized thought when complex thinking is ovrwhelmed my head
/*
#include <iostream>
#include <cstring>

using namespace std;

int N, M, K;
int org[53][53];
int spin[7][3];
bool vst[8];
int ans= 5999;

void turn(int n, int (*bef)[53]) {
	int i, j, l, t;
	int cenI= spin[n][0];
	int cenJ= spin[n][1];
	int len= spin[n][2];
	int posI, posJ;
	
	for(l= 1; l<= len; l++)
	{
		// turn left-side
		posJ= cenJ-l;
		for(i= cenI+l -1; i>= cenI-l; i--)
		{
			t= bef[i][posJ];
			if(i== cenI+l -1) bef[i][posJ]= bef[i+1][posJ];
			else bef[i][posJ]= bef[i+1][0];
			bef[i][0]= t;
		}
		
		// turn top-side
		posI= cenI-l;
		for(j= cenJ-l +1; j<= cenJ+l; j++)
		{
			t= bef[posI][j];
			if(j== cenJ-l +1) bef[posI][j]= bef[posI][0];
			else bef[posI][j]= bef[0][j-1];
			bef[0][j]= t;
		}
		
		// turn right-side
		posJ= cenJ+l;
		for(i= cenI-l +1; i<= cenI+l; i++)
		{
			t= bef[i][posJ];
			if(i== cenI-l +1) bef[i][posJ]= bef[0][posJ];
			else bef[i][posJ]= bef[i-1][0];
			bef[i][0]= t;
		}
		
		// turn down-side
		posI= cenI+l;
		for(j= cenJ+l -1; j>= cenJ-l; j--)
		{
			t= bef[posI][j];
			if(j== cenJ+l -1) bef[posI][j]= bef[posI][0];
			else bef[posI][j]= bef[0][j+1];
			bef[0][j]= t;
		}
		
	}
		
}

void dfs(int (*mat)[53]) {
	int i, j;
	int tmat[53][53];
	bool fin= 1;
	
	for(i= 1; i<= K; i++)
		if(!vst[i]) fin= 0;
	
	if(fin)
	{
		
		for(i= 1; i<= N; i++)
		{
			int t= 0;
			for(j= 1; j<= M; j++)
				t+= mat[i][j];
			ans= ans < t? ans: t;
		}
		return ;
	}
	
	for(i= 1; i<= K; i++)
	{
		if(!vst[i]) 
		{
			for(j= 1; j<= N; j++)
				for(int k= 1; k<= M; k++) 
					tmat[j][k]= mat[j][k];
	
			vst[i]= 1;
			turn(i, tmat);
			dfs(tmat);
			vst[i]= 0;
		}
	}
}
		

void turnMatrix() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int tmat[53][53];
	int i, j;
	
	memset(vst, 0, sizeof(vst));
	
	cin >> N >> M >> K;
	for(i= 1; i<= N; i++)
		for(j= 1; j<= M; j++)
			cin >> org[i][j];
			
	for(i= 1; i<= K; i++)
		for(j=0; j< 3; j++)
			cin >> spin[i][j];
	
	
	
	for(i= 1; i<= K; i++)
	{
		for(j= 1; j<= N; j++)
			for(int k= 1; k<= M; k++) 
				tmat[j][k]= org[j][k];
			
		vst[i]= 1;
		turn(i, tmat);
		dfs(tmat);
		vst[i]= 0;
	}
	
	cout << ans << "\n";
}*/
