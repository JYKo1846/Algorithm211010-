// BOJ 1600 monkey what wants to be a horse 2022.01.26
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

struct pos{
	int x, y;
	int kmv;					// kmv: remained number of knight moves.
}typedef pos;

int W, H, K;
queue<pos> q;
int bd[202][202];
int mvN[202][202][32]; 
bool vst[202][202][32];
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};
int kdx[8]= {-2, -2, -1, 1, 2, 2, 1, -1};
int kdy[8]= {-1, 1, 2, 2, 1, -1, -2, -2};

int bfs() {
	int i, j, nx, ny;
	pos fr, t;
	
	memset(vst, 0, sizeof(vst));
	memset(mvN, 0, sizeof(mvN));
	
	fr.x= fr.y= 0;
	fr.kmv= 0;
	q.push(fr);
	vst[0][0][0]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		
		if(fr.x== H-1 && fr.y== W-1)
			return mvN[fr.x][fr.y][fr.kmv];
		
		for(i= 0; i< 4; i++)	// move 1 space
		{
			nx= fr.x+ dx[i];
			ny= fr.y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= H || ny>= W) continue;
			if(bd[nx][ny]!= 1 && !vst[nx][ny][fr.kmv])
			{
				mvN[nx][ny][fr.kmv]= mvN[fr.x][fr.y][fr.kmv]+ 1;
				t.x= nx, t.y= ny, t.kmv= fr.kmv;
				q.push(t);
				vst[nx][ny][fr.kmv]= 1;
			}
		}
		if(fr.kmv< K)
		{
			for(i= 0; i< 8; i++)	// move knight moving
			{
				nx= fr.x+ kdx[i];
				ny= fr.y+ kdy[i];
				
				if(nx< 0 || ny< 0 || nx>= H || ny>= W) continue;
				if(bd[nx][ny]!= 1 && !vst[nx][ny][fr.kmv+1])
				{
					mvN[nx][ny][fr.kmv+ 1]= mvN[fr.x][fr.y][fr.kmv]+ 1;
					t.x= nx, t.y= ny, t.kmv= fr.kmv+ 1;
					q.push(t);
					vst[nx][ny][t.kmv]= 1;
				}
			}
		}
	}
	return 500;
}

void monkeyTohorse() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(bd, 0, sizeof(bd));
	
	cin >> K;
	cin >> W >> H;
	for(i= 0; i< H; i++)
		for(j= 0; j< W; j++)
			cin >> bd[i][j];

	i= bfs();
	if(i== 500) i= -1;
	cout << i << "\n";
}*/
