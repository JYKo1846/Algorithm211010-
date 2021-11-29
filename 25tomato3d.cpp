// BOJ 7569 3D tomato 2021.11.29
// use BFS
// 1st try success!!!!!! nice.
// In bfs(), use 6 time for() loop for x,y,z, search. BFS doesn't need to compare minimum value.
// because, bfs's first search is the best minimum value.
/*
#include <iostream>
#include <queue>

struct pos {
	int z;			// height of tomato's position . tmt[z][][]
	int x;			// width of tomato's position. tmt[][x][]
	int y;			// vertical position of tomato's. tmt[][][y]
	int day;		// spended day of risen tomato.
}typedef Tpos;

using namespace std;

int tmt[102][102][102];
bool visit[102][102][102];
queue<Tpos> q;

void bfs(int M, int N,int H, int tmtN) {
	int i, j;
	
	int dx[6]= {-1, 0, 1, 0, 0, 0};
	int dy[6]= {0, 1, 0, -1, 0, 0};
	int dz[6]= {0, 0, 0, 0, 1, -1};
	
	Tpos t;
	while(!q.empty())
	{
		t= q.front();
		q.pop();
		int z= t.z;
		int x= t.x;
		int y= t.y;
		
		for(i= 0; i< 6; i++) 
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			int nz= z+ dz[i];
			
			if(nx< 0 || ny< 0 || nz< 0 || nx>= N || ny>= M || nz>= H) continue;
			if(tmt[nz][nx][ny]== 0 && !visit[nz][nx][ny])
			{
				tmtN--;
				Tpos Ttmt;
				Ttmt.z= nz; Ttmt.x= nx; Ttmt.y= ny; Ttmt.day= t.day+1;
				q.push(Ttmt);
				visit[nz][nx][ny]= 1;
			}
		}
	}
	if(tmtN!= 0) t.day= -1;
	cout << t.day << "\n";
}				

void tomato3d() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int tmtN= 0;
	int M, N, H;
	int i, j, k;
	
	cin >> M >> N >> H;
	
	for(i= 0; i< H; i++) 
	{
		for(j= 0; j< N; j++)
		{
			for(k= 0; k< M; k++)
			{
				int t;
				Tpos tmpP;
				cin >> t;
				tmt[i][j][k]= t;
				visit[i][j][k]= 0;
				if(t== 0) tmtN++;
				if(t== 1) 
				{
					tmpP.z= i; tmpP.x= j; tmpP.y= k; tmpP.day= 0;
					visit[i][j][k]= 1;
					q.push(tmpP);
				}
			}
		}
	}
	bfs(M, N, H, tmtN);	
}*/
