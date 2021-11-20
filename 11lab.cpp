// BOJ 14502 laboratory 2021.11.20 BF algorithm
// Use Brute-Force search & BFS.
// next time, solve 1 bruteforce, 1 graph problem
// First solve, when 2nd search begins, there is no value in Queue. so, BFS doesn't work. => copy the queue.
// => First, sace virus position to vector st_virus. Then, before BFS(), copy to q.
// value of nx, ny's position is over the N, M. So, '>' -> '>='. Then, answer is correct.
// I feel with skin that I need to practice about BruteForce, when I solved this problem.
// First try I succeed.
/*
#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, int> > st_virus;	// save virus position for BFS.
queue<pair<int, int> > q;			// queue for BFS
int layout[10][10];					// layout of laboratory. 0= space, 1= wall, 2= virus
int tmp_i[70];						// temporary layout. use this layout with Brute-Force. Use one dimensional array.
int tmp_j[70];
int tmp_k[70];

int bfs(int N, int M, int numS) {
	int spread[10][10];				// one dimensional array => two dimensional array
	bool visit[10][10];				// virus visit availiability
	int dx[4]= {-1, 0, 1, 0};		// virus spread position
	int dy[4]= {0, 1, 0, -1};
	int i, j;
	
	for(i= 0; i< N; i++) for(j= 0; j< M; j++) visit[i][j]= 0;
	
	for(i= 0; i< N*M; i++)			// one dimensional array => two dimensional array
		spread[i/M][i%M]= tmp_k[i];
	
	while(!q.empty())
	{
		int x= q.front().first;
		int y= q.front().second;
		visit[x][y]= 1;
		q.pop();
		
		for(i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			else 
			{
				if(spread[nx][ny]== 0 && !visit[nx][ny]) 
				{
					//cout << "CURRENT (NX, NY) : (" << nx <<", " << ny <<")\n"; 
					spread[nx][ny]= 2;
					q.push(make_pair(nx, ny));
					numS--;
					//cout << "\n";
					//for(j= 0; j< N; j++) {
					//	for(int k= 0; k< M; k++) cout << spread[j][k] << " ";
					//	cout << "\n";
					//}
					//cout << "CURRENT NUMS : " << numS << "\n";
				}
			}
		}
	}
	//for(i= 0; i< N; i++) {
	//	for(j= 0; j< M; j++) cout << spread[i][j] << " ";
	//	cout << "\n";
	//}
	return numS;
}

	
void lab() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	int i, j, k, t;
	int ans= 0, numS= 0;		// numS : original space's number.
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< M; j++)
		{
			cin >> layout[i][j];
			if(layout[i][j]== 2) st_virus.push_back(make_pair(i, j));
			if(layout[i][j]== 0) numS++;
		}
	}
	
	//cout << "NUM OF SPACE : " << numS << "\n";
	
	for(i= 0; i< N*M; i++)		// create 3 walls, and count space's number. 
	{
		for(j= 0; j< N; j++) for(k= 0; k< M; k++) tmp_i[M*j+k]= layout[j][k];	// copy lab's layout.
	
		if(tmp_i[i]== 1 || tmp_i[i]== 2) continue;
		else 
		{
			tmp_i[i]= 1;															// create 1st wall
			numS--;
			for(j= 0; j< N*M; j++) tmp_j[j]= tmp_i[j];								// copy 
			
			for(j= i+1; j< N*M; j++)
			{
				 if(tmp_j[j]== 1 || tmp_j[j]== 2) continue;
				 else 
				 {
				 	tmp_j[j]= 1;													// create 2nd wall
				 	numS--;
					for(k= 0; k< N*M; k++) tmp_k[k]= tmp_j[k];						// copy
					
					for(k= j+1; k< N*M; k++)
					{
						if(tmp_k[k]== 1 || tmp_k[k]== 2) continue;
						else
						{
							tmp_k[k]= 1;											// create 3rd wall
							numS--;
							for(int l= 0; l< st_virus.size(); l++) q.push(st_virus[l]);
							//cout << "CURRENT I : " << i << ", J : " << j << ", K : " << k << "\n";
							t= bfs(N, M, numS);
							//cout << "T : " << t << " , ans : " << ans << "\n";
							ans= ans > t ? ans : t;
							
							tmp_k[k]= 0;											// crash 3rd wall
							numS++;
						}
					}
					
					tmp_j[j]= 0;													// crash 2nd wall
					numS++;
				}
			}
			
			tmp_i[i]= 0;															// crash 1st wall
			numS++;
		}
	}
	cout << ans << "\n";
}*/
