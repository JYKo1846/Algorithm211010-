/*// BOJ 11724 2021.11.19
// use Union-find set.

#include <stdio.h>

int root[1005];		// array for value of index's parent node.
bool check[1005];	// checklist for counting root number. If, root[1]= 1, root[2]= 2 => ans will be 2, but, root[3]= 1,=> ans will no change. 
bool visit[1005];

void merge(int prt, int ch);
int find(int ch);

void init(int N) {
	for(int i= 0; i<= N; i++)
	{
		root[i]= i;
		check[i]= 0;
		visit[i]= 0;
	}
}

void merge(int x, int y) {
*/	/*if(root[ch]!= ch) root[root[ch]]= ch;
	root[ch]= root[find(prt)];*/
/*	x= find(x);
	y= find(y);
	
	root[y]= x;
}

int find(int x) {
	if(root[x]== x) return x;
	return find(root[x]);
}

void numOfConnect() {
	int N, M, ans= 0;
	int t1, t2, i;
	
	scanf("%d %d", &N, &M);
	init(N);
	for(i= 0; i< M; i++)
	{
		scanf("%d %d", &t1, &t2);
		merge(t1, t2);
	}
	
	for(i= 1; i<= N; i++) 
	{
		if(check[find(i)]) continue;
		ans++;
		check[find(i)]= 1;
	}
	for(i= 1; i<= N; i++) printf("%d ", find(i));
	printf("\n%d\n", ans);
}*/
