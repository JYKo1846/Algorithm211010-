// BOJ 12100 "2048" 2021.12.09
// USE QUEUE, never know remained value, tb(temporary board) IN DFS, TEMPORARY ARRAY must be initialized.
// AND, IF TIMES ++ BEFORE CALCULATE, TERMINATION WILL when TIMES == NEED TIMES
/*
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int max(int a, int b) { return a > b ? a : b; } 

int N;										// board's size
int brd[22][22];							// board's contents
int comb[22];								// If, have nothing, comb[i]= 0; combined not yet, comb[i]= 1; blocks are combined, comb[i]= 2; 
//int tb[22][22];							// I was wrong because of this global variable. It's need to put into local variable.
queue<int> q;								// Queue for moving numbers
int ans= 0;									// maximum value 

void mv(int (*b)[22], int tms) {			// b : current board status, tms : current moving times
	int i, j, k;
	int t;
	int tb[22][22];
	
	if(tms== 5) return ;
	
	
	// move ^
	memset(tb, 0, sizeof(tb));
	for(j= 0; j< N; j++) 
	{
		memset(comb, 0, sizeof(comb));
		for(i= 0; i< N; i++)
			if(b[i][j]!= 0) q.push(b[i][j]);
		k= 0;
		while(!q.empty())							// all value move to ^ direct
		{
			t= q.front();
			q.pop();
			
			for(; k< N; k++)
			{
				if(comb[k]== 0)						// if, space has nothing
				{
					tb[k][j]= t;
					comb[k]= 1;
					break;
				}
				else if(comb[k]== 1 & tb[k][j]== t)	// if, space has value & its can combine
				{
					tb[k][j]+= t;
					ans= max(ans, tb[k][j]);
					comb[k]= 2;
					break;
				}
			}
		}
		for(k+=1; k< N; k++) tb[k][j]= 0;
	}
	mv(tb, tms+1);
	
	// move >
	memset(tb, 0, sizeof(tb));
	for(i= 0; i< N; i++)
	{
		memset(comb, 0, sizeof(comb));
		for(j= N-1; j>= 0; j--)
			if(b[i][j]!= 0) q.push(b[i][j]);
		k= N-1;
		while(!q.empty())
		{
			t= q.front();
			q.pop();
			for(; k>= 0; k--)
			{
				if(comb[k]== 0)
				{
					tb[i][k]= t;
					comb[k]= 1;
					break;
				}
				else if(comb[k]== 1 && tb[i][k]== t)
				{
					tb[i][k]+= t;
					comb[k]= 2;
					ans= max(ans, tb[i][k]);
					break;
				}
			}
		}
		for(k-= 1; k>= 0; k--) tb[i][k]= 0;
	}
	mv(tb, tms+1);
	
	// move down
	memset(tb, 0, sizeof(tb));
	for(j= 0; j< N; j++) 
	{
		memset(comb, 0, sizeof(comb));
		for(i= N-1; i>= 0; i--)
			if(b[i][j]!= 0) q.push(b[i][j]);
		k= N-1;
		while(!q.empty())							
		{
			t= q.front();
			q.pop();
			for(; k>= 0; k--)
			{
				if(comb[k]== 0)						
				{
					tb[k][j]= t;
					comb[k]= 1;
					break;
				}
				else if(comb[k]== 1 & tb[k][j]== t)	
				{
					tb[k][j]+= t;
					ans= max(ans, tb[k][j]);
					comb[k]= 2;
					break;
				}
			}
		}
		for(k-=1; k>= 0; k--) tb[k][j]= 0;
	}
	mv(tb, tms+1);
	
	// move <
	memset(tb, 0, sizeof(tb));
	for(i= 0; i< N; i++)
	{
		memset(comb, 0, sizeof(comb));
		for(j= 0; j< N; j++)
			if(b[i][j]!= 0) q.push(b[i][j]);
		k= 0;
		while(!q.empty())
		{
			t= q.front();
			q.pop();
			for(; k< N; k++)
			{
				if(comb[k]== 0)
				{
					tb[i][k]= t;
					comb[k]= 1;
					break;
				}
				else if(comb[k]== 1 && tb[i][k]== t)
				{
					tb[i][k]+= t;
					comb[k]= 2;
					ans= max(ans, tb[i][k]);
					break;
				}
			}
		}
		for(k+= 1; k< N; k++) tb[i][k]= 0;
	}
	mv(tb, tms+1);
}

void twothousand() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, k;
	
	cin >> N;
	
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< N; j++)
		{
			cin >> brd[i][j];
			ans= max(ans, brd[i][j]);
		}
	}
	// first, put all value to queue.
	// second, pop front value & judge is it blank or combine-poss or combine-impo
	
	mv(brd, 0);
	cout << ans << "\n";
}*/
