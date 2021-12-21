// BOJ 10448 Eureka number 2021.12.21
/*
#include <iostream>
#include <cstring>

using namespace std;

int num[48];

bool func(int N) {
	int tN, ttN, tttN;
	for(int i= 1; i< 45; i++) 
	{
		tN= N;
		tN-= num[i];
		for(int j= 1; j< 45; j++)
		{
			ttN= tN;
			ttN-= num[j];
			for(int k= 1; k< 45; k++)
			{
				tttN= ttN;
				tttN-= num[k];
				if(tttN== 0) return true;
			}
		}
	}
	return false;
}

void eureka() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, N;
	int i;
	for(i= 1; i< 45; i++) num[i]= (i*(i+1))/2;
	
	cout << "\n";
	cin >> T;
	for(int t= 0; t< T; t++)
	{
		cin >> N;
		cout << func(N) << "\n";
	}
}*/
