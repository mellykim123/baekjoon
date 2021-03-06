#include <stdio.h>
int main() {
	int i, j,temp,n,min_idx;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%*c", &arr[i]);
	}
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i+1; j < n; j++) {
			if (arr[min_idx] > arr[j]) {
				min_idx = j;
			}
		}
		temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

}