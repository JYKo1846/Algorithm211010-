// BOJ 2251 water bottle 2022.03.16
// USE BFS + 3rd dimensional array for visitation check
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct btl{
	int A;
	int B;
	int C;
}typedef btl;

queue<btl> q;
vector<int> v;
bool vst[202][202][202];

void mv(btl curS, int btn, int a, int b, int c) {
	btl res;
	int cw[4], t[4], lmt[4];
	
	cw[1]= curS.A;
	cw[2]= curS.B;
	cw[3]= curS.C;
	
	lmt[1]= a;
	lmt[2]= b;
	lmt[3]= c;
	
	if(cw[btn]!= 0)
	{
		for(int i= 1; i< 4; i++)
		{
			if(i== btn) continue;
		
			for(int j= 0; j< 4; j++) t[j]= cw[j];
			
			if(cw[btn]+ cw[i]<= lmt[i]) 
			{
				t[i]+= cw[btn];
				t[btn]= 0;
			}
			else
			{
				t[i]= lmt[i];
				t[btn]= cw[btn]+ cw[i]- lmt[i];
			}
			
			if(!vst[t[1]][t[2]][t[3]])
			{
				vst[t[1]][t[2]][t[3]]= 1;
				res.A= t[1];
				res.B= t[2];
				res.C= t[3];
				q.push(res);
			}
		}
	}
}
				

void chk(btl t) {
	if(t.A== 0) 
		v.push_back(t.C);
}

void bfs(int a, int b, int c) {
	int i, j;
	int ta, tb, tc;
	btl fr, t;
	
	fr.A= 0;
	fr.B= 0;
	fr.C= c;
	
	q.push(fr);
	vst[0][0][c]= 1;
	
	while(!q.empty())
	{
		fr= q.front();
		chk(fr);
		q.pop();
		
		for(i= 1; i< 4; i++)
			mv(fr, i, a, b, c);
	}
}

void waterBottle() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c;
	
	cin >> a >> b >> c;
	
	bfs(a, b, c);
	sort(v.begin(), v.end());
	for(int i= 0; i< v.size(); i++) cout << v[i] << " ";
	cout << "\n";
}
*/	
