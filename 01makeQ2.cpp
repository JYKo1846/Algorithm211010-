/*#include <stdio.h>	// makeQ.cpp �� �ٸ��� : 1) �����迭�� �̿��� Memory Corruption�� ����. 
#include <stdlib.h>		// 2) �� ��ɾ� �Լ��� if������ ��ü�Ͽ�, "���� ���� ����"�� ���� ���ǹ��� �ݺ��۾��� ����. 
#include <string.h>

struct Queue{
	int val[10005];
	int size= 0;
	int head= 0, tail= 0;
};

void makeQ2()
{
	Queue q;
	int i, N;
	char cmd[50];
	for(i= 0; i< 10005; i++) q.val[i]= 0;
	scanf("%d\n", &N);
	
	for(i= 0; i< N; i++) {
		fgets(cmd, sizeof(cmd), stdin);
		char *oper= strtok(cmd, " \n");
		char *num= strtok(NULL, " \n");

		if(!strcmp(oper, "push")) {
			int tmp= atoi(num);
			q.val[q.tail++]= tmp;
			q.size++;
		}
		else if(!strcmp(oper, "pop")) {
			if(q.size== 0)	printf("-1\n");
			else {
				printf("%d\n", q.val[q.head++]);
				q.size--;
			}
		}
		else if(!strcmp(oper, "size")) printf("%d\n", q.size);
		else if(!strcmp(oper, "empty")) {
			if(q.size== 0) printf("1\n");
			else printf("0\n");
		}
		else if(!strcmp(oper, "front")) {
			if(q.size== 0) printf("-1\n");
			else printf("%d\n", q.val[q.head]);
		}
		else if(!strcmp(oper, "back")) {
			if(q.size== 0) printf("-1\n");
			else printf("%d\n", q.val[q.tail-1]);
		}
	}
	
}*/
