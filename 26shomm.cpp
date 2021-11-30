//BOJ 1436 Movie director Shomm 2021.11.30
// solved with Bruteforce
// int to string, (int/= 10) % 1000 , two way exists.
// If use int to string, should  #include <sstream> & stringstream variable, and ss << integer. 

/*
#include <iostream>
#include <sstream>
#include <string>
#include <limits.h>

using namespace std;

int arr[10004];

void shomm() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	*/
	/* int -> string & compare 666
	int N;
	int cur=1;			// current 666's order.
	
	cin >> N;
	for(int i= 666; i< INT_MAX; i++) {
		stringstream st;
		st << i;
		if(st.str().find("666")!= string::npos) arr[cur++]= i;
		if(cur== N+1) break;
	}
	
	cout << arr[N] << "\n";
	*/
	/*
	int N, i= 666, cnt= 1;
	
	cin >> N;
	while(1)
	{
		int t= i;
		for(; t; t/= 10)
		{
			if(t%1000== 666)
			{
				arr[cnt++]= i;
				break;
			}
		}
		i++;
		if(cnt== N+1) break;
	}
	cout << arr[N] << "\n";
	*/
//}
