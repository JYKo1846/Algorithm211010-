// BOJ 17825 diceYut 2022.02.26
// 2022.03.07 completed!!!!!
// Why I was wrong : 1) miscalculate blank
//					 2) lenient conditional sentence. => ex)) if(20< bd[] && bd< 25) 
//					 3) bd[20] && bd[32] was same place. But, I wasn't thinking straight
// But, Finally finished. !!!!!!
// BUT, Running time is same as python running time. maybe, choose moving token function dfs() was problem.
// Repeat time, Modify dfs(). ERASE duplicated case ex) 0100.... & 0200.... 
/*
#include <iostream>
#include <cstring>

using namespace std;

int mv[11];							// availiable move square number at each turn
int tkn[5];							// each token's current square. tkn[x]== 45 : reached token
int mvTkn[11];						// moved token at each turn
int compareTkn[11];					
int bd[35]= {0, 2, 4, 6, 8, 10,
				12, 14, 16, 18, 20,
				22, 24, 26, 28, 30,
				32, 34, 36, 38, 40,	// 40: bd[20]
				13, 16, 19,			// bd[21] : cross-line /start
				22, 24, 			// bd[24] : cross-line ->/
				28, 27, 26,			// bd[26] : cross-line bottom-up
				25, 30, 35, 40 };	// 40: bd[32]
int ans= -1;


bool valid() {
	int i, j;
	for(i= 0; i< 4; i++)
	{
		for(j= i+1; j< 4; j++)
		{
			if(tkn[i]== tkn[j] || ((tkn[i]==20 || tkn[i]== 32) && (tkn[j]== 20 || tkn[j]== 32)))
			{ 
				if(tkn[i]!= 45)
				{
					return false;
				}
			}
		}
	}
	return true;
}   

void calc() {
	int i;
	//for(i= 0; i< 10; i++) cout << mvTkn[i] << " ";
	//cout << "\n";
	
	int cur= -1;
	int st= 0, ntmv= 0;			// token's start position, next move
	int tmpR= 0;
	for(i= 0; i< 4; i++) tkn[i]= (i*-1) -1;
	
	for(int t= 0; t< 10; t++)
	{
		if(!valid()) return ;
		
		cur= mvTkn[t];
		if(tkn[cur]< 0) tkn[cur]= 0;
		st= tkn[cur];
		ntmv= mv[t];
		
		// moving operation
		if(st== 5)
		{
			if(ntmv< 4) tkn[cur]= 20+ ntmv;
			else tkn[cur]= 29+ (ntmv- 4);
		}
		else if(st== 10)
		{
			if(ntmv< 3) tkn[cur]= 23+ ntmv;
			else tkn[cur]= 29+ (ntmv- 3);
		}
		else if(st== 15)
		{
			if(ntmv< 4) tkn[cur]= 25+ ntmv;
			else tkn[cur]= 29+ (ntmv- 4);
		}
		else if(20< st && st< 31)
		{
			tkn[cur]+= ntmv;
			
			if(20< st && st< 24)
			{
				if(tkn[cur]> 23) tkn[cur]= 29+ (tkn[cur]- 24);
			}
			else if(23< st && st< 26)
			{
				if(tkn[cur]> 25) tkn[cur]= 29+ (tkn[cur]- 26);
			}
			else if(25< st && st< 29)
			{
				if(tkn[cur]> 28) tkn[cur]= 29+ (tkn[cur]- 29);
			}
		}
		else
			tkn[cur]+= ntmv;
		
		// calculate operation
		if(tkn[cur]> 20)
			if((15< st && st< 21) || (st> 20 && tkn[cur]> 32))
				tkn[cur]= 45;
			else
				tmpR+= bd[tkn[cur]];
		else
			tmpR+= bd[tkn[cur]];
			
	}
	
	if(!valid()) return ;
	
	if(ans< tmpR)
	{
		ans= tmpR;
		for(i= 0; i< 10; i++) compareTkn[i]= mvTkn[i];
	}
	//cout << "TEMP RESULT : " << tmpR << endl;
}

void dfs(int cT) {
	if(cT== 10) 
	{
		calc();
		return ;
	}
	 
	for(int i= 0; i< 4; i++)
	{
		mvTkn[cT]= i;
		dfs(cT+1);
	}
}

void diceYut() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int i;
	
	memset(mv, 0, sizeof(mv));
	memset(mvTkn, 0, sizeof(mvTkn));
	
	for(i= 0; i< 10; i++) cin >> mv[i];
	
	dfs(0);
	//for(i= 0; i< 10; i++) mvTkn[i]= 0;
	//calc();
	cout << ans << "\n";
	for(i= 0; i< 10; i++) cout << compareTkn[i] << " ";
	cout << "\n";
}*/
