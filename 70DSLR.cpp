// BOJ 9019 DSLR 2021.12.28
// USE BFS
// HOW I SAVE COMMAND => make structure with STRING
// BUT, SPEED IS SIMILAR AT PYTHON. IT CAUSED BY STRING APPENDING I THINK
// ANSWER CAN BFS() FUNCTION'S RETURN VALUE BECAUSE THERE IS NO RECURSIVE, NOT COMPLICATED
 
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct cc{
	int v;			// current value
	string cmd;		// command line
}typedef cc;

int st, dst;			// start number & destination number for each TEST CASE
bool vst[10002];		// visitation check array. 	vst[]== 1: already visited.	vst[]== 0: not yet
queue<cc> q;			// queue for BFS


string bfs() {
	int i, j;
	cc t;
	
	q= queue<cc>();
	
	vst[st]= 1;
	t.v= st;	t.cmd= "";
	q.push(t);
	
	while(!q.empty()) 
	{
		cc fr= q.front();
		int frV= fr.v;
		string frC= fr.cmd;
		q.pop();
		
		if(frV== dst)
			return frC;
		
		// COMMAND D: time double command
		t.v= frV*2;
		if(t.v> 9999) t.v%= 10000;
		if(!vst[t.v])
		{
			vst[t.v]= 1;
			t.cmd= frC+"D";
			q.push(t);
		}
		
		// COMMAND S: minus 1 command
		t.v= frV-1;
		if(t.v< 0) t.v= 9999;
		if(!vst[t.v])
		{
			vst[t.v]= 1;
			t.cmd= frC+"S";
			q.push(t);
		}
		
		// COMMAND L: move left one digit command
		int head= frV/1000;
		t.v= (frV%1000)*10+ head;
		if(!vst[t.v])
		{
			vst[t.v]= 1;
			t.cmd= frC+"L";
			q.push(t);
		}
		
		// COMMAND R: move right one digit command
		int tail= frV%10;
		t.v= tail*1000+ frV/10;
		if(!vst[t.v])
		{
			vst[t.v]= 1;
			t.cmd= frC+"R";
			q.push(t);
		}
	}
}

void DSLR() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--)
	{
		memset(vst, 0, sizeof(vst));
		cin >> st >> dst;
	
		cout << bfs() << "\n";	
	}
}*/
