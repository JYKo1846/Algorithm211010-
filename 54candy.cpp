// BOJ 3085 candy game 2021.12.20
// DO NEED TO BFS. JUST FOR LOOP
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

int bd[52][52];			// C: 0, P : 1, Z : 2, Y : 3
int ans= -1;			// 
int N;					// board size


// Should I use BFS?
void bfs() {
	int i, j;
	int eatN, cuC;
	
	// search -> 
	for(i= 0; i< N; i++)
	{
		cuC= -1;				// current color candy
		
		for(j= 0; j< N; j++)
		{
			if(cuC!= bd[i][j])
			{
				eatN= 1;
				cuC= bd[i][j];
			}
			else
				eatN++;
			ans= ans > eatN ? ans : eatN;
		}
		
	}
	
	// search down
	for(i= 0; i< N; i++)
	{
		
		cuC= -1;				// current color candy
		
		for(j= 0; j< N; j++)
		{
			if(cuC!= bd[j][i])
			{
				eatN= 1;
				cuC= bd[j][i];
			}
			else
				eatN++;
			ans= ans > eatN ? ans : eatN;
		}
	}	
}

void search() {			// search ->, down
	int i, j, t;
	
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			
			// search ->
			if(j+1< N)
			{
				t= bd[i][j];
				bd[i][j]= bd[i][j+1];
				bd[i][j+1]= t;
				bfs();
				bd[i][j+1]= bd[i][j];
				bd[i][j]= t;
			}
			
			// search down
			if(i+1 < N)
			{
				t= bd[i][j];
				bd[i][j]= bd[i+1][j];
				bd[i+1][j]= t;
				bfs();
				bd[i+1][j]= bd[i][j];
				bd[i][j]= t;
			}
		}
	}
}

void candy() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			char c;
			cin >> c;
			if(c== 'C') bd[i][j]= 0;
			if(c== 'P') bd[i][j]= 1;
			if(c== 'Z') bd[i][j]= 2;
			if(c== 'Y') bd[i][j]= 3;
		}
	}
	
	search();
	
	cout << ans << "\n";
}*/
