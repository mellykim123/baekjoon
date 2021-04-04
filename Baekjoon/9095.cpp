#include <stdio.h>
int arr[11] = { 0 };
int f(int n) {
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	int i;
	for (i = 4; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	return arr[n];
}
int main() {
	int i,t,n;
	scanf("%d", &t);
	f(10);
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%d\n",arr[n]);
	}


}