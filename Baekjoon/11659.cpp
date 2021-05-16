#include <stdio.h>
int arr[100001];
int cache[100001] = { 0 };
int main() {
	int n, m,i,x,y;

	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	cache[1] = arr[1];
	for (i = 1; i < n; i++) {
		cache[i + 1] = cache[i] + arr[i + 1];
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		int ans = cache[y] - cache[x - 1];
		printf("%d\n", ans);
	}
	

}