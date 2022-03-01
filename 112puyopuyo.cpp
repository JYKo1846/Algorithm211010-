// BOJ 11559 PuyoPuyo 2022.03.01
// save to break block's position at vector V
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

int bd[2][14][6];		// board. .: 0, R: 1, G: 2, B: 3, P: 4, Y: 5
bool vst[14][6];		// check visitation
int ans= 0;				// answer chain number
queue<pair<int, int> > q;
vector<pair<int, int> > v;

void bfs() {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	int i, j, k, curC;		// curC: current Color
	int x, y, nx, ny, curN;	// curN: current color's connectivity number
	bool fin= 0;
	pair<int, int> fr;
	
	while(!fin) 
	{
		memset(vst, 0 ,sizeof(vst));
		fin= 1;
		
		// find block
		for(i= 0; i< 12; i++)
		{
			for(j= 0; j< 6; j++)
			{
				if(bd[0][i][j]!= 0 && !vst[i][j])
				{
					v= vector<pair<int, int> >();
					curN= 1;
					curC= bd[0][i][j];
					fr= make_pair(i, j);
					q.push(fr);
					v.push_back(fr);
					vst[i][j]= 1;
					
					// check block package's size is larger than 4
					while(!q.empty())
					{
						fr= q.front();
						x= fr.first;
						y= fr.second;
						q.pop();
						
						for(k= 0; k< 4; k++)
						{
							nx= x+ dx[k];
							ny= y+ dy[k];
							if(nx< 0 || nx>= 12) continue;
							if(ny< 0 || ny>= 6)  continue;
							if(bd[0][nx][ny]== curC && !vst[nx][ny])
							{
								curN++;
								v.push_back({nx, ny});
								vst[nx][ny]= 1;
								q.push({nx, ny});
							}
						}
					}
					
					if(curN>= 4)
						fin= 0;

					for(k= 0; k< v.size(); k++)
					{
						x= v[k].first;
						y= v[k].second;
						int t= 0;
						if(curN< 4) t= curC;
						bd[1][x][y]= t;
					}
				}
			}
		}
		cout << "===================================\n";
		for(i= 0; i< 12; i++)
		{
			for(j= 0; j< 6; j++)
				cout << bd[1][i][j] << " ";
			cout << endl;
		}
		cout << "===================================\n";
		
		// pull down block 
		for(i= 10; i> -1; i--)
		{
			for(j= 0; j< 6; j++)
			{
				if(bd[1][i][j]!= 0)
				{
					// search most below block
					for(k= i+1; k< 12; k++)
						if(bd[1][k][j]!= 0) break;
					if(k!= i+1)
					{
						k--;
						bd[1][k][j]= bd[1][i][j];
						bd[1][i][j]= 0;
					}
				}
			}
		}
		
		// copy bd[1] => bd[0]
		for(i= 0; i< 12; i++)
			for(j= 0; j< 6; j++)
				bd[0][i][j]= bd[1][i][j];
		
		cout << "===================================\n";
		for(i= 0; i< 12; i++)
		{
			for(j= 0; j< 6; j++)
				cout << bd[0][i][j] << " ";
			cout << endl;
		}
		cout << "===================================\n";
		if(!fin) ans++;
		v= vector<pair<int, int> >();
	}
}
								
	
	
void puyopuyo() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(bd, 0, sizeof(bd));
	
	for(i= 0; i< 12; i++)
	{
		for(j= 0; j< 6; j++)
		{
			char c;
			cin >> c;
			if(c== '.') bd[0][i][j]= 0;
			if(c== 'R') bd[0][i][j]= 1;
			if(c== 'G') bd[0][i][j]= 2;
			if(c== 'B') bd[0][i][j]= 3;
			if(c== 'P') bd[0][i][j]= 4;
			if(c== 'Y') bd[0][i][j]= 5;
		}
	}
	
	for(i= 0; i< 12; i++)
	{
		for(j= 0; j< 6; j++)
			cout << bd[0][i][j] << " ";
		cout << endl;
	}
	cout << "=========================\n";
	
	bfs();
	
	cout << ans << endl;
}*/
