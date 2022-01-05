// BOJ 17472 make bridge 2 2022.01.05
// search map for numbering island.
// and, make bridge and numbering it for combination
// at last, make bridge's combination & check it's valiable and minimum length
// why i wrong so much => In bfs(), 1< len && len < conn[st][dst], <= dst is not initialized. OMG
// ALWAYS VARIABLE INITIALIZATION IS MOST IMPORTANT MONITORING TARGET
/*
#include <iostream>
#include <cstring>
#include <utility>
#include <queue>

using namespace std;

struct bdg{
	int st;
	int dst;
	int len;
}typedef bdg;

int maps[102][102];
int conn[8][8];						// for remove duplicated bridge
bool used[100];						// check bridge used
bool comp[8];						// check island connected
vector<bdg> v;						// vector for bridge combination
int N, M;
int islN;
int ans= 6000;



bool check() {						// check all island connected
	int i;
	bdg t;
	queue<int> isgo;
	memset(comp, 0, sizeof(comp));
	
	for(i= 0; i< v.size(); i++)
	{
		if(used[i])
		{
			isgo.push(v[i].st);
			comp[v[i].st]= 1;
			break;
		}
	}
		
	
	while(!isgo.empty())
	{
		int fr= isgo.front();
		isgo.pop();
		
		for(i= 0; i< v.size(); i++)
		{
			if(used[i])
			{
				t= v[i];
				if(t.st== fr && !comp[t.dst])
				{
					isgo.push(t.dst);
					comp[t.dst]= 1;
				}
				if(t.dst== fr && !comp[t.st])
				{
					isgo.push(t.st);
					comp[t.st]= 1;
				}
			}
		}
	}
		
	
	for(i= 1; i<= islN; i++)
		if(!comp[i]) return false;
	
	return true;
}

void select(int cur, int curL) {	// find optimized bridges for connect all islands
	int i, j;						// cur : current used bridge number, curL : current bridges length
	
	if(curL> ans) return ;
	
	
	if(check())
	{
		/*
		cout << "CURRENT curL : " << curL << "\n";
		
		for(i= 0; i< v.size(); i++) cout << used[i] << " ";
		cout << "\n";
		*/
/*		
		ans= ans < curL ? ans: curL;
		return ;
	}
	
	for(i= cur+1; i< v.size(); i++)
	{
		if(!used[i])
		{
			used[i]= 1;
			select(i, curL+ v[i].len);
			used[i]= 0;
		}
	}
}

void bfs(bool md) {					// md== 0, numbering island. md== 1, make bridge
	bool vst[102][102];
	int dx[4]= {-1, 0, 1, 0};
	int dy[4]= {0, 1, 0, -1};
	queue<pair<int, int> > q;
	int i, j, k;
	int nx, ny;
	islN= 1;
	memset(vst, 0 , sizeof(vst));

	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			if(maps[i][j]!= 0 && !vst[i][j])
			{
				q.push({i, j});
				if(!md) maps[i][j]= islN;
				vst[i][j]= 1;
				
				while(!q.empty())
				{
					pair<int, int> fr= q.front();
					int x= fr.first;
					int y= fr.second;
					q.pop();
					
					for(k= 0; k< 4; k++)
					{
						int st= maps[x][y], dst, len;
						int b;
						bdg t;
						nx= x+ dx[k];
						ny= y+ dy[k];
					
						if(nx< 0 || ny< 0 || nx>= N || ny>= M) continue;
						if(!vst[nx][ny] && (maps[nx][ny]!= 0))
						{
							q.push({nx, ny});
							vst[nx][ny]= 1;
							if(!md) maps[nx][ny]= islN;
						}
						
						// find bridge
						if(md && maps[nx][ny]== 0)
						{
							len= 1;
							if(k== 0)
							{
								for(b= nx; b>= 0; b--)
								{
									
									if(maps[b][ny]!= 0)
									{
										len--;
										dst= maps[b][ny];
										if(1< len && len< conn[st][dst]) 
										{
											conn[st][dst]= len;
											conn[dst][st]= len;
										}
										break;
									}
									len++;
								}
							}
							if(k== 1)
							{
								for(b= ny; b< M; b++)
								{
									if(maps[nx][b]!= 0)
									{
										len--;
										dst= maps[nx][b];
										if(1< len && len< conn[st][dst]) 
										{
											conn[st][dst]= len;
											conn[dst][st]= len;
										}
										break;
									}
									len++;
								}
							}
							if(k== 2)
							{
								for(b= nx; b< N; b++)
								{
									if(maps[b][ny]!= 0)
									{
										len--;
										dst= maps[b][ny];
										if(1< len && len< conn[st][dst]) 
										{
											conn[st][dst]= len;
											conn[dst][st]= len;
										}
										break;
									}
									len++;
								}
							}
							if(k== 3)
							{
								for(b= ny; b>= 0; b--)
								{
									if(maps[nx][b]!= 0)
									{
										len--;
										dst= maps[nx][b];
										if(1< len && len< conn[st][dst]) 
										{	
											conn[st][dst]= len;
											conn[dst][st]= len;
										}
										break;
									}
									len++;
								}
							}
						}
					}
				}
				islN++;
			}
		}
	}
	islN--;
}
							
					
void makeBridge2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N >> M;
	
	memset(conn, 0, sizeof(conn));
	memset(used, 0, sizeof(used));
	
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			cin >> maps[i][j];
	
	bfs(0);
	
	for(i= 1; i<= islN; i++)
		for(j= 1; j<= islN; j++)
			conn[i][j]= 200;
	
	bfs(1);
*/	
	/*
	cout << "\n";
	for(i= 1; i<= islN; i++)
	{
		for(j= 1; j<= islN; j++)
		{
			if(conn[i][j]== 200) cout << "0";
			else cout << conn[i][j];
			cout << " ";
		}
		cout << "\n";
	}
	*/
/*	
	bdg t;
	for(i= 1; i<= islN; i++)
	{
		for(j= i; j<= islN; j++)
		{
			if(conn[i][j]!= 200)
			{
				t.st= i; t.dst= j; t.len= conn[i][j];
				v.push_back(t);
			}
		}
	}
	
	for(i= 0; i< v.size(); i++)
	{
		used[i]= 1;
		select(i, v[i].len);
		used[i]= 0;
	}
	
	if(ans== 6000) ans= -1;
	cout << ans << "\n";
	
}*/
