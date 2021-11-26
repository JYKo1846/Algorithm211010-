/*//BOJ 9663 2021.11.26
// like DFS, use recursive function for search.
#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool> > chess(16, vector<bool>(16, 1));
// In chess board, if chess[i][j]== 1, It's available space to down the queen.
	
vector<vector<bool> > check(int x, int y, int N, vector<vector<bool> > bd) {
	int i, j;
	
	//cout << "\n=======CHECK CHECK()======\n";
	for(i= 0; i< N; i++)
	{
		bd[x][i]= 0;								// erase ------ avail.
		bd[i][y]= 0;								// erase || avail.
	}
	for(i= 1; i< N; i++)
	{
		int px= x+ i;
		int mx= x- i;
		int py= y+ i;
		int my= y- i;
		
		if(mx>= 0)
		{
			if(my>= 0) bd[mx][my]= 0;			// erase <-\ avail.
			if(py< N) bd[mx][py]= 0;				// erase ->/ avail.
		}
		if(px< N)
		{
			if(my>= 0) bd[px][my]= 0;			// erase <-/ avail.
			if(py< N) bd[px][py]= 0;				// erase ->\ avail.
		}
	}
	for(i= 0; i< N; i++) 
	{
		for(j= 0; j< N; j++) cout << bd[i][j] << " ";
		cout <<"\n";
	//}*/
	/*return bd;
}

int search(int N, int x, int y, int curN, vector<vector<bool> > before) {			// curN : current number of placed pieces.
	int i, j, k, l;
	int res= -1;
	vector<vector<bool> > bd;										// if placed N pieces of queen, res will 1.
	
	cout << "\n=======2) SEARCH() BEFORE[][]========\n";
	for(i= 0; i< N; i++)
	{
		for(j= 0; j< N; j++) cout << before[i][j] << " ";
		cout << "\n";
	}
	cout << "\n=====CURRENT QUEEN NUMBER : " << curN << "======\n";
	
	if(curN == N) return 1;								// if all pieces are placed, then return 1;
	else if(x+1 < N) 
	{
		for(j= 0; j< N; j++)
		{
			if(before[x+1][j])
			{
				bd= check(x+1, j, N, before);
				cout << "\n=======3) AFTER CHECK() BD[][]========\n";
				for(k= 0; k< N; k++) 
				{
					for(l= 0; l< N; l++) cout << bd[k][l] << " ";
					cout <<"\n";
				} 
				cout << "\n";
				cout << "\n=======4) AFTER CHECK() BEFORE[][]======\n";
				for(k= 0; k< N; k++)
				{
					for(l= 0; l< N; l++) cout << before[k][l] << " ";
					cout << "\n";
				}
				res= search(N, x+1, j, curN+1, bd);
			}
		}
	}
	if(res== -1) return 0;
	return res;
}

void queen() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	int i, j, k;
	int ans= 0;
	vector<vector<bool> > bd;
	
	cin >> N;
	for(i= 0; i< N; i++)				// first, place piece at chess[0][i], and erase avail chess board. 
	{		
		bd= check(0, i, N, chess);
		cout << "\n=======1) QUEEN() BD[][]=======\n";
		for(j= 0; j< N; j++)
		{
			for(k= 0; k< N; k++) cout << bd[j][k];
			cout << "\n";
		}
		ans+= search(N, 0, i, 1, bd);
	}
	cout << ans << "\n";
}*/
