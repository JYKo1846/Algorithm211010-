// BOJ 15683 watch 2021.12.10
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

using namespace std;

int maps[10][10];					// office layout
vector<pair<int, int> > v;			// cctv's position
int N, M;
int ans= 100;						// minimum blind spot

void cmr(int (*m)[10], int dir, pair<int, int> cur) {		// watch direction's space. like camera. 1; 
	int i, j, t;											// cur : current camera's position. dir: direction of camera
	int x= cur.first;
	int y= cur.second;

	cout << "CURRENT POSITION : " << x << ", " << y << " CURRENT DIRECTION : " << dir <<"\n";
	if(dir== 0 || dir== 4)						// direction ^
	{
		for(i= x-1; i>= 0; i--)
		{
			t= maps[i][y];
			if(t== 6) break;
			if(0< t && t< 6) continue;
			m[i][y]= 9;
		}
	}
	
	else if(dir== 1)				// direction >
	{
		for(j= y+1; j< M; j++)
		{
			t= maps[x][j];
			if(t== 6) break;
			if(0< t && t< 6) continue;
			m[x][j]= 9;
		}
	}
	
	else if(dir== 2)				// direction down
	{
		for(i= x+1; i< N; i++)
		{
			t= maps[i][y];
			if(t== 6) break;
			if(0< t && t< 6) continue;
			m[i][y]= 9;
		}
	}
	
	else if(dir== 3)				// direction <
	{
		for(j= y-1; j>= 0; j--)
		{
			t= maps[x][j];
			if(t== 6) break;
			if(0< t && t< 6) continue;
			m[x][j]= 9;
		}
	}
	
	cout << "IN CMR()\n";
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++) cout << m[i][j] << " ";
		cout << "\n";
	}
	
}
	


void dfs(int cur, int (*m)[10]) {	// cur : current check cctv. m : temporary watch layout.
	int i, j;
	
	if(cur== v.size())
	{
		int t= 0;
		for(i= 0; i< N; i++) 
			for(j= 0; j< M; j++)
				if(m[i][j]== 0) t++;
		ans= ans < t ? ans : t;
		return ;
	}
	
	for(i= 0; i< M+5; i++) cout <<"=";
	cout << "\n";
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< M; j++) cout << m[i][j] << " ";
		cout << "\n";
	}
	for(i= 0; i< M+5; i++) cout <<"=";
	cout << "\n";
	
	
	int tm[10][10];

	pair<int, int> curC= v[cur];					// curC : current camera position v[cur].first, v[cur].second
	int cctv= maps[curC.first][curC.second];		// cctv : camera's version
	int dir;										// camera's direction. 0 : ^, 1: >, 2: down, 3: <
	
	if(cctv== 1)									// watch one direction
	{
		for(dir= 0; dir< 4; dir++)
		{
			for(i= 0; i< N; i++) for(j= 0; j< M; j++) tm[i][j]= m[i][j];
			
			cmr(tm, dir, curC);
			
			dfs(cur+1, tm);
		}
	}
	else if(cctv== 2)					// watch direction's line
	{
		for(dir= 0; dir< 2; dir++)
		{
			for(i= 0; i< N; i++) for(j= 0; j< M; j++) tm[i][j]= m[i][j];
			
			cmr(tm, dir, curC);
			cmr(tm, dir+2, curC);
			
			dfs(cur+1, tm);
		}
	}
	else if(cctv== 3)
	{
		for(dir= 0; dir< 4; dir++)
		{
			for(i= 0; i< N; i++) for(j= 0; j< M; j++) tm[i][j]= m[i][j];
			
			cmr(tm, dir, curC);
			cmr(tm, dir+1, curC);
			
			dfs(cur+1, tm);
		}
	}
	else if(cctv== 4)
	{
		for(dir= 0; dir< 4; dir++)
		{
			for(i= 0; i< N; i++) for(j= 0; j< M; j++) tm[i][j]= m[i][j];
			
			if(dir== 0 || dir== 2)
			{
				cmr(tm, 3, curC);
				cmr(tm, 1, curC);
				cmr(tm, dir, curC);
			}
			else if(dir== 1 || dir== 3)
			{
				cmr(tm, 0, curC);
				cmr(tm, 2, curC);
				cmr(tm, dir, curC);
			}
			
			dfs(cur+1, tm);
		}
	}
	else if(cctv== 5)
	{
		for(i= 0; i< N; i++) for(j= 0; j< M; j++) tm[i][j]= m[i][j];
		
		for(dir= 0; dir< 4; dir++) cmr(tm, dir, curC);
		
		dfs(cur+1, tm);
	}
}

void watch() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, t;
	cin >> N >> M;
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++) 
		{
			cin >> t;
			if(0< t && t< 6) v.push_back(make_pair(i, j));
			maps[i][j]= t;
		}
	}
	
	if(!v.empty()) dfs(0, maps);
	else 
	{
		t= 0;
		for(i= 0; i< N; i++)
			for(j= 0; j< M; j++)
				if(maps[i][j]== 0) t++;
		ans= ans < t ? ans : t;
	}
			
	cout << ans << "\n";
}*/
