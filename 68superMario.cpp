// BOJ 2581 Super Mario 2021.12.28
/*
#include <iostream>
#include <math.h>

using namespace std;

void superMario() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int in[11];
	int lim= 100;				// answer will value what closest at limit value
	int ans= 0, i;
	
	for(i= 0; i< 10; i++)
		cin >> in[i];
	
	int t= 0;
	for(i= 0; i< 10; i++)
	{
		int bef= abs(ans-lim), aft;	// bef= |before value - limit value|
		t+= in[i];	aft= abs(t- lim);
		if(bef< aft)
		{
			bef= t;
			break;
		}
		else if(bef >= aft)
		{
			if(bef== aft) ans= ans > t ? ans : t;
			else ans= t;
		}
	}
	cout << ans << "\n";
}*/
