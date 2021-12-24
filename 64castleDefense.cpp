// BOJ 17135 castle defense 2021.12.24 
// USE BFS + BF. BEWARE when imply Permutation
// Repeat at next day. 
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct pos{
	int x;
	int y;
	int d;					// distance
}typedef pos;

int bd[18][18];				// board's layout. 0: space, 1: enemy
bool enP[18][18];			// if, enemy down 0. live 1
bool vst[18][18];			// check visitation for BFS
bool arch[18];				// arch[]== 0 : archer not placed. 1: placed
queue<pos> q;				// queue for BFS
int dx[3]= {0, -1, 0};		// search direction array
int dy[3]= {-1, 0, 1};
int N, M;					// board's row N, columns M
int D;						// archer's attack range
int ans= 0;					// maximum number of killed enemies

void calc() {				// calculate number of killed enemies
	int i, j;
	pos t;
	int turn= 1;
	
	bool tenP[18][18];		// temporary enemy alive check array
	pos ob[3];				// archer's current object at this turn
	int stL= N-1;			// archer's current row. each turn, row will arise 1
	int tA= 0;				// temporary answer
	int aN;					// current aiming archer's number 
	
	memset(tenP, 0, sizeof(tenP));
	for(i= 0; i< N; i++) for(j= 0; j< M; j++) tenP[i][j]= enP[i][j];
	
	for(stL= N-1; stL>= 0; stL--)
	{ 
		cout << "*************************\n";
		for(i= 0; i< N; i++) 
		{
			for(j= 0; j< M; j++)
				cout << tenP[i][j] << " ";
			cout << "\n";
		}
		cout << "*************************\n";
		
		cout << "======CURRENT LINE : " << stL << ", CURRENT TURN : " << turn << "======\n";
		for(j= 0; j< 3; j++)
		{
			ob[j].x= 17; ob[j].y= 17;
		}
		
		aN= -1;
		for(i= 0; i< M; i++) 
		{
			if(arch[i])
			{
				aN++;
				q= queue<pos>();
				memset(vst, 0, sizeof(vst));
				
				
				t.x= stL; t.y= i; t.d= 1;
				cout << "CURRENT X : " << t.x << ", Y : " << t.y << "\n";
				vst[t.x][t.y]= 1;
				q.push(t);
			
				while(!q.empty())				// BFS start
				{
					pos fr= q.front();
					int x= fr.x;
					int y= fr.y;
					int dist= fr.d;
					
					if(dist> D) break;
					if(bd[x][y] && tenP[x][y] && dist<= D)	// if, find enemy.
					{
						ob[aN].x= x;	ob[aN].y= y;
						q= queue<pos>();
						break;
					}
						
					q.pop();
				
					for(j= 0; j< 3; j++)
					{
						int nx= x+ dx[j];
						int ny= y+ dy[j];
					
						if(nx< 0 || ny< 0 || ny>= M) continue;
						if(!vst[nx][ny])
						{
							t.x= nx; t.y= ny; t.d= dist+ 1;
							q.push(t);
							vst[nx][ny]= 1;
						}
					}
				}
			}
		}
		
		// 3 archers target determined
		for(i= 0; i< 3; i++)
		{
			pos tar= ob[i];						// current archer's target
			if(tenP[tar.x][tar.y])
			{
				cout << "ARCHER " << i << "'S CURRENT TARGET'S POSITION : " << tar.x << ", " << tar.y << "\n";
				tenP[tar.x][tar.y]= 0;
				tA++;
			}
		}
		cout << "CURRENT DIED ENEMIES : " << tA << "\n";
		turn ++;
	}
	ans= ans > tA ? ans : tA;
}


void place(int cN, int cP) {			// place archers function. cP : current placed position
	int i;								// cN : current placed archer's number

	if(cN== 3)
	{
		calc();
		return ;
	}
	
	for(i= cP; i< M; i++)
	{
		if(!arch[i])
		{
			arch[i]= 1;
			place(cN+1, i+1);
			arch[i]= 0;
		}
	}
}

void castleDefense() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(arch, 0, sizeof(arch));
	
	cin >> N >> M >> D;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			cin >> bd[i][j];
			if(bd[i][j]) 
				enP[i][j]= 1;
		}
	}
	
	place(0, 0);
	
	cout << ans << "\n";
}*/
