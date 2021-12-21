// BOJ 3040 Snow White & seven dwelves 2021.12.21
/*
#include <iostream>
#include <cstring>

using namespace std;

int dwf[10];		// dwarves number
bool chk[10];		// number used check	chk[] == 0 : not used, == 1 : already used

void search() {
	for(int i= 0; i< 9; i++)
	{
		chk[i]= 1;
		for(int j= i+1; j< 9; j++)
		{
			int t= 0;
			chk[j]= 1;
			
			for(int k= 0; k< 9; k++)
				if(!chk[k]) t+= dwf[k];
			if(t== 100) return ;
			chk[j]= 0;
		}
		chk[i]= 0;
	}
}

void snowWhite() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	memset(chk, 0, sizeof(chk));
	
	for(i= 0; i< 9; i++)
		cin >> dwf[i];
		
	search();
	
	for(i= 0; i< 9; i++)
		if(!chk[i]) cout << dwf[i] << "\n";
}*/
