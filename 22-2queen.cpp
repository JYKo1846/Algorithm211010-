// BOJ 9663 2021.11.26 2nd try.
// Bruteforce. 1st code was too rough.
// save queen's col position, row position, pos-diagonal pos, neg-diagonal pos.
// all queens has different position of col, row, pos-diag, neg-diag.

#include <iostream>
#include <string.h>

using namespace std;

void queen() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int  qrow[16], qcol[16], qpos[32], qneg[32];
	memset(qrow, -1, sizeof(qrow));
	memset(qcol, -1, sizeof(qcol));
	memset(qpos, -1, sizeof(qpos));
	memset(qneg, -1, sizeof(qneg));
	
	int N;
	
	cin >> N;
	
}
