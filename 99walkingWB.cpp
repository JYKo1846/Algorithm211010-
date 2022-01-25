// BOJ 9205 walking with drinking beer 2022.01.25
// SIMPLE BFS PROBLEM. EASY PEESY PIE.
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <vector>
#include <cstdlib>
#include <queue>

using namespace std;

struct pos{
	int x, y;
}typedef pos;

pos home, goal;
vector<pos> con;
queue<pos> q;
bool vst[102];
int conN;

bool drink(pos st, pos dst) {
	int t;
	t= abs(st.x- dst.x)+ abs(st.y- dst.y);
	if(t<= 1000) return true;
	else return false;
}

void bfs() {
	int i, j;
	pos fr;
	memset(vst, 0, sizeof(vst));
	
	q.push(home);
	
	while(!q.empty()) 
	{
		fr= q.front();
		q.pop();
		
		if(drink(fr, goal))
		{
			cout << "happy\n";
			return ;
		}
		
		for(i= 0; i< con.size(); i++)
		{
			if(!vst[i] && drink(fr, con[i]))
			{
				q.push(con[i]);
				vst[i]= 1;
			}
		}
	}
	cout << "sad\n";
	return ;
}


void walkingWB() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, t;
	pos tP;
	
	cin >> t;
	while(t--)
	{
		cin >> conN;
		cin >> home.x >> home.y;
		for(i= 0; i< conN; i++)
		{
			cin >> tP.x >> tP.y;
			con.push_back(tP);
		}
		cin >> goal.x >> goal.y;
		
		bfs();
		q= queue<pos>();
		con= vector<pos>();
	}
}*/
