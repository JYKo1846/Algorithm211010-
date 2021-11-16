/*#include <stdio.h>		// Memory Corruption 이 뜬다. Dev-C++으로는 안 나오지만, BOJ사용시 메모리 커럽션, 이유는 말록에 있다고 생각함 
#include <stdlib.h>			// 2021. 10. 11 PM 9: 06 동적할당을 큐로 구현하는건 지금은 포기. 정적배열을 통해 구현하는것으로 하자. 
#include <malloc.h>
#include <string.h>

struct Queue{
	int *p= NULL;
	int size= 0;
};
	

int showSize(Queue q)
{
	return q.size;
}

int isEmpty(Queue q)
{
	if(showSize(q)!= 0) return 0;
	return 1;
}


void showFront(Queue q)
{
	if(isEmpty(q)) printf("-1\n");
	else printf("%d\n", q.p[0]);
}

void showBack(Queue q)
{
	if(isEmpty(q)) printf("-1\n");
	else printf("%d\n", q.p[showSize(q)-1]);
}

void pushQ(Queue& q, char *val)
{
	int tmp= atoi(val);
	if(isEmpty(q))q.p=(int *)malloc(1);
	else q.p= (int *)realloc(q.p, showSize(q)+1);
	q.size++;
	q.p[showSize(q)-1]= tmp;
}

void popQ(Queue& q)
{
	int i;
	int size= showSize(q);
	
	if(isEmpty(q)) {
		printf("-1\n");
		return ;
	}
	showFront(q);
	
	if(size== 1) {
		free(q.p);
		q.size--;
		return ;
	}
	int *tmp= (int *)malloc(size-1);
	for(i= 1; i< size; i++) tmp[i-1]= q.p[i];
	free(q.p);
	q.size--;
	q.p= tmp;
}

void exe(Queue& q,char *func, char *val)
{
	if(!strcmp(func, "push")) pushQ(q, val);
	else if(!strcmp(func, "pop")) popQ(q);
	else if(!strcmp(func, "size")) printf("%d\n",showSize(q));
	else if(!strcmp(func, "empty")) printf("%d\n", isEmpty(q));
	else if(!strcmp(func, "front")) showFront(q);
	else if(!strcmp(func, "back")) showBack(q);
	
}

void makeQ()
{
	int N, i;
	char cmd[50];
	Queue q;
	scanf("%d%*c", &N);
	for(i= 0;i< N; i++) {
		fgets(cmd, sizeof(cmd), stdin);
		char *func= strtok(cmd, " \n");
		char *val= strtok(NULL, " \n");
		exe(q, func, val);
	}
	free(q.p);
}*/
