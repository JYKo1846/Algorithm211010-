// BOJ 1062 teach 2021.12.23
// USE DFS & BF
// spend 528ms => HOW TO REDUCE TIME ??? SEARCH AT REPEAT TIME
// CURRENT STATUS : SLOWER THAN JAVA CODE
/*
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int N, K;
int ans= 0;
string arr[52];
vector<int> exist;					// check existed alphabet
bool used[27];						// check used alphabet array
	
void find() {						// find readable words number

	bool noread;					// 1: cannot readable. 0: readable
	int tA= 0;						// temporary readable words number
	for(int i= 0; i< N; i++)
	{
		noread= 0;
		for(int j= 0; j< arr[i].length(); j++)
		{
			int t= arr[i][j]- 'a';
			if(!used[t])
			{
				noread= 1;
				break;
			}
		}
		if(!noread) tA++;
	}
	
	ans= ans > tA ? ans: tA;
}

void search(int cN,int a) {		// cur: current selected alphabet number, a: current alphabet's ASCII number
	if(cN== K-5 ||  a== (exist.size()))				
	{
		find();
		return ;
	}
	
	for(int i= a; i< exist.size(); i++)
	{
		int t= exist[i];
		if(!used[t])
		{
			used[t]= 1;
			search(cN+1, i+1);
			used[t]= 0;
		}
	}
}

void teach() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	memset(used, 0, sizeof(used));
	
	cin >> N >> K;
	
	for(i= 0; i< N; i++)
		cin >> arr[i];
		
	if(K>= 5)							// "a,n,t,i,c" should must checked 
	{									// K < 5 , can't read all of word
		used['a'-'a']= 1;
		used['n'-'a']= 1;
		used['t'-'a']= 1;
		used['i'-'a']= 1;
		used['c'-'a']= 1;
		
		for(i= 0; i< N; i++)
		{
			for(j= 0; j< arr[i].length(); j++)
			{
				int t= arr[i][j]-'a';
				if(!used[t]) 
				{
					exist.push_back(t);
					used[t]= 1;
				}
			}
		}
		
		memset(used, 0, sizeof(used));
		used['a'-'a']= 1;
		used['n'-'a']= 1;
		used['t'-'a']= 1;
		used['i'-'a']= 1;
		used['c'-'a']= 1;
		
		"==========\n";
		for(i= 0; i< exist.size(); i++) cout << exist[i] << " ";
		cout << "\n";
		"==========\n";
		
		search(0, 0);
	}
	
	cout << ans << "\n";
}*/
