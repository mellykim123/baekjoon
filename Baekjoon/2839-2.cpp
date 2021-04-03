#include <stdio.h>
#include <algorithm>
using namespace std;
int cache[5001] = { 0 };
int f(int n) {
	if (cache[n] != 0) {
		return cache[n];
	}
	if (n == 0) {
		return 0;
	}
	if (n < 0) {
		return 987654321;
	}
	cache[n] = min(f(n - 3)+1, f(n - 5)+1);
	return cache[n];
}
int main() {
	int i, n;
	scanf("%d", &n);
	int m = f(n);
	if (m > 10000) {
		printf("-1");
	}
	else {
		printf("%d", m);
	}
}