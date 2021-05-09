#include <stdio.h>
long long arr[101] = { 0 };
int main() {
	int t, n;
	scanf("%d", &t);
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	for (int i = 6; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%lld\n", arr[n]);
	}
}