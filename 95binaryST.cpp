// BOJ 5639 binary search tree 2022.01.19

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void srch(int cur, int lmt) {		// cur: current node's number, lmt: arrray size for search ( L or R )
	int nl= 0, i;
	
	for(i= cur+1; i<= lmt; i++, nl++)
		if(v[i]> v[cur]) break;
	
	cout << "LEFT SUB-TREE\n";
	for(i= cur+1; i<= nl; i++)
		cout << v[i] << "\n";
	cout << "RIGHT SUB-TREE\n";
	for(i= nl+1; i<= lmt; i++)
		cout << v[i] << "\n";
	cout << "CURRENT NODE : " << v[cur] << "\n";
	if(nl!= 0)
	{	
		// search left tree
		srch(cur+1, nl);
		
		// search right tree
		srch(nl+1, lmt);
	}
	cout << v[cur] << "\n";
}

void binaryST() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	while(cin >> i)
		v.push_back(i);
	
	cout << "V.SIZE() : " << v.size() << "\n";
	srch(0, v.size()-1);
}
