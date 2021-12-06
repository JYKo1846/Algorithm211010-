// BOJ 14500 Tetromino 2021.12.06
// I'm imply with BF, BUT THERE IS A WAY TO IMPLY WITH DFS, BFS. SO, THIS CODE MUST NEED TO REPEAT 
/*
#include <bits/stdc++.h>

struct pos{
	int x;
	int y;
}typedef pos;

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int paper[505][505];
pos tetro[24][3]= {
	{{0, 1}, {1, 0}, {1, 1}},	// square		square 0,1 1,0 & -1,1 => 1,1
	{{0, 1}, {0, 2}, {-1, 2}},		// ¤¤
	{{0, 1}, {0, 2}, {1, 2}},
	{{1, 0}, {2, 0}, {2, 1}},
	{{1, 0}, {2, 0}, {2, -1}},
	{{0, -1}, {0, -2}, {1, -2}},
	{{0, -1}, {0, -2}, {-1, -2}},
	{{-1, 0}, {-2, 0}, {-2, -1}},
	{{-1, 0}, {-2, 0}, {-2, 1}},
	{{0, 1}, {-1, 1}, {0, 2}},	// ¤Ç
	{{0, 1}, {1, 1}, {0, 2}},
	{{1, 0}, {1, 1}, {2, 0}},
	{{1, 0}, {1, -1}, {2, 0}},
	{{1, 0}, {2, 0}, {3, 0}},		// ¤Ñ
	{{0, 1}, {0, 2}, {0, 3}},
	{{0, 1}, {-1, 1}, {-1, 2}},	// ¤©
	{{0, 1}, {1, 1}, {1, 2}},
	{{1, 0}, {1, 1}, {2, 1}},
	{{1, 0}, {1, -1}, {2, -1}},
	{{0, -1}, {1, -1}, {1, -2}},
	{{0, -1}, {-1, -1}, {-1, -2}},
	{{-1, 0}, {-1, -1}, {-2, -1}},
	{{-1, 0}, {-1, 1}, {-2, 1}}
};

void tetromino() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N=1 , M=1;
	int ans= 0;
	int i, j;
	
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			cin >> paper[i][j];
			
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			for(int k= 0; k< 23; k++)
			{
				pos sec= tetro[k][0];
				pos thr= tetro[k][1];
				pos four= tetro[k][2];
				int secX= sec.x + i;
				int thrX= thr.x + i;
				int fourX= four.x+ i;
				
				int secY= sec.y+ j;
				int thrY= thr.y+ j;
				int fourY= four.y+ j;
				
				
				if(secX< 0 || thrX< 0 || fourX< 0 || 
					secX>= N || thrX>= N || fourX>= N) continue;
				if(secY< 0 || thrY< 0 || fourY< 0 ||
					secY>= M || thrY>= M || fourY>= M) continue;
				
				ans= max(ans, paper[i][j]+ paper[secX][secY]+ paper[thrX][thrY]+ paper[fourX][fourY]);
			}
		}
	}
	cout << ans << "\n";
}
*/	
