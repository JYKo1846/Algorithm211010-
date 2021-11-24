// BOJ 7568 2021.11.24
// BruteForce
/*
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, int> > dat;	// each person data.
int ranking[52];				// each person ranking.

void bulk() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int tx, ty;
	int i, j;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> tx >> ty;
		dat.push_back(make_pair(tx, ty));
		ranking[i]= 1;
	}
	
	for(i= 0; i< N; i++)
	{
		int x= dat[i].first;
		int y= dat[i].second;
		for(j= i+1; j< N; j++)
		{
			int nx= dat[j].first;
			int ny= dat[j].second;
			if(x > nx && y > ny)
				ranking[j]++;
			else if(x < nx && y < ny)
				ranking[i]++;
		}
	}
	
	for(i= 0; i< N; i++) cout << ranking[i] << " ";
			
}*/
