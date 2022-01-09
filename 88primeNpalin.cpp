// BOJ 1747 prime & palindrome number 2022.01.09
/*
#include <iostream>
#include <cstring>
#define MAXN 1005000

using namespace std;

int N;
bool chk[MAXN];

void primeNpalin() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	for(i= 2; i< MAXN; i++) chk[i]= 1;
	
	cin >> N;
	
	// check prime number
	for(i= 2; i<= N; i++)
		for(j= 2; j*i < MAXN; j++)
			chk[i*j]= 0;
	
	// check palindrome number
	for(i= N; i< MAXN; i++)
	{
		if(chk[i])
		{
			int rev= 0;
			for(int t= i; t> 0; t/= 10, rev*= 10)
				rev+= t%10;
			//cout << "CURRENT I, REV : " << i << ", " << rev/10 << "\n";
			//cout << "CURRENT chk[i] : " << chk[i] << "\n";
			if(i-rev/10 == 0)
			{
				cout << i << "\n";
				return ;
			}
		}
	}		
}*/
