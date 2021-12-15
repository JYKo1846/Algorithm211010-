// BOJ 1120 character array 2021.12.15
// use SIMPLE BF
/*
#include <bits/stdc++.h>

using namespace std;

 

void characterArr() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string A, B;
	int i, j;
	int ans= 150;
	
	cin >> A >> B;
	
	int endA= A.length()-1;
	int dst= (B.length()-1) - endA;
	for(i= 0; i<= dst; i++)
	{
		int t= 0;						// If, need to change, t ++;
		for(j= i; j<= i+ endA; j++)		// answer will between ans, t
			if(A[j-i]!= B[j]) t++;		// Beware this part.	search A, MUST  START AT A[0] , SO NOT A[j]. A[j-i]!!
		cout << "CURRENT J: " << j- endA << ", T : " << t << "\n";
		ans= ans < t ? ans : t;
	}
	
	cout << ans << "\n";
}*/
