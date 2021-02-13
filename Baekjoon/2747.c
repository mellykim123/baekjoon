#include <stdio.h>
int number(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return number(n - 1) + number(n - 2);
}
int main() {
	int num[100];
	num[0] = 0;
	num[1] = 1;
	int i, n;
	for (i = 2; i < 100; i++) {
		num[i] = num[i - 1] + num[i - 2];
	}
	scanf("%d", &n);
	printf("%d", num[n]);
	return 0;
}