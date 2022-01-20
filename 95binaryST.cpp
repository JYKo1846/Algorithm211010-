// BOJ 5639 binary search tree 2022.01.19
/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void srch(int cur, int lmt) {		// cur: current node's number, lmt: arrray size for search ( L or R )
	int nl= 0, i;
	
	if(cur> v.size()-1) return ;
	
	for(i= cur+1; i<= lmt; i++)
	{
		if(v[i]> v[cur]) break;
		nl++;
	}
*/	
	/*cout << "CURRENT POS : " << cur << " , CURRENT NODE : " << v[cur] << ", CURRENT LIMIT : " << lmt << " , CURRENT NEW-LIMIT : " << nl << "\n";
	cout << "LEFT SUB-TREE\n";
	for(i= cur+1; i<= cur+ nl; i++)
		cout << v[i] << "\n";
	cout << "RIGHT SUB-TREE\n";
	for(i= cur+ nl+1; i<= lmt; i++)
		cout << v[i] << "\n";
	*/
/*	
	if(nl!= 0)
	{	
		// search left tree
		srch(cur+1, cur+ nl);
	}
	
	if(cur+ nl+1 <= lmt)
		srch(cur+ nl+1, lmt);
	
	cout << v[cur] << "\n";
}

void binaryST() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	while(cin >> i)
		v.push_back(i);
	
	srch(0, v.size()-1);
}*/
