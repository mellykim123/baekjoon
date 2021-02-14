#include <stdio.h>
int main() {
	char ch[1000001];
	gets(ch);
	int size = strlen(ch);
	int i, count = 0;
	for (i = 0; i < size; i++) {
		if (ch[i] == ' ') {
			count++;
		}
	}
	if (ch[0] == ' ') {
		count--;
	}
	if (ch[size-1] == ' ') {
		count--;
	}
	count++;
	printf("%d", count);
	return 0;
}