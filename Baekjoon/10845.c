#include <stdio.h>
#define SIZEOF_QUEUE 10005
int queue[SIZEOF_QUEUE];
int front = 0,back=-1;
void push(int n) {
	back++;
	queue[back%SIZEOF_QUEUE] = n;
}
int pop(void) {
	int n = queue[front%SIZEOF_QUEUE];
	if (!isEmpty()) {
		front++;
		return n;
	}
	else {
		return -1;
	}
}
int size(void) {
	return back - front + 1;
}
int isEmpty(void) {
	if (back == front - 1) {
		return 1;
	}
	else {
		return 0;
	}
}
int Front(void) {
	if (!isEmpty()) {
		return queue[front % SIZEOF_QUEUE];
	}
	else {
		return -1;
	}
}
int Back(void) {
	if (!isEmpty()) {
		return queue[back % SIZEOF_QUEUE];
	}
	else {
		return -1;
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
		if (!strcmp(ch, "pop")) {
			printf("%d\n", pop());
		}
		if (!strcmp(ch, "size")) {
			printf("%d\n", size());
		}
		if (!strcmp(ch, "empty")) {
			printf("%d\n", isEmpty());
		}
		if (!strcmp(ch, "front")) {
			printf("%d\n", Front());
		}
		if (!strcmp(ch, "back")) {
			printf("%d\n", Back());
		}
	}
	return 0;
}
