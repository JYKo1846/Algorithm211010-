// BOJ 16953 AtoB 2022.01.24
// FIRST, VISITATION CHECK LINE WAS WRONG. I THINK  MULTIPLE VISITATION MAKE TIME OVER.
// BUT, THERE IS NO TIME OVER 
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <utility>

using namespace std;

int A, B;
queue<pair<long long, int> > q;

int bfs() {
	int i, j, num= 1;
	bool flg;
	long long fr;

	q.push({A, 1});
	
	while(!q.empty())
	{
		fr= q.front().first;
		num= q.front().second;
		q.pop();
		
		if(fr== B) return num;
		if(fr< B) 
		{
			q.push({fr*2, num+ 1});
            q.push({fr*10+ 1, num+ 1});
		}
	}
	return -1;
}

				
void AtoB() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> A >> B;
	
	cout << bfs() << "\n";
}*/
