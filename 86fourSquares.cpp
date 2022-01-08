// BOJ 17626 four squares 2022.01.08
/*
#include <iostream>
#include <cstring>

using namespace std;

int N;
int num[50003];

void fourSquares() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i, j;
		
	cin >> N;
	for(i= 1; i<= N; i++) num[i]= 100;
	
	for(i= 1; i*i< 50003; i++)
		num[i*i]= 1;
		
	if(num[N]== 100)
	{
		for(i= 1; i<= N; i++)
		{
			if(num[i]== 1) continue; 
			
			for(j= 1; j*j<= i/2; j++)
			{
				int t= num[i-j*j]+ num[j*j];
				if(t> 4) continue;
				if(t== 2)
				{
					num[i]= t;
					break;
				}
				num[i]= num[i] < t ? num[i] : t;
			}
		}
	}

	for(i= 0; i<= N; i++) cout << num[i] << " ";
	cout <<"\n";
	
	cout << num[N] << "\n";
}*/
