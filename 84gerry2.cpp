// BOJ 17779 gerrymandering 2 2022.01.07
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;
int bd[22][22];
int pop[7];
bool vst[22][22];
int maxi, mini;					// abstraction value of two maximum values will minimum value of answer
int ans= 300;

void check5(int x, int y, int d1, int d2) {	// first, check border of area 5
	int i, j;								// then, check remained area 
	int lexP, rixP, leyP, riyP;				// left x,y right x,y position
	
	// make line top-left
	for(i= 0; i<= d1; i++)
		vst[x+i][y-i]= 1;
	lexP= x+i-1;
	leyP= y-i+1;
	
	// make line top-right
	for(i= 0; i<= d2; i++)
		vst[x+i][y+i]= 1;
	rixP= x+i-1;
	riyP= y+i-1;
	
	// make line bottom-left
	for(i= 0; i<= d2; i++)
		vst[lexP+i][leyP+i]= 1;
	
	// make line bottom-right
	for(i= 0; i<= d1; i++)
		vst[rixP+i][riyP-i]= 1;
	
	for(i= 0; i< N; i++)
	{
		bool is5= false;
		for(j= 0; j< N; j++)
		{
			if(i== x && j== y) break;
			if(i== x+d1+d2 && j== y-d1+d2) return ;
			
			if(!is5 && vst[i][j])				// meet left side of area 5 
				is5= true;
			else if(is5 && !vst[i][j])			// change area 5 visitation 0 -> 1
				vst[i][j]= 1;
			else if(is5 && vst[i][j])			// meet right side of area 5
				is5= false;
		}
	}
}
			
void makeArea(int x, int y) {
	int d1, d2;
	int i, j;
	
	for(d1= 1; y- d1>= 0; d1++)
	{
		for(d2= 1; y+ d2< N; d2++)
		{
			if(x+d1+d2 < N && 0<= y-d1+d2 && y-d1+d2< N)
			{
				// make area 5 border
				maxi= -1;
				mini= 20000;
				memset(vst, 0, sizeof(vst));
				memset(pop, 0, sizeof(pop));
				check5(x, y, d1, d2);
				
				cout << "\n";
				for(i= 0; i< N; i++)
				{
					for(j= 0; j< N; j++)
						cout << bd[i][j] << " ";
					cout << "\n";
				}
				cout << "\n";
				for(i= 0; i< N; i++)
				{
					for(j= 0; j< N; j++)
						cout << vst[i][j] << " ";
					cout << "\n";
				}
				
				// calculate population of each area
				for(i= 0; i< N; i++)
				{
					for(j= 0; j< N; j++)
					{
						if(vst[i][j]== 0)
						{
							if(i< x+d1 && j<= y)			// calc area 1
								pop[1]+= bd[i][j];
								
							if(i<= x+d2 && j> y)			// calc area 2
								pop[2]+= bd[i][j];
							
							if(i>= x+d1 && j< y-d1+d2)		// calc area 3
								pop[3]+= bd[i][j];
							
							if(i> x+d2 && j>= y-d1+d2)		// calc area 4
								pop[4]+= bd[i][j];
						}
						
						else 								// calc area 5
							pop[5]+= bd[i][j];

						
					}
				}
						
				for(i= 1; i< 6; i++) cout << "POP[" << i << "] : "<< pop[i] << "\n";	
				
				for(i= 1; i< 6; i++)
				{
					maxi= maxi > pop[i] ? maxi : pop[i];
					mini= mini < pop[i] ? mini : pop[i];
				}
				
				cout << "CURRENT MAXI, MINI : " << maxi << ", " << mini << "\n";
				ans= ans < maxi-mini ? ans : maxi-mini;
				cout << "=============\n";
				
			}
		}
	}
}
				

void gerry2() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
	
	cin >> N;
	
	for(i= 0; i< N; i++)
		for(j= 0; j< N; j++)
			cin >> bd[i][j];
			
	for(i= 0; i< N; i++)
		for(j= 1; j< N; j++)
			makeArea(i, j);
			
	cout << ans << "\n";
}*/
