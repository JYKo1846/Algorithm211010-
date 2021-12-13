// BOJ 2501 measure 2021.12.13
/*
#include <iostream>
#include <vector>

using namespace std;

void measure() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N, K;
	vector<int> v;				// vector for save N's measure
	
	cin >> N >> K;
	
	for(int i= 1; i<= N; i++)
		if((N%i)== 0) v.push_back(i);
	
	if(K > v.size()) cout << "0\n";	
	else cout << v[K-1] << "\n";
}*/
