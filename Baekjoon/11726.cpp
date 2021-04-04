#include <stdio.h>
int cache[1001] = { 0 };
int f(int n) {
	cache[0] = 1;
	cache[1] = 1;
	int i;
	for (i = 2; i <= n; i++) {
		cache[i] = cache[i - 1] + cache[i - 2];
		cache[i] = cache[i] % 10007;
	}
	return cache[n];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", f(n)%10007);
}