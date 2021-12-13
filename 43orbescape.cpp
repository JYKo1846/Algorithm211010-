// BOJ 13460 orb escape 2021.12.10
// USE DFS
// CURRENT PROBLEM : PRINT ANSWER WHEN RED & BLUE INTO THE HOLE AT THE SAME TIME => IF IN HOLE, RED ORB & BLUE ORB POSITION -> 0, 0
// & DFS TERMINATE DEPTH IS 11
// IMPLY DFS => 204ms. Later than Python. 
// IMPLY BFS =>   0ms.
// DIFFERENCE IS VISITATION CHECK. IF, DFS ALSO CHECK VISIT, TIME WILL SPEND LESS.
// USE VECTOR FOR VISITATION CHECK
// GOOD NICE
/*
#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

struct pos{
	int rb_x;					// red orb's position
	int rb_y;
	int bb_x;					// blue orb's position
	int bb_y;					
	int mv;						// current tilt time
}typedef pos;

int N, M;						// N : height, M : width
int brd[12][12];				// 0 : blank, 1: red orb, 2: blue orb, 6: wall, 9: hole 
vector<pair<int, int> > v(2);	// v[0] : red orb position, v[1] : blue orb position
vector<pos> vst;				// visitation check array
pos st;							// start orbs position
int hole_x, hole_y;				// hole position
int ans= 20;					// minimum board moved time

bool compare(pos src) {			// If, position was visited, return true; else false;
	int ox1= src.rb_x;	int ox2= src.bb_x;
	int oy1= src.rb_y;	int oy2= src.bb_y;
	
	for(int i= 0; i< vst.size(); i++)
	{
		pos t= vst[i];
		int x1= t.rb_x;	int x2= t.bb_x;
		int y1= t.rb_y;	int y2= t.bb_y;
		if((ox1== x1) && (ox2== x2) && (oy1== y1) && (oy2== y2)) return true;
	}
	return false;
}


pair<int, int> tilt(pair<int, int> mb, pair<int, int> ab, int dir) {	// mb : will move orb status, ab : already moved orb, 
	int x= mb.first;													// dir : 0: ^, 1: >, 2: down, 3: <
	int y= mb.second;
	int a_x= ab.first;
	int a_y= ab.second;
	pair<int, int> res;
	int i;
	
	// tilt ^
	if(dir== 0)
	{
		for(i= x-1; i>= 0; i--)
		{
			if(brd[i][y]== 6 ||
			((a_x== i) && (a_y== y)))
			{
				res.first= i+1;
				res.second= y;
				break;
			}
			if(brd[i][y]== 9)											// orb is in the hole
			{
				res.first= 0;
				res.second= 0;
				break;
			}
		}
	}
	
	// tilt >
	else if(dir== 1)
	{
		for(i= y+1; i< M; i++)
		{
			if(brd[x][i]== 6 ||
			((a_x== x) && (a_y== i)))
			{
				res.first= x;
				res.second= i-1;
				break;
			}
			if(brd[x][i]== 9)
			{
				res.first= 0;
				res.second= 0;
				break;
			}
		}
	}
		
	// tilt down
	else if(dir== 2)
	{
		for(i= x+1; i< N; i++)
		{
			if(brd[i][y]== 6 ||
			((a_x== i) && (a_y== y)))
			{
				res.first= i-1;
				res.second= y;
				break;
			}
			if(brd[i][y]== 9)
			{
				res.first= 0;
				res.second= 0;
				break;
			}
		}
	}
	
	// tilt <
	else if(dir== 3)
	{
		for(i= y-1; i>= 0; i--)
		{
			if(brd[x][i]== 6 ||
			((a_x== x) && (a_y== i)))
			{
				res.first= x;
				res.second= i+1;
				break;
			}
			if(brd[x][i]== 9)
			{
				res.first= 0;
				res.second= 0;
				break;
			}
		}
	}
	return res;	
}
 
void bfs() {
	int i, j;
	pair<int, int> orb;
	queue<pos> q;
	
	q.push(st);
	vst.push_back(st);
	while(!q.empty())
	{
		pos fr= q.front();
		pos t;
		
		pair<int, int> rb;
		rb.first= fr.rb_x; rb.second= fr.rb_y;
		pair<int, int> bb;
		bb.first= fr.bb_x; bb.second= fr.bb_y;
	
		if(fr.mv== 11) 
		{
			q= queue<pos>();
			break;
		}
		
		if(((rb.first== 0) && (rb.second== 0)) && ((bb.first!= 0) && (bb.second!= 0)))
		{
			cout << "CURRENT ORB POSITION : " << rb.first << ", " << rb.second << " / " << bb.first << ", " << bb.second << "\n";
			cout << "FR.MV : " << fr.mv << "\n";
			ans= ans < fr.mv ? ans : fr.mv;
			break;
		}
		
		pair<int, int> trb;
		pair<int, int> tbb;
		
		q.pop();
		
		for(int dir= 0; dir< 4; dir++)
		{
			// tilt ^
			if((bb.first < rb.first) && (bb.second== rb.second))
			{
				if(dir== 0)
				{
					tbb= tilt(bb, rb, dir);
					trb= tilt(rb, tbb, dir);
					t.rb_x= trb.first;	t.rb_y= trb.second;
					t.bb_x= tbb.first;	t.bb_y= tbb.second;
					t.mv= fr.mv+1;
					if(!compare(t))
					{
						cout << "CURRENT ORB POSITION : " << trb.first << ", " << trb.second << " / " << tbb.first << ", " << tbb.second << "\n";
						cout << "CURRENT TILT TIME : " << t.mv << "\n";
						vst.push_back(t);
						q.push(t);
					}
					continue;
				}
			}
			
			// tilt >
			if((bb.first== rb.first) && (bb.second > rb.second))
			{
				if(dir== 1)
				{
					tbb= tilt(bb, rb, dir);
					trb= tilt(rb, tbb, dir);
					t.rb_x= trb.first;	t.rb_y= trb.second;
					t.bb_x= tbb.first;	t.bb_y= tbb.second;
					t.mv= fr.mv+1;
					if(!compare(t))
					{
						cout << "CURRENT ORB POSITION : " << trb.first << ", " << trb.second << " / " << tbb.first << ", " << tbb.second << "\n";
						cout << "CURRENT TILT TIME : " << t.mv << "\n";
						vst.push_back(t);
						q.push(t);
					}
					continue;
				}
			}
			
			// tilt down
			if((bb.first> rb.first) && (bb.second== rb.second))
			{
				if(dir== 2)
				{
					tbb= tilt(bb, rb, dir);
					trb= tilt(rb, tbb, dir);
					t.rb_x= trb.first;	t.rb_y= trb.second;
					t.bb_x= tbb.first;	t.bb_y= tbb.second;
					t.mv= fr.mv+1;
					if(!compare(t))
					{
						cout << "CURRENT ORB POSITION : " << trb.first << ", " << trb.second << " / " << tbb.first << ", " << tbb.second << "\n";
						cout << "CURRENT TILT TIME : " << t.mv << "\n";
						vst.push_back(t);
						q.push(t);
					}
					continue;
				}
			}
			
			// tilt <
			if((bb.first== rb.first) && (bb.second < rb.second))
			{
				if(dir== 3)
				{
					tbb= tilt(bb, rb, dir);
					trb= tilt(rb, tbb, dir);
					t.rb_x= trb.first;	t.rb_y= trb.second;
					t.bb_x= tbb.first;	t.bb_y= tbb.second;
					t.mv= fr.mv+1;
					if(!compare(t))
					{
						cout << "CURRENT ORB POSITION : " << trb.first << ", " << trb.second << " / " << tbb.first << ", " << tbb.second << "\n";
						cout << "CURRENT TILT TIME : " << t.mv << "\n";
						vst.push_back(t);
						q.push(t);
					}
					continue;
				}
			}
			
			trb= tilt(rb, bb, dir);
			tbb= tilt(bb, trb, dir);
			t.rb_x= trb.first;	t.rb_y= trb.second;
			t.bb_x= tbb.first;	t.bb_y= tbb.second;
			t.mv= fr.mv+1;
			if(!compare(t))
			{
				cout << "CURRENT ORB POSITION : " << trb.first << ", " << trb.second << " / " << tbb.first << ", " << tbb.second << "\n";
				cout << "CURRENT TILT TIME : " << t.mv << "\n";
				vst.push_back(t);
				q.push(t);
			}
		}
	}
}
*/	
/*						// debugging value " dir"
void dfs(int mv, vector<pair<int, int> > op) {		// mv : board moved times, op : orb position
	int rb_x= op[0].first;							// rb : red orb x-pos, y-pos
	int rb_y= op[0].second;
	int bb_x= op[1].first;							// bb : blue orb x-pos, y-pos
	int bb_y= op[1].second;
	int tb_x, tb_y;									// tb : temporary orb position
	int i, j;
	
	//cout << "CURRENT DIR : " << dir << ", MV : " << mv << "\n";
	//cout << "CURRENT RED ORB : " << rb_x <<", " << rb_y << " / BLUE ORB : " << bb_x << ", " << bb_y << "\n";
	
	if(mv== 11) return ;
	if((bb_x== 0) && (bb_y== 0)) return ;
	if((rb_x== 0) && (rb_y== 0)) 
	{
		cout << "ANSWER RED ORB : " << rb_x <<", " << rb_y << " / BLUE ORB : " << bb_x << ", " << bb_y << "\n";
		cout << "MOVE TIME : " << mv << "\n";
		ans= ans < mv ? ans : mv;
		return ;
	}
	
	vector<pair<int, int> > top(2);				// top : temporary moved orbs position

	for(int dir= 0; dir< 4; dir++)
	{
		if((bb_x< rb_x) && (bb_y== rb_y))
		{
			if(dir== 0)								// move ^
			{
				top[1]= tilt(op[1], op[0], dir);
				top[0]= tilt(op[0], top[1], dir);
				//cout << "CURRENT RED ORB : " << top[0].first <<", " << top[0].second << " / BLUE ORB : " << top[1].first << ", " << top[1].second << "\n";
				dfs(mv+1, top);
				continue;
			}
		}
		
		if((bb_y> rb_y) && (bb_x== rb_x))
		{
			if(dir== 1)								// move >
			{
				top[1]= tilt(op[1], op[0], dir);
				top[0]= tilt(op[0], top[1], dir);
				dfs(mv+1, top);
				continue;
			}
		}
		
		if((bb_x> rb_x) && (bb_y== rb_y))
		{	
			if(dir== 2)								// move down
			{
				top[1]= tilt(op[1], op[0], dir);
				top[0]= tilt(op[0], top[1], dir);
				dfs(mv+1, top);
				continue;
			}
		}
		
		if((bb_y< rb_y) && (bb_x== rb_x))
		{	
			if(dir== 3)								// move <
			{
				top[1]= tilt(op[1], op[0], dir);
				top[0]= tilt(op[0], top[1], dir);
				dfs(mv+1, top);
				continue;
			}
		}
			
		top[0]= tilt(op[0], op[1], dir);
		top[1]= tilt(op[1], top[0], dir);
		dfs(mv+1, top);
	}
}*/
/*
void orbescape() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N >> M;
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
		{
			char t;
			cin >> t;
			if(t=='.') brd[i][j]= 0;
			if(t=='O') { brd[i][j]= 9; hole_x= i; hole_y= j; }
			if(t=='#') brd[i][j]= 6;
			if(t=='R') { st.rb_x= i; st.rb_y= j; st.mv= 0;}
			if(t=='B') { st.bb_x= i; st.bb_y= j; }
		}
	}
	
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< M; j++)
			cout << brd[i][j] << " ";
		cout << "\n";
	}
	
	//bfs();
	//dfs(0, v);
	if(ans== 20) ans= -1;
	cout << ans << "\n";
}*/
