// BOJ 2615 Omok 2022.03.11
// In for() loop, (k< 8 && vst[k][i][j]) => k< 8; ... if(vst[k][i][j]) continue; is important.
// and, 3rd- dimensional array is a key 
// Why it was wrong dfs() one search & other direction from first position.
// It was very complicated code.
// But, I did it!!!! 
/*
#include <iostream>
#include <cstring>

using namespace std;

struct tkn{
	int x;
	int y;
}typedef tkn;

int bd[23][23];
int dx[8]= {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8]= {0, 1, 1, 1, 0, -1, -1, -1};
bool vst[8][23][23];
bool isFind= false;
tkn mlt;

tkn dfs(tkn cur, int conn, int dir, tkn ml) {
	tkn t;
	t.x= -2; t.y= -2;
	
	cout << "	IN DFS, CURRENT DIRECTION : " << dir << ", CURRENT POS : " << cur.x << " / " << cur.y << "\n";
	if(isFind || conn> 5)	//termination code
	{
		t.x= 22;	t.y= 22;
		return t;
	}
	
	// check board next direction's token exists
	int nx, ny;
	nx= cur.x+ dx[dir];
	ny= cur.y+ dy[dir];
	
	if(nx< 0 || nx> 20 || ny< 0 || ny> 20) 
	{
		t.x= 22;	t.y= 22;
		return t;
	}
	
	if(bd[nx][ny]== bd[cur.x][cur.y] && !vst[dir][nx][ny])
	{
		vst[dir][nx][ny]= 1;
		if(ny<= ml.y)
		{
			if(dir== 0|| dir== 4)
				ml.x= ml.x < nx ? ml.x : nx;
			else
				ml.x= nx; 
			ml.y= ny;
		}
		t.x= nx; t.y= ny;
		t= dfs(t, conn+1, dir, ml);
	}
	
	if((conn== 5) && (t.x== -2 && t.y== -2)) 
	{
		cout << "CURRENT CONNECTION NUM : " << conn << "\n";
		cout << "CURRENT POS : " << cur.x << " / " << cur.y << "\n";
		mlt= ml;
		return cur;
	}
	*/
	/*cout << "START TO FIND OTHER DIRECTION AT " << cur.x << " / " << cur.y << "\n";
	// check remained direction's of token connection
	ml.x= cur.x; 
	ml.y= cur.y;
	for(int i= 0; i< 8; i++)
	{
		nx= cur.x+ dx[i];
		ny= cur.y+ dy[i];
		
		cout << "	DIR " << i << " NEW POSITION " << nx << " / " << ny << "\n";
		
		if(nx< 1 || nx> 19) continue;
		if(ny< 1 || ny> 19) continue;
		if((bd[nx][ny]== bd[cur.x][cur.y]) && !vst[i][nx][ny])
		{
			vst[i][nx][ny]= 1;
			if(ny< ml.y)
			{
				ml.x= nx;
				ml.y= ny;
			}
			t.x= nx; t.y= ny;
			t= dfs(t, 2, i, ml);
		}
	
		if((t.x!= -2 && t.y!= -2) && (t.x!= 22 && t.y!= 22))
		{
			return t;
		}
		
		
	}*/
	/*
	return t;
}

	
void Omok() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	tkn res, Tres, t, mt;
	
	memset(vst, 0, sizeof(vst));
	
	for(i= 1; i< 20; i++)
		for(j= 1; j< 20; j++)
			cin >> bd[i][j];

	Tres.x= 21; Tres.y= 21;
	
	for(i= 1; i< 20; i++)
	{
		for(j= 1; j< 20; j++)
		{
			if(isFind) break;
			
			if(bd[i][j]!= 0)
			{
				mt.x= i; mt.y= j;
				for(int k= 0; k< 8; k++)
				{
					if(vst[k][i][j]) continue;
					
					vst[k][i][j]= 1;
					int nx= i+ dx[k];
					int ny= j+ dy[k];
					
					if(nx< 1 || nx> 19) continue;
					if(ny< 1 || ny> 19) continue;
					if(bd[nx][ny]== bd[i][j] && !vst[k][nx][ny])
					{
						
						if(ny<= j)
						{
							if(k== 0|| k== 4)
								mt.x= mt.x < nx ? mt.x : nx;
							else
								mt.x= nx; 
							mt.y= ny;
						}
						vst[k][nx][ny]= 1;
						t.x= nx;
						t.y= ny;
						cout << "START SEARCH AT : " << i << " / " << j << "\n";
						Tres= dfs(t, 2, k, mt);
						if((Tres.x!= 22 && Tres.y!= 22) && (Tres.x!= -2 && Tres.y!= -2)) 
						{
							res= Tres;
							isFind= true;
							break;
						}
					}
				}
			}
		}
	}
	
	if(Tres.x== -2 && Tres.y== -2)
	{
		Tres.x= 21; Tres.y= 21;
	}
	if(Tres.x== 21 && Tres.y== 21) res= Tres;
	
	cout << bd[res.x][res.y] << "\n";
	if(bd[res.x][res.y]!= 0)
		cout << mlt.x << " " << mlt.y << "\n";
}*/
