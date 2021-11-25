// BOJ sevenDwarves 2021.11.25
// BruteForce.
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sevenDwarves() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	vector<int> nineD(9);
	vector<int> sevenD;
	int sum= 0;					// before select seven dwarves, total values of dwarves height.
	int i, j;
	
	for(i= 0; i< 9; i++) 
	{
		cin >> nineD[i];
		sum+= nineD[i];
	}
	
	bool find;					// if, find unknown dwarf => find value = 1
	for(i= 0; i< 9; i++)
	{
		find= 0;
		int ti= nineD[i];
		for(j= i+1; j< 9; j++)
		{
			int tj= nineD[j];
			if(sum - (ti+ tj)== 100)
			{
				find= 1;
				break;
			}
		}
		if(find) break;
	}
	
	for(int k= 0; k< 9; k++) 
		if(k!= i && k!= j) sevenD.push_back(nineD[k]);
		
	sort(sevenD.begin(), sevenD.end());
	for(i= 0; i< 7; i++) cout << sevenD[i] << "\n";
}*/
