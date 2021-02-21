#include <stdio.h>
#define SIZEOF_STACK 100
int stack[SIZEOF_STACK];
int top = -1;
void push(int n) {
		top++;
		stack[top] = n;
}
int pop(void) {
	if (!isEmpty()) {
		int n = stack[top];
		top--;
		return n;
	}
	else {
		return -1;
	}
}
int getTop(void) {
	if (!isEmpty()) {
		return stack[top];
	}
	else {
		return -1;
	}
}
int size(void) {
	return top + 1;
}
int isEmpty(void) {
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int i,m,n;
	char ch[20];
	scanf("%d%*c", &m);
	for (i = 0; i < m; i++) {
		scanf("%s",ch);
	
		if (!strcmp(ch,"push")) {
			scanf("%d", &n);
			push(n);
		}
		if (!strcmp(ch,"pop")) {
			printf("%d\n",pop());
		}
		if(!strcmp(ch,"top")) {
			printf("%d\n",getTop());
		}
		if (!strcmp(ch,"empty")) {
			printf("%d\n",isEmpty());
		}
		if(!strcmp (ch,"size")) {
			printf("%d\n",size());
		}
	}
}