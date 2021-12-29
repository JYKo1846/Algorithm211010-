// BOJ 5014 startlink 2021.12.29
// USE BFS. 1st Try => MEMORY OVERFLOW => VISITATION NOT CHECK. BEWARE!!!! VISITATION CHECK
// AND, IF, UP OR DOWN == 0, NO NEED TO SEARCH. SO, TREAT LIKE LINE 53,62
/*
#include <iostream>
#include <cstring>
#include <queue>
#define NG 100000000

using namespace std;

struct mv{
	int f;			// current floor
	int m;			// m: moved number
}typedef mv;

bool vst[1000004];
int st, dst;		// st: start floor, dst: destination floor
int fl;				// building's floor
int up, down;		// up: moved floor number ^, down: moved floor numbe down
queue<mv> q;		// queue for BFS
int ans= NG;	// minimum button push time


void startlink() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	memset(vst, 0, sizeof(vst));
	
	cin >> fl >> st >> dst >> up >> down;
	
	mv fir, t;
	fir.f= st;	fir.m= 0;
	q.push(fir);
	vst[st]= 1;
	
	while(!q.empty())
	{
		fir= q.front();
		int curF= fir.f;
		q.pop();
		
		if(curF== dst) 
		{
			ans= ans < fir.m ? ans : fir.m;
			break;
		}
		
		// push up button
		if((curF+ up <= fl) && !vst[curF+ up]) 
		{
			if(up== 0) continue;
			t.f= curF+ up;	t.m= fir.m+ 1;
			vst[t.f]= 1;
			q.push(t);
		}
		
		// push down button
		if((curF- down > 0) && !vst[curF- down])
		{
			if(down== 0) continue;
			t.f= curF- down; t.m= fir.m+ 1;
			vst[t.f]= 1;
			q.push(t);
		}
	}
	if(ans== NG) cout<< "use the stairs\n"; 
	else cout << ans << "\n";
}
*/
