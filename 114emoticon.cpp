// BOJ 14226 emoticon 2022.03.03
// Use two-dimensional array for vistation check.
// vst[ current monior emogi number ][ current clipboard emogi number ] 
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

struct emo{
	int tms;
	int clip;
	int mon;
}typedef emo;

int S;
queue<emo> q;
bool vst[3005][3005];

int bfs() {
	emo fr, t;
	
	memset(vst, 0 ,sizeof(vst));
	fr.tms= 0;
	fr.clip= 0;
	fr.mon= 1;
	
	q.push(fr);
	vst[1][0]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		if(fr.mon== S) return fr.tms;
		q.pop();
		
		fr.tms++;
		// COPY & SAVE AT CLIPBOARD
		t= fr;
		if(fr.mon!= 0 && !vst[fr.mon][fr.mon])
		{
			vst[fr.mon][fr.mon]= 1;
			t.clip= fr.mon;
			q.push(t);
		}
		
		// PASTE AT MONITOR
		t= fr;
		if(fr.clip!= 0 && fr.mon+ fr.clip<= 3005 &&!vst[fr.mon+ fr.clip][fr.clip])
		{
			vst[fr.mon+ fr.clip][fr.clip]= 1;
			t.mon= fr.mon+ fr.clip;
			q.push(t);
		}
		
		// ERASE 1 EMOTION AT MONITOR
		t= fr;
		if(fr.mon> 0 && !vst[fr.mon-1][fr.clip])
		{
			vst[fr.mon-1][fr.clip]= 1;
			t.mon= fr.mon -1;
			q.push(t);
		}
	}
}
	
void emoticon() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> S;
	cout << bfs() << endl;
}*/
