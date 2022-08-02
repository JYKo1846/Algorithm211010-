// BOJ 4179 Fire! 20220802
// 4th Try answer.
// Why I wrong : termination code was (R-1, a), (b, C-1) 
//				=> (R-1, a), (b, C-1), (0, q), (p, 0)

/*
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int R, C;
int arr[1005][1005];		// wall : -9, 
int vst[1005][1005];		// visited time check
pair<int, int> st;
queue<pair<int, int> > q;	// queue for moving fire, Jihun
int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, 1, 0, -1};

void bfs() {
	
	int i, j, x, y, nx, ny;
	int ans= -1;
	pair<int, int> hd;
	
	// First, move fire
	while(!q.empty())
	{
		hd= q.front();
		x= hd.first;
		y= hd.second;
		q.pop();
		
		for(i= 0; i< 4; i++) 
		{
			nx= x+ dx[i];
			ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= R || ny>= C) continue;
			if(arr[nx][ny]== -9 || arr[nx][ny]!= -1) continue;
			
			arr[nx][ny]= arr[x][y]+ 1;
			q.push({nx, ny});
		}
	}

	// Second, move Jihun
	for(i= 0; i< R; i++) 
		for(j= 0; j< C; j++)
			vst[i][j]= -1;
	
	x= st.first;
	y= st.second;
	
	vst[x][y]= 1;
	if(x== R-1 || y== C-1 || x== 0 || y== 0) 
		ans= vst[x][y];
	else
		q.push(st);
	
	while(!q.empty())
	{  
		hd= q.front();
		x= hd.first;
		y= hd.second;
		q.pop();
		
		if(x== R-1 || y== C-1 || x== 0 || y== 0)
		{
			ans= vst[x][y];
			break;
		}
		
		for(i= 0; i< 4; i++)
		{
			nx= x+ dx[i];
			ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= R || ny>= C) continue;
			if(vst[nx][ny]!= -1 || arr[nx][ny]== -9 || ((arr[nx][ny]<= vst[x][y]+1) && arr[nx][ny]!= -1)) continue;
			
			vst[nx][ny]= vst[x][y]+1;
			q.push({nx, ny});
		}
	}
	
	if(ans== -1) cout << "IMPOSSIBLE";
	else cout << ans;
	cout << "\n";
}

void Fire() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	char c;
	
	cin >> R >> C;
	
	for(i= 0; i< R; i++)
	{
		for(j= 0; j< C; j++)
		{
			cin >> c;
			if(c== '#') arr[i][j]= -9;	// If, input is wall
			if(c== '.') arr[i][j]= -1;	// If, input is space
			if(c== 'J') 
			{
				st= make_pair(i, j);
				arr[i][j]= -1;
			}	
			if(c== 'F')	
			{
				q.push({i, j});
				arr[i][j]= 1;
			}
		}
	}
	
	bfs();
}*/
