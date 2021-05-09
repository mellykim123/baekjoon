#include <stdio.h>
int main() {
	int arr1[101] = { 0 };
	int arr2[100001] = { 0 };
	int n, k,m,i;
	scanf("%d %d", &n, &k);
	for (i= 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}

	for (int j = 0; j < n; j++) {
		arr2[arr1[j]] += 1;
		for (i = arr1[j]; i <= k; i++) {
			arr2[i] += arr2[i - arr1[j]];
		}
	}
	printf("%d", arr2[k]);
}