/*#include <iostream>		// stl�� �� ���, ������ �������� �ð��� �����迭�� ���������� ���� �ſ� ���ȴ�. ( 0ms , 334ms )  
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
		char t_cmd[50];					// char *t_cmd; strcpy(t_cmd, cmd.c_str()); �̷������� ®����, segmentation fault �� ��. => �����Ϳ� ũ�� �Ҵ��� �� �� ���·� ������ �����߱� ����. 
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
