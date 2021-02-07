#include <stdio.h>
int main() {
	int n;
	int m;
	int count = 0;
	scanf("%d", &n);
	m = n;
	do {
		if (n < 10) {
			n = 11 * n;
		}
		else {
			n = 10 * (n % 10) + ((n / 10 + n % 10) % 10);
		}
		count++;
	} while (m != n);
	printf("%d", count);
	return 0;
}