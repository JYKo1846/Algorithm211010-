// BOJ 16236 baby shark. 2021.12.07

#include <bits/stdc++.h>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;

struct pos{
	int x;				// shark's i position
	int y;				// shark's j position
	int mv= 0;		// shark's moved distance
}typedef pos;

int maps[22][22];		// fish & shark's position
bool vst[22][22];		// visited availability
vector<pos> fish;		// arrange of fish with size. fish[4] = size 4 fish
int fshN[7];			// numbers of fish.
queue<pos> q;			// queue for BFS
int size= 2;			// baby shark's size
int eatn= 0;			// shark's eaten fish's number
int fishN= 0;
int N;

pos bfs(pos st) {
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, -1, 0, 1};
	pos t;
	
	memset(vst, 0, sizeof(vst));
	q.push(st);
	vst[st.x][st.y]= 1;
	while(!q.empty())
	{
		t= q.front();
		int x= t.x;
		int y= t.y;
		q.pop();
		for(int i= 0; i< 4; i++) 
		{
			int nx= x+ dx[i];
			int ny= y+ dy[i];
			
			if(nx< 0 || ny< 0 || nx>= N || ny>= N) continue;
			if(!vst[nx][ny] && maps[nx][ny]<= size)
			{
				pos nt;
				vst[nx][ny]= 1;
				nt.x= nx;	nt.y= ny;	nt.mv= t.mv+1;
				if(0< maps[nx][ny] && maps[nx][ny]< size) 
				{
					cout << nt.x << ", " << nt.y << "\n"; 
					t= nt;
					q= queue<pos>();
					eatn++;		maps[nx][ny]= 0;
					break;
				}
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
			{	st.x= i; st.y= j;	
				t= 0;
			}
			maps[i][j]= t;
		}
	}
	pos t= st;
	/*for(i= 0; i< fshN[1]; i++) 
	{ 
		t= bfs(st);
		if(i== 0) st= t; 
		if(t.mv < st.mv)
			st= t;
		else if(t.mv== st.mv)
		{
			if(t.x < st.x) st= t;
			else if(t.x == st.x)
				if(t.y < st.y) st= t;
		}
	}
	fshN[1]--;*/
	int totF= fshN[1];
	for(i= 0; i< totF; i++) 
	{
		cout << "CURRENT T's [" << t.x <<"][" << t.y <<"]\n";
		t= bfs(t);
		if(eatn== size)
		{
			i= 0;
			totF= fshN[size++];
			eatn= 0;
		}
	}
	for(i= 1; i< 7; i++) cout << "fshN["<< i<< "] : " << fshN[i]<< " ";
	cout << "\n" << t.mv << "\n";
}
