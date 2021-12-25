// BOJ 2503 number baseball 2021.12.25
// USE PERMUTATION & BF
/*
#include <iostream>
#include <cstring>

using namespace std;

bool used[10];							// used number check array for permutation
int pred[102];							// minhyuk's number prediction
int stNb[102][2];						// yeong su's answer stNb[][0]= strike number, stNb[][1]= ball number 
bool num[1000];							// check available number between 123 ~ 987. expected answer number

void permu(int cD, int cN) {			// function for find available yeong su's answer before prediction
	int i;								// cD: current digit, cD== 3 return;.
										// cN: current input number.
	
	if(cD== 3)
	{
		num[cN]= 1;
		return ;
	}
	
	for(i= 1; i< 10; i++)
	{
		if(!used[i])
		{
			used[i]= 1;
			permu(cD+1, (cN*10)+ i);
			used[i]= 0;
		}
	}
}
	
void numBaseball() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	
	int N;							// minhyuk's prediction number
	int i, j, k, l;	
	int ans= 0;
	
	memset(used, 0, sizeof(used));
	memset(num, 0, sizeof(num));
	//permu(0, 0);
	
	cin >> N;
	
	
	for(i= 0; i< N; i++)
		cin >> pred[i] >> stNb[i][0] >> stNb[i][1];

	int pd[3];						// prediction number's each digit
	int jd[3];						// j's each digit
	for(i= 0; i< N; i++)
	{
		if(stNb[i][0]== 3) 
		{
			ans= 1;
			break;
		}
		
		k= 0;
		for(j= 100; j> 0; j/=10)
			pd[k++]= (pred[i]% (j*10)) / j;
			
		for(j= 123; j<= 987; j++)
		{
			int tstNb[2]= {0, 0};		// st: strike number compare with j. b: ball number ''
			memset(used, 0, sizeof(used));
			if(num[j])
			{
				k= 0;
				for(l= 100; l> 0; l/= 10)
					jd[k++]= (j% (l*10))/ l;
				
				// 1st search. discriminate strike number
				l= 0;
				for(k= 0; k< 3; k++)
				{
					if(pd[k]== jd[k])
					{
						tstNb[0]++;
						used[pd[k]]= 1;
					}
				}
				
				// 2nd search. discriminate ball number
				for(k= 0; k< 3; k++)
				{
					if(!used[pd[k]])
					{
						for(l= 0; l< 3; l++)
							if(pd[k]== jd[l]) tstNb[1]++;
					}
				}
				cout << "CURRENT J : " << j << ", " << "TEMPORARY STRIKE : " << tstNb[0] << ", TEMPORARY BALL : " << tstNb[1] << "\n";
				if(!(stNb[i][0]== tstNb[0]) || !(stNb[i][1]== tstNb[1])) num[j]= 0;
			}
		}
	}
	
	if(ans== 0)
		for(i= 123; i<= 987; i++) if(num[i]) ans++;
	cout << ans << "\n";
}*/
