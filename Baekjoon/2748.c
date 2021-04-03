#include <stdio.h>
long long cache[100] = { 0 };
long long fibonacci(int n) {
	if (cache[n] != 0) {
		return cache[n];
	}
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}	
	cache[n] = fibonacci(n - 2) + fibonacci(n - 1);
	return cache[n];
}
int main() {
	int n;
	scanf("%d", &n);
	// printf("%lld", fibonacci(n));
	long long arr[100] = { 0 };
	arr[0] = 0;
	arr[1] = 1;
	int i;
	for (i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%lld", arr[n]);

}