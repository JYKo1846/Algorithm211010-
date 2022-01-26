// BOJ 1969 DNA 2022.01.26
// NO LCS PROBLEM.
/*
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

vector<string> v;
vector<char> ans;
int alpha[28];
int N, M;

int dp() {
	int i, src, res= 0;
	
	for(src= 0; src< v.size(); src++)
	{
		for(i= 0; i< M; i++)
			if(ans[i]!= v[src][i]) res++;
	}
	
	return res;
}

void DNA() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, maxi;
	char tA;
	string t;
	
	cin >> N >> M;
	for(i= 0; i< N; i++)
	{
		cin >> t;
		v.push_back(t);
	}
	
	for(i= 0; i< M; i++)
	{
		memset(alpha, 0, sizeof(alpha));
		maxi= -1;
		for(j= 0; j< v.size(); j++)
			alpha[v[j][i]- 'A']++;
		
		for(j= 0; j< 27; j++)
		{
			if(alpha[j]> maxi)
			{
				maxi= alpha[j];
				tA= j+'A';
			}
		}
		ans.push_back(tA);
	}
	
	for(i= 0; i< ans.size(); i++) cout << ans[i];
	cout << "\n" << dp() << "\n";
}*/
