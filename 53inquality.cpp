// BOJ 2529 inquality 2021.12.17
// use BF -> DFS+ BF
/*
#include <iostream>
#include <cstring>

using namespace std;

char in[12];									// inquality array								
long long maxi= 0, mini= 9999999999;			// maximum value & minimum value answer
int K;

bool isCorrect(int a, int b, char q) {
	//cout << "A : " << a << " B : " << b << " Q : " << q << "\n";
	if(q== '>') return a > b;
	if(q== '<') return a < b;
}

void dfs(int cur, int *num, bool *used) {							// cur : current digit position, num : current made number array, 
	int i;															// used : used number [ 0 ~ 9 ] check array
	long long j;
	
	//for(i= 0; i<= K; i++) cout << num[i] << " ";
	
	if(cur== K+1)
	{
		j= 1;
		long long r= 0;
		for(i= K; i>= 0; i--)
		{
			r+= num[i]*j;
			j*= 10;
		}
		maxi= maxi > r ? maxi : r;
		mini= mini < r ? mini : r;
		return ;
	}
	
	int tn[12];		
	bool tu[12];
	for(i= 0; i< 10; i++) 
	{
		for(j= 0; j< 12; j++) tn[j]= num[j];
		for(j= 0; j< 12; j++) tu[j]= used[j];
		
		if(!used[i] && isCorrect(tn[cur-1], i, in[cur-1]))
		{
			tu[i]= 1;
			tn[cur]= i;
			dfs(cur+1, tn, tu);
			tu[i]= 0;
		}
	}
}

void inquality() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int  num[12];								// save i's each digit array
	bool used[12];								// save number used check
	int i;
	long long j;
	
	memset(in, 0, sizeof(in));
	memset(used, 0, sizeof(used));
	
	cin >> K;
	for(i= 0; i< K; i++) cin >> in[i];
	
	for(i= 0; i< 10; i++)
	{
		num[0]= i;
		used[i]= 1;
		dfs(1, num, used);
		used[i]= 0;
	}

	cout << maxi << "\n";
	j= 1; 
	for(i= 0; i< K; i++) j*= 10;
	if(mini/j== 0) cout << "0";
	cout << mini << "\n";
}*/
