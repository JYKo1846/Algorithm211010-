// BOJ 17142 lab3 2021.12.22
// USE BackTracking & BFS.
// BackTracking for virus permutation && BFS for calculate spreading time
// 1st try SUCCESS !!!!
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct pos{
	int x;			// lay[x][]
	int y;			// lay[][y]
	int d;			// spend time for reach place
}typedef pos;

int lay[52][52];		// laboratory layout
pos viPos[12];			// each virus's position
int N;					// laboratory size
int M; 					// active virus number
int viN;				// counting virus for input virus position
int spN;				// space number
int day= 25000;			// minimum day of virus spreading to full of lab
queue<pos> q;			// Queue for BFS
bool chk[52][52];		// visitation check array
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};

void bfs(bool *u, int sN) {		// BFS for virus spreading time
	int i, j;					// u[] : current selected virus, sN : current remained space number
	pos t;
	
	memset(chk, 0, sizeof(chk));
	
	for(i= 0; i< viN; i++)
	{
		if(u[i])
		{		
			t.x= viPos[i].x;
			t.y= viPos[i].y;
			t.d= 0;
			q.push(t);
			chk[t.x][t.y]= 1;
		}
	}
	
	while(!q.empty())
	{
		pos fir= q.front();
		int x= fir.x;
		int y= fir.y;
		int d= fir.d;
		q.pop();
		
		for(i= 0; i< 4; i++)
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0|| ny< 0|| nx>= N|| ny>= N) continue;
			if(!chk[nx][ny] && (lay[nx][ny]!= 1))
			{
				if(lay[nx][ny]== 0)
					sN--;
				t.x= nx;	t.y= ny;	t.d= d+1;
				q.push(t);
				chk[nx][ny]= 1;
				//cout << "CURRENT POS : " << nx << ", " << ny << ", DAY : " << t.d << "\n";
				//cout << "CURRENT REMAINED SPACE : " << sN << "\n";
				//cout << "\n";
				if(sN== 0)
				{
					//cout << "====SEARCH FINISHED. SPENT DAYS : " << t.d << "====\n";
					day= day < t.d ? day : t.d;
					q= queue<pos>();
					return ;
				}
			}
		}
	}
	q= queue<pos>();	
}

void ch(int cur, int r, bool *u) {		// cur: current chosen virus[], r: remained activate virus number
	if(r== 0)							// u[]: current used virus[]
	{
		bfs(u, spN);
		return ;
	}
	
	for(int i= cur+1; i<= (viN- r); i++)
	{
		if(!u[i])
		{
			u[i]= 1;
			ch(i, r-1, u);
			u[i]= 0;
		}
	}
}

void lab3() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	bool used[12];
	int i, j, t;

	cin >> N >> M;
	
	memset(used, 0, sizeof(used));
	viN= 0;	spN= 0;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			cin >> t;
			if(t== 2)
			{
				viPos[viN].x= i;
				viPos[viN].y= j;
				viPos[viN].d= 0;
				viN++;
			}
			if(t== 0)
				spN++;
				
			lay[i][j]= t;
		}
	}
	
	if(spN== 0) day= 0;
	for(i= 0; i< viN; i++)
	{
		used[i]= 1;
		ch(i, M-1, used);
		used[i]= 0;
	}
	if(day== 25000) day= -1;
	cout << day << "\n";
}*/
