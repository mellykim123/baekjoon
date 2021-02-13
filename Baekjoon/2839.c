#include <stdio.h>
int main() {
	int i,n;
	scanf("%d", &n);
	for (i = n/5; i >=0; i--) {
		int remainder = n - 5 * i;
		if (remainder % 3 == 0) {
			int m = i + remainder / 3;
			printf("%d", m);
			return 0;
		}
	}
	printf("-1");
	return 0;
}