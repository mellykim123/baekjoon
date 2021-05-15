#include <stdio.h>
long long arr[91][2] = { 0 };
int main() {
	int n, i, j;
	arr[1][0] = 0;
	arr[1][1] = 1;

	for (i = 1; i < 90; i++) {
		arr[i + 1][0] += arr[i][0] + arr[i][1];
		arr[i + 1][1] = arr[i][0];
	}
	scanf_s("%d", &n);
	printf("%lld", arr[n][0] + arr[n][1]);
}