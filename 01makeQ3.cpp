/*#include <iostream>	// stl�� �� ���, ������ �������� �ð��� �����迭�� ���������� ���� �ſ� ����.( 0ms , 334ms )  
#include <string>		// �� �����ؼ� �������. 
#include <stdlib.h>
#include <string.h>
#include <queue>

using namespace std;

void makeQ3()
{
	queue<int> q;
	int N, i;
	cin >> N;
	cin.ignore();
	for(i= 0; i< N; i++) {
		string cmd;
		getline(cin, cmd);
		char t_cmd[50];					// char *t_cmd; strcpy(t_cmd, cmd.c_str()); 이런식으로 짰을때, segmentation fault 가 뜸. => 포인터에 크기 할당을 안 한 상태로 내용을 복사했기 때문. 
		strcpy(t_cmd, cmd.c_str());
		char *oper= strtok(t_cmd, " ");
		char *val= strtok(NULL, " ");
		if(!strcmp(oper, "push"))	q.push(atoi(val));
		else if(!strcmp(oper, "pop")) { 
			if(q.size()==0) cout<< "-1\n";
			else { 
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if(!strcmp(oper, "size")) cout << q.size() << endl;
		else if(!strcmp(oper, "empty")) cout << q.empty() << endl;
		else if(!strcmp(oper, "front")) { 
			if(q.size()== 0) cout << "-1\n";
			else cout << q.front() << endl; 
		}
		else if(!strcmp(oper, "back")) { 
			if(q.size()== 0) cout << "-1\n";
			else cout << q.back() << endl; 
		}
	}
}*/
