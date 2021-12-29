// BOJ 17471 gerrymandering 2021.12.29
// Make Permutation of every area, and validate each permutation
// If, validate correct => calculate.
// USE BFS AT VALIDATION FUNCTION
// ALWAYS CHECK PROBLEM CONDITION BEFORE COMPILE!!!!!
/*
#include <iostream>
#include <cstring>
#include <math.h>
#include <queue>

using namespace std;

int N;					// area number
int popu[12];			// each area's population
bool vst[12];			// visitation check array
bool conn[12][12];		// check connection
queue<int> q;			// queue for BFS
int ans= 99999;			// minimum population difference value
int totP;				// total population of election area

bool valid() {			// validate current permutation. If, one of group's area doesn't connected, return false
	int i, j, fr;
	bool vstQ[12];			// visitation check for BFS array
	
	//search group1 : true group at permutation()	
	q= queue<int>();
	memset(vstQ, 0, sizeof(vstQ));
	
	for(i= 1; i<= N; i++)
		if(vst[i]) break;
	q.push(i);
	vstQ[i]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		
		for(j= 1; j<= N; j++)
		{
			if(vst[j] && conn[fr][j] && !vstQ[j])
			{
				vstQ[j]= 1;
				q.push(j);
			}
		}
	}
	
//	cout << "TRUE GROUP\n";
//	for(i= 1; i<= N; i++) if(vstQ[i]) cout << i << " ";
//	cout << "\n";
	
	// check connection of group 1's area
	for(i= 1; i<= N; i++)
		if(vst[i] && !vstQ[i]) return false;
	
	// search group2 : false group at permutation()	
	q= queue<int>();
	memset(vstQ, 0, sizeof(vstQ));
	
	for(i= 1; i<= N; i++)
		if(!vst[i]) break;
	q.push(i);
	vstQ[i]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		q.pop();
		
		for(j= 1; j<= N; j++)
		{
			if(!vst[j] && conn[fr][j] && !vstQ[j])
			{
				vstQ[j]= 1;
				q.push(j);
			}
		}
	}
	
//	cout << "FALSE GROUP\n";
//	for(i= 1; i<= N; i++) if(vstQ[i]) cout << i << " ";
//	cout <<"\n";
	
	for(i= 1; i<= N; i++)
		if(!vst[i] && !vstQ[i]) return false;
	
	return true;
}
	

void permu(int cur, int st, int num) {	// num: area's stricted number. cur: current selected area number
	int i;								// st: current start area
	
	if(cur== num)
	{
		//cout << "============\n";
		//for(i= 1; i<= N; i++) if(vst[i]) cout << i << " ";
		//cout << "\n============\n";
		if(valid())
		{
			int t= 0;
			for(i= 1; i<= N; i++) 
				if(vst[i]) t+= popu[i];
			t= abs(totP- t*2); 
			ans= ans < t ? ans : t;
		}
		return ;
	}
	
	for(i= st; i<= N; i++)
	{
		if(!vst[i])
		{
			vst[i]= 1;
			permu(cur+1, i+1, num);
			vst[i]= 0;
		}
	}
}

void gerry() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	totP= 0;
	memset(conn, 0, sizeof(conn));
	
	cin >> N;
	for(i= 1; i<= N; i++) 
	{
		cin >> popu[i];
		totP+= popu[i];
	}
	
	int T, st, dst;
	for(i= 1; i<= N; i++)
	{
		st= i;
		cin >> T;
		for(j= 0; j< T; j++)
		{
			cin >> dst;
			conn[st][dst]= 1;
			conn[dst][st]= 1;
		}
	}
	
	// make 1~ N/2 permutation
	for(i= 1; i<= N/2; i++)
	{
		for(j= 1; j<= N; j++)
		{
			memset(vst, 0, sizeof(vst));
			vst[j]= 1;
			permu(1, j, i);
			vst[j]= 0;
		}
	}
	
	if(ans== 99999) ans= -1;
	cout << ans << "\n";
}*/
