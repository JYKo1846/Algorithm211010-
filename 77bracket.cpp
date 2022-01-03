// BOJ 16637 bracket 2022.01.03
// WHY I WRONG.  BECAUSE, FIRST RUN calc(), ans is compare with no bracket calculation WITH NO INITIALIZED ANSWER.
/*
#include <iostream>
#include <cstring>

using namespace std;

char exp[22];
bool shea[22];						// check exp[i] is in the bracket.
int N;
int ans= -1e9;

int exec(int fir, int sec, char op) {
	if(op== '+') return fir+ sec;
	if(op== '-') return fir- sec;
	if(op== '*') return fir* sec;
}

void calc() {
	int fir= 0, sec;				// fir, sec : first, second operand.
	char op;
	for(int i= 0; i< N; i++)
	{
		int num= exp[i]- '0';
		if(0<= num && num<= 9)
		{
			if(i== 0) 
			{
				fir= num;
				continue ;
			}
		
			if(shea[i])
			{
				sec= exp[i+2]-'0';
				num= exec(num, sec, exp[i+1]);
				i+=2;
				if(i== 2) 
				{
					fir= num; 
					continue ;
				}
			}
			fir= exec(fir, num, op);
		}
		else 
			op= exp[i];
	}
	
	ans= ans > fir ? ans : fir;
}
		
void dfs(int cur) {			// current exp[] position
	int i, j;
	
	calc();
	for(i= cur+2; i< N-1; i++)
	{
		shea[i]= 1;
		dfs(i);
		shea[i]= 0;
	}
}

void bracket() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;

	memset(shea, 0, sizeof(shea));
	cin >> N;
	for(i= 0; i< N; i++) cin >> exp[i];
	
	calc();
	for(i= 0; i< N-1; i+= 2)
	{
		shea[i]= 1;
		dfs(i);
		shea[i]= 0;
	}
		
	cout << ans << "\n";
}
*/
