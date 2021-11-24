// BOJ 2231 2021.11.23
// BruteForce. Always Beware!! over the range of array 
/*#include <iostream>
#define MAX 10000000

int constr[1000001];		// array for save constructor value. ex) constr[2]= 2's minimum constructor 

using namespace std;

void divideSum() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int i, j;
	int N;
	
	for(i= 0; i<= 1000001; i++) constr[i]= MAX;
	
	cin >> N;
	for(i= 1; i< N; i++) 
	{
		int ans= i;
		
		for(j= 1; j<= i; j*= 10)
		{
			int t= i%(10* j);
			ans+= t/ j;
		}
		if(ans> 1000000) continue;
		constr[ans]= constr[ans] < i ? constr[ans] : i;
	}
	
	if(constr[N]== MAX) constr[N]= 0;
	cout << constr[N];
}*/
