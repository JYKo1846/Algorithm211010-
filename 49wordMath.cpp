// BOJ 1339 word math 2021.12.14
/*
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

bool usedA[28];			// used[1 ~ 26] A ~ Z using check.
bool usedN[11];			// used[0 ~ 9 ] number use check
vector<char> alp;		// current used alphabet
int num[28];			//  num[1 ~ 26] A ~ Z 's number
string arr[12];			// words array
int ans= 0;				// answer
int N;				// N : number of word array

void calc() {			// calculate current alphabet combination's result
	int t= 0;
	
	for(int i= 0; i< N; i++)
	{
		int n= 1;
		for(int j= arr[i].length()-1; j>= 0; j--)
		{
			t+= num[(arr[i][j]-'A')]* n;
			n*= 10;
		}
	}
	//cout << "calc()'s result : " << t << "\n";
	ans= ans > t ? ans : t;
}

void dfs(int cur) {		// cur : current setting alphabet number
	int i, j;
	
	if(cur== alp.size())
	{
		calc();
		return ;
	}
	
	for(i= 9; i>= 0; i--)
	{
		if(!usedN[i])
		{
			usedN[i]= 1;
			num[alp[cur]-'A']= i;
			dfs(cur+1);
			usedN[i]= 0;
		}
	}
}
		

void wordMath() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	cin >> N;
	
	memset(usedA, 0, sizeof(usedA));
	memset(usedN, 0, sizeof(usedN));
	for(i= 0; i< N; i++)
	{
		string t;
		cin >> t;
		for(j= 0; j< t.length(); j++) 
		{
			if(usedA[t[j]-'A']) continue;
			usedA[t[j]-'A']= 1;
			alp.push_back(t[j]);
		}
		arr[i]= t;
	}
	
	for(i= 0; i< 27; i++)
		if(usedA[i]) cout << (char)(i+'A') << " ";
	cout << "\n";

	for(i= 0; i< N; i++)
		cout << arr[i] << "\n";
		
	for(i= 0; i< alp.size(); i++)
		cout << alp[i] << " ";
	cout << "\n";
	
	dfs(0);
	
	for(i= 0; i< 26; i++)
		cout << (char)(i+'A') << " ";
	cout << "\n";
	for(i= 0; i< 26; i++)
		cout << num[i] << " ";
	cout << "\n";
	cout << ans << "\n";
}
*/
