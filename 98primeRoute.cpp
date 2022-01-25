// BOJ 1963  primary route 2022.01.25
// MUST REMIND!! INPUT HAVE MANY TEST CASE, SHOULD INITIALIZE QUEUE !! q= queue<pair<int, int> >();
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>
#define MAXN 10002

using namespace std;

int A, B;
bool prime[MAXN];
bool vst[MAXN];
queue<pair<int, int> > q;

int bfs() {
	int i, j, fr, n;
	int rm, t;
	
	memset(vst, 0, sizeof(vst));
	
	q.push({A, 0});
	vst[A]= 1;

	while(!q.empty())
	{
		fr= q.front().first;
		n= q.front().second;
		q.pop();
		
		if(fr== B) return n;
		else
		{
			for(i= 1000; i> 0; i/= 10)
			{
				//cout << "CURRENT I : " << i << ", CURRENT FR : " << fr << "\n";
				rm= (fr/(i* 10))*(i*10) + fr%i;
				//cout << "RM : " << rm << "\n";
				for(j= 0; j< 10; j++)
				{
					t= j*i+ rm;
					//cout << t << "\n";
					if(1000< t && !prime[t] && !vst[t])
					{
						//cout << t << "\n";
						q.push({t, n+1});
						vst[t]= 1;
					}
				}
			}
		}
	}
	
	return -1;
}

void primeRoute() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j, T;
	
	memset(prime, 0, sizeof(prime));
	
	for(i= 2; i< 10000; i++)
	{
		if(prime[i]) continue;
		for(j= i+i; j< 10000; j+= i)
			prime[j]= 1;
	}
	
	cin >> T;
	while(T--)
	{
		cin >> A >> B;
		i= bfs();
		if(i== -1) cout << "Impossible\n";
		else cout << i << "\n";
		q= queue<pair<int, int> >();
	}
}
*/
