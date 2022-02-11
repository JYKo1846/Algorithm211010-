// BOJ 2304 storage roof polygon 2022.02.11
// 1st Try SUCCESS 0ms. before commit, answer value was 0, reason was line 22, line 35, "return" was absent.
// so, reproduce this code tonight.
/*
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int> > v;

int calc(int curH, int curP, int ans)	 {		// curH: current highest poll's height.
	int i, j;									// curP: current Poll's number.  ans: current answer area value

	if(curP== v.size()-1) return ans+curH;
	
	// search larger poll
	for(i= curP+1; i< v.size(); i++)
		if(v[i].second>= curH)
			return calc(v[i].second, i, ans+ ((v[i].first- v[curP].first)* curH));
	
	int smr= -1, nxtP= -1;
	// find next largest poll 
	for(i= curP+1; i< v.size(); i++)
	{
		if(v[i].second >= smr)
		{
			smr= v[i].second;
			nxtP= i;
		}
	}

	return calc(smr, nxtP, ans+ curH+ smr*(v[nxtP].first-v[curP].first-1));
}

void storeRoof() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, x, y;
	
	cin >> N;
	for(i= 0; i< N; i++)
	{
		cin >> x >> y;
		v.push_back({x, y});
	}
	
	sort(v.begin(), v.end());

	cout << calc(v[0].second, 0, 0) << endl;
}*/
