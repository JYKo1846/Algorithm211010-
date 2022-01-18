// BOJ 2502 tiger eat rice cake 2022.01.18
/*
#include <iostream>
#include <cstring>
#define BEF 1000000

using namespace std;

int n[32];
int D, K;

void riceCakeT() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, tk;
	
	cin >> D >> K;
	for(i= 0; i< D; i++) n[i]= BEF;
	
	for(i= K/2; i> 0; i--)
	{
		n[D]= K;
		if(i> K-i)
			n[D-1]= i;
		else
			n[D-1]= K-i;

		tk= 2;
		while(n[1]== BEF)
		{
			if(D-tk> 0)
			{
				int t= n[D-(tk-2)] - n[D-(tk-1)];
				if(t< 0) break;
				n[D-tk]= t;
				tk++;
			}
		}
		
		for(j= 1; j<= D; j++) cout << n[j] << " ";
		cout << "\n";
		
		
		if(n[1]!= BEF)
		{
			cout << n[1] <<"\n" << n[2] << "\n";
			return ;
		}
		
		for(j= 1; j<= D; j++) n[j]= BEF;
	}
	for(i= 1; i<= D; i++) cout << n[i] << " ";
	cout << "\n";
	cout << n[1] <<"\n" << n[2] << "\n";
		
}*/
