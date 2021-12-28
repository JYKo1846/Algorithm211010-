// BOJ 1543 documents search 2021.12.28
// 1st Try=> Problem is j-k for() loop. if, diffence at k== 0, j-k loop goes infinite.
// so, if(k==0) k++; it correct.
// and, think about j loop "j+= k"
/*
#include <iostream>
#include <string>

using namespace std;

string doc;
string word;

void docuSearch() {
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	
	int ans= 0;				// maximum matched word number
	int i, j, k;
	
	
	getline(cin, doc);
	getline(cin, word);
	
	int dL= doc.length();
	int wL= word.length();
	
	for(i= 0; i< dL-wL+ 1; i++)
	{
		int tA= 0;				// temporary match word number
		for(j= i; j< dL; j+= k)
		{
			bool corr= true;
			for(k= 0; k< wL; k++)
			{
				if(doc[j+k]!= word[k])
				{
					corr= false;
					break;
				}
			}
			if(corr) tA++;
			if(k== 0) k++;
		}
		ans = ans > tA ? ans : tA;
	}
	
	cout << ans << "\n";
}*/
