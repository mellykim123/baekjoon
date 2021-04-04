#include <stdio.h>
#include<algorithm>
using namespace std;
int cache[1000001] = { 0 };
int f(int n) {
	int i;
	if (cache[n] != 0) {
		return cache[n];
	}
	if (n == 1) {
		return 1;
	}
	cache[n] = f(n-1) + 1;
	if (n % 2 == 0) {
		cache[n]=min(cache[n], f(n / 2) + 1);
	}
	if (n % 3 == 0) {
		cache[n]=min(cache[n], f(n / 3) + 1);
	}
	return cache[n];
	
}
int main() {
	int n, m, i;
	scanf("%d", &n);

	cache[0] = 0;
	cache[1] = 0;
	for (i = 2; i <= n; i++) {
		cache[i] = cache[i - 1] + 1;
		if (i % 2 == 0) {
			cache[i] = min(cache[i], cache[i / 2] + 1);
		}
		if (i % 3 == 0) {
			cache[i] = min(cache[i], cache[i / 3] + 1);
		}
	}
	printf("%d\n", cache[n]);

	//printf("%d", f(n));
}