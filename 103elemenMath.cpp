// BOJ 2702 elemnetary math 2022.01.26
// THINKING WAS NOT REACHED TO LCM IS BIGGER THAN 1000.
// SO, I CHANGED LCM LIMIT 1000 -> 10000005. SO I ACCEPTED
// ALWAYS BEWARE OF MAXIMUM VALUE
/*
#include <iostream>
#include <cstring>
#define MAXN 10000005

using namespace std;

void calc(int a, int b) {
	bool chk[MAXN];
	int i;
	
	memset(chk, 0, sizeof(chk));
	
	// calculate LCM
	for(i= 1; a*i<= MAXN; i++)
		chk[a*i]= 1;
	
	for(i= 1; b*i<= MAXN; i++)
	{
		if(chk[b*i]) 
		{	
			cout << b*i << " ";
			break;
		}
	}

	// calculate GCF
	i= a< b ? a : b;
	for(;i> 0; i--)
	{
		if(a%i== 0 && b%i== 0) 
		{
			cout << i << "\n";
			break;
		}
	}
}

void elemenMath() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int a, b, T;
	
	cin >> T;
	while(T--)
	{
		cin >> a >> b;
		calc(a, b);
	}
}*/
