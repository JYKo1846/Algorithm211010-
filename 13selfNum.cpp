// BOJ 4673 2021.11.23
// BruteForce, submitted wrong answer a lot. because, line 24 : if(j<= 100) t= i%(10*j);.
// because, if j== 1000, t doesn't initialized.
// => erase if(j<= 100) phrase. & there is a case when answer >= 10000, then over the check[] boundary. 
/*
#include <iostream>

using namespace std;

bool check[10004]; 	// if selfNum(i) == self number S, then check[S]= 1; 

void selfNum() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int i;
	
	for(i= 0; i< 10004; i++) check[i]= 0;
	
	for(i= 1; i<= 10000; i++) 
	{
		int ans= i;
		for(int j= 1; j<= i; j*= 10)
		{
			int t;
			t= i%(10*j);
			ans+= t/ j;
		}
		if(ans> 10000) continue;
		check[ans]= 1;
	}
	int num= 0;
	for(i= 1; i< 10000; i++) 
	{
		if(!check[i])
		{ 
			cout << i << "\n";
			num++;
		}
	}
	cout <<"NUMBER : " <<  num << "\n";
}*/
