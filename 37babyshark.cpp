// BOJ 16236 baby shark. 2021.12.07
/* BFS implementation COMPLETE!!

#include <bits/stdc++.h>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct pos{
	int x;						// shark's i position
	int y;						// shark's j position
	int mv= 0;					// shark's moved distance
}typedef pos;

int dx[4]= {-1, 0, 1, 0};
int dy[4]= {0, -1, 0, 1};
int maps[22][22];				// fish & shark's position
bool vst_b[22][22];				// visited availability for BFS
bool vst_d[22][22];				// visited availability for DFS
int fshN[8];					// numbers of fish.
queue<pos> q;					// queue for BFS
vector<pair<int, int> > fir;	// vector array for search left top fish position
int sizeS= 2;					// baby shark's size
int eatn= 0;					// shark's eaten fish's number
int N;

pos bfs(pos st) {				// BFS for search fish
	pos t;
	
	memset(vst_b, 0, sizeof(vst_b));
	int eatB= eatn;				// Before search, eaten fish's number.
	q.push(st);
	cout << " START SEARCH, CURRENT POSTION : " << st.x << ", " << st.y << ", MV : " << st.mv << "\n";
	vst_b[st.x][st.y]= 1;
	
	while(!q.empty())
	{
		int x, y;
		t= q.front();
		int fshS= maps[t.x][t.y];
		int curM= t.mv;
		if(0 < fshS && fshS < sizeS)
		{
			cout << " FIND FISH!! : MAPS[" << t.x << "][" << t.y << "], size : " << maps[t.x][t.y] << "\n";
			while(!q.empty())
			{
				t= q.front();
				x= t.x; y= t.y;
				pair<int, int> space;
				space.first= x; space.second= y;
				if((0 < maps[t.x][t.y]) && (maps[t.x][t.y] < sizeS) && (t.mv== curM)) {
					fir.push_back(space);
					cout << "Queue FRONT'S MV : " << t.mv << "\n";
				}
				q.pop();
			}
			sort(fir.begin(), fir.end());
			for(int j= 0; j< fir.size(); j++) 
				cout << "{ " << fir[j].first << ", " <<  fir[j].second << " } ";
			cout << "\n";
			
			t.x= fir.front().first, t.y= fir.front().second; t.mv= curM;
			fshN[maps[t.x][t.y]]--;	eatn++;
			maps[t.x][t.y]= 0;
			fir= vector<pair<int, int> >();
			break;
		}
		
		x= t.x;
		y= t.y;
		q.pop();
		for(int i= 0; i< 4; i++) 
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
			if(!vst_b[nx][ny] && maps[nx][ny]<= size)  
			{
				pos nt;
				vst_b[nx][ny]= 1;
				nt.x= nx;	nt.y= ny;	nt.mv= t.mv+1;
				q.push(nt);
			}
		}
	}
	if(eatn== eatB) t.mv= st.mv;
	q= queue<pos>();
	return t;
}

void babyshark() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	pos st;
	
	cin >> N;
	memset(fshN, 0, sizeof(fshN));
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			int t;
			cin >> t;
			if(0< t && t< 7) 
				fshN[t]++;
			if(t== 9)
			{	st.x= i; st.y= j;	
				t= 0;
			}
			maps[i][j]= t;
		}
	}
	for(i= 1; i< 7; i++) cout << "fshN[" << i << "] : " << fshN[i] << " ";
	cout << "\n";
	pos t= st;
	
	int totF= fshN[1];
	for(i= 0; i< totF; i++) 
	{
		t= bfs(t);
		cout << "CURRENT POSITION : " << t.x << ", " << t.y << "\n";
		if(sizeS> 6) continue;
		if(eatn== sizeS)
		{
			i= -1;
			for(j= 1; j< 7; j++) cout << "fshN[" << j << "] : " << fshN[j] << " ";
			totF= 0;
			for(j= 1; j<= size; j++) totF+= fshN[j];
			sizeS++;
			cout << "\ntotF : " << totF << ", SIZE : " << sizeS << ", ";
			cout << "MV : " << t.mv << "\n";
			eatn= 0;
		}
	}
	for(i= 1; i< 7; i++) cout << "fshN[" << i << "] : " << fshN[i] << " ";
	cout << "\n" << t.mv << "\n";
}*/
/*
#include <bits/stdc++.h>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct pos{
	int x;						
	int y;						
	int mv= 0;					
}typedef pos;

int maps[22][22];				
bool vst_b[22][22];				
int fshN[8];					
queue<pos> q;					
vector<pair<int, int> > fir;	
int sizeS= 2;					
int eatn= 0;					
int N;

pos bfs(pos st) {				
	int dx[4]= {-1, 0, 1, 0};
    int dy[4]= {0, -1, 0, 1};
    pos t;
	
	memset(vst_b, 0, sizeof(vst_b));
	q.push(st);
	vst_b[st.x][st.y]= 1;
	
	while(!q.empty())
	{
		int x, y;
		t= q.front();
		int fshS= maps[t.x][t.y];
		int curM= t.mv;
		if(0 < fshS && fshS < sizeS)
		{
			while(!q.empty())
			{
				t= q.front();
				x= t.x; y= t.y;
				pair<int, int> space;
				space.first= x; space.second= y;
				if((0 < maps[t.x][t.y]) && (maps[t.x][t.y] < sizeS) && (t.mv== curM))
					fir.push_back(space);
				q.pop();
			}
			sort(fir.begin(), fir.end());
			
			t.x= fir.front().first, t.y= fir.front().second; t.mv= curM;
			fshN[maps[t.x][t.y]]--;	eatn++;
			maps[t.x][t.y]= 0;
			fir= vector<pair<int, int> >();
			break;
		}
		
		x= t.x;
		y= t.y;
		q.pop();
		
		for(int i= 0; i< 4; i++) 
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
			if(!vst_b[nx][ny] && maps[nx][ny]<= sizeS)  
			{
				pos nt;
				vst_b[nx][ny]= 1;	
				nt.x= nx;	nt.y= ny;	nt.mv= t.mv+1;
				q.push(nt);
			}
		}
	}
	q= queue<pos>();
	return t;
}

void babyshark() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j;
	pos st;
	
	cin >> N;
	memset(fshN, 0, sizeof(fshN));
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++)
		{
			int t; pos fsh;
			cin >> t;
			if(0< t && t< 7) 
				fshN[t]++;
			if(t== 9)
			{	
				st.x= i; st.y= j;	
				t= 0;
			}
			maps[i][j]= t;
		}
	}
	pos t= st;
	
	int totF= fshN[1];
	for(i= 0; i< totF; i++) 
	{
		t= bfs(t);
		if(sizeS> 6) continue;
		if(eatn== sizeS)
		{
			i= -1;
			totF= 0;
			for(j= 1; j<= sizeS; j++) totF+= fshN[j];
			sizeS++;
			eatn= 0;
		}
	}
	cout << t.mv << "\n";
}		*/
