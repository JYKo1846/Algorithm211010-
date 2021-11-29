// BOJ 14888 insertOperator 2021.11.29
// Bruteforce. make every operator to graph & calculate.
// If meet End Of Graph, then compare maximum value & minimum value.
/*
#include <iostream>
#include <limits.h>
using namespace std;

int num[104];			// numbers for calculate.
int oper[4];			// [0] : +, [1] : -, [2] : *, [3] : /
int N, maxV= INT_MIN, minV= INT_MAX;

int calc(int curO, int cur, int next) { 		// calculation function. curO : current operator, cur : current operation value, next : next opertaion value
	if(curO== 0) cur+= next;
	if(curO== 1) cur-= next;
	if(curO== 2) cur*= next;
	if(curO== 3)
	{
		if(cur >= 0) cur/= next;
		else
		{
			cur*= -1;
			cur/= next;
			cur*= -1;
		}
	}
	return cur;
}

void comb(int pos, int* op, int curV) {			// combination function. pos : current calculated position, op[] : current operators number
	int i, j, t;								// curV : current value.
	
	int op_t[4];
	if(pos== N-1){								// every completed calculation value, compare with maximum or minimum value.
		maxV= curV> maxV ? curV : maxV;
		minV= curV< minV ? curV : minV;
		return ;			
	}
	
	for(i= 0; i< 4; i++) 
	{
		if(op[i]== 0) continue;
		for(j=0; j< 4; j++) op_t[j]= op[j];
		op_t[i]--;
		t= calc(i, curV, num[pos+1]);
		comb(pos+1, op_t, t);
	}
}

void insertOper() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int i, j, k;
	
	cin>> N;
	for(i= 0; i< N; i++) cin >> num[i];			// input number
	for(i= 0; i< 4; i++) cin >> oper[i];		// input operator number
	
	int op_t[4], t;
	for(i= 0; i< 4; i++)
	{
		t= num[0];
		if(oper[i]== 0) continue;
		for(j= 0; j< 4; j++) op_t[j]= oper[j];
		op_t[i]--;
		t= calc(i, t, num[1]);
		comb(1, op_t, t);
	}
	cout << maxV << "\n" << minV << "\n";
}*/
