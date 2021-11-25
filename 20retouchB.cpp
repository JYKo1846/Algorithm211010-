// BOJ 1018 retouch Chess Board 2021.11.25
// No need to search, jush compare with answer sheet.
// I imply this use Bruteforce full search.

/*#include <iostream>

using namespace std;

char board[2][8][8]= {{			// answer board 1
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
},	
	{{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
	{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
	{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
}};

char inputB[52][52];			// input board


void retouchB() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	int i, j;
	int ans= 2550;
	
	for(i= 0; i< 52; i++) for(j= 0; j< 52; j++) inputB[i][j]= 0;
	
	cin >> N >> M;
	for(i= 0; i< N; i++)
		for(j= 0; j< M; j++)
			cin >> inputB[i][j];
			
	for(i= 0; i<= N- 8; i++)				// select a point for full search 
	{
		for(j= 0; j<= M- 8; j++)
		{
				// start full search compare
				int chg1= 0;
				int chg2= 0;
				for(int x= 0; x< 8; x++)
				{
					for(int y= 0; y< 8; y++)
					{
						if(inputB[i+x][j+y]!= board[0][x][y]) chg1++;
						if(inputB[i+x][j+y]!= board[1][x][y]) chg2++;
					}
				}
				ans= ans < chg1 ? ans : chg1;
				ans= ans < chg2 ? ans : chg2;
		}
	}
	cout << ans << "\n";
}*/
