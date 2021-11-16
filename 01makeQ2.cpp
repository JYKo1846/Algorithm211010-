/*#include <stdio.h>	// makeQ.cpp 와 다른점 : 1) 정적배열을 이용해 Memory Corruption을 피함. 
#include <stdlib.h>		// 2) 각 명령어 함수를 if문으로 대체하여, "값에 의한 전달"로 오는 무의미한 반복작업을 없앰. 
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
