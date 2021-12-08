// BOJ 1107 remote controller 2021.12.07
// Imply with DFS, time spend 980ms. But, other c++ code spends 20ms. HOW? to the 2nd impliment
/*
#include <bits/stdc++.h>
#include <math.h>
#define MAX 50000005

using namespace std;

int N;								// N : answer number
int limitD= 0;						// limitD : limit digit. To decrease dfs depth, value will answer number's digit +1
bool brk[12];						// 0 : broken, 1: not broken.
int closeA= MAX;					// closeA : most closest number.

void dfs(int V) {					// curdgt : current digit number, V : current value. ex) V : 12 , curdgt=> 2
	int curdgt= 0;					// search will finish curdgt== 7
	
	if(V== 0) { closeA= abs(N-V)+1; return ; }
	
	for(int t= V; t; t/= 10) curdgt++;
	if(curdgt== limitD) return ;
	if(abs(N-V)+curdgt < closeA) 
		closeA= abs(N-V)+ curdgt;
	for(int i= 0; i< 10; i++)
		if(brk[i])
			dfs(V*10+i);
}

void remote() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int M;		// N : answer number, M : broken button
	int i, j;
	
	memset(brk, 1, sizeof(brk));
	cin >> N >> M;
	for(int t= N; t; t/= 10)
		limitD++;
	for(i= 0; i< M; i++)
	{
		int t;
		cin >> t;
		brk[t]= 0;
	}
	limitD+= 2;							// search will finished made number's digit == limit digit+ 1
	for(i= 0; i< 10; i++)
		if(brk[i])
			dfs(i);
	cout << "LAST CLOSEST VALUE : " << closeA << "\n";
	closeA= closeA < abs(N-100) ? closeA : abs(N-100);
	cout << "ANSWER : " << closeA << "\n";
}*/
/* 
// 2nd impliment. search i= 0 ~ 1000000, if i has broken number, then continue to next i, and compare with ans= abs(N- i)+ i's digit.
// Before search, we start channel "100", ans= abs(N- 100) first.
// during search, 0 will problem. control if(V== 0)

#include <bits/stdc++.h>
#include <math.h>
#define MAX 50000000

using namespace std;

int N, M;
int ans;
bool brk[12];

void search(int V) {
    int t= V, dgt= 0;
    if(t== 0 && !brk[t]) return ;
    for(t= V; t; t/= 10) if(!brk[t%10]) return ;
    for(t= V; t; t/= 10) dgt++;
    if(V== 0) dgt++;
    ans= ans < abs(N-V)+ dgt ? ans : abs(N-V)+ dgt;
}

void remote() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i;
    ans= MAX;
    
    memset(brk, 1, sizeof(brk));
    cin >> N >> M;
    for(i= 0; i< M; i++) 
	{	
		int t;
		cin >> t;
		brk[t]= 0;
	}
    
    ans= ans < abs(N-100) ? ans : abs(N-100);
    if(N== 0 && brk[0]) ans= 1;
    for(i= 0; i< 1000000; i++)
        search(i);
    cout << ans << "\n";
    //return 0;
}*/
