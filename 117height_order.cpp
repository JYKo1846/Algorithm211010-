// BOJ 2458 height order 2022.03.10
/*
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int N, M;
int nd[502][502];	//	conn[a][b]== 1 : a is lower than b. conn[b][a]== 2: b is higher than a
queue<int> q;
bool vst[502];

int bfs() {
	int i, j, ans= 0;
	int fr;
	bool know;
	
	for(i= 1; i<= N; i++) 
	{
		memset(vst, 0, sizeof(vst));
		fr= i;
		q.push(fr);
		vst[i]= 1;
		know= true;
		
		// search higher than "I" node
		while(!q.empty())
		{
			fr= q.front();
			q.pop();
			
			for(j= 1; j<= N; j++)
			{
				if(nd[fr][j]== 1 && !vst[j])
				{
					vst[j]= 1;
					q.push(j);
				}
			}
		}
		
		// search lower than "I" node
		fr= i;
		q.push(fr);
		
		while(!q.empty())
		{
			fr= q.front();
			q.pop();
			
			for(j= 1; j<= N; j++)
			{
				if(nd[fr][j]== 2 && !vst[j])
				{
					vst[j]= 1;
					q.push(j);
				}
			}
		}
		
		for(j= 1; j<= N; j++)
		{
			if(!vst[j])
			{
				know= false;
				break;
			}
		}
		
		if(know) ans++;
	}
	
	return ans;
}
		
void height_order() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> N >> M;
	
	for(int i= 0; i< M; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		nd[t1][t2]= 1;
		nd[t2][t1]= 2;
	}
	
	cout << bfs() << "\n";
}*/
