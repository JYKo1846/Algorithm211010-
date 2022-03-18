// BOJ 6879 interesting number 2022.03.18
/*
#include <iostream>
#include <cstring>

using namespace std;

void interestingNum() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int div[3]= {10, 12, 16};
	int ans[3];
	int i, j, k;
	bool isSame;
	
	for(i= 2990; i< 10000; i++)
	{
		int t;
		isSame= true;
		memset(ans, 0, sizeof(ans));
		
		for(j= 0; j< 3; j++)
		{
			int d= div[j];
			t= i;
			while(t!= 0)
			{
				ans[j]+= t%d;
				t/= d;
			}
			for(k= 0; k<= j; k++)
			{
				if(ans[j]!= ans[k])
				{
					isSame= false;
					break;
				}
			}
			if(!isSame) break;
		}
		for(k= 0; k< 3; k++) cout << ans[k] << " ";
		cout << "\n";
		if(isSame) cout << i << "\n";
	}
}*/
