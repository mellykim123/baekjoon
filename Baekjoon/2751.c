#include <stdio.h>
int temp[1000000];
int n;
int arr[1000000];
void merge(int arr[], int start, int end, int mid) {
	int i = start;
	int j = mid + 1;
	int k = start;
	while (i <= mid && j <= end) {
		if (arr[i] <= arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		}
		else {
			temp[k] = arr[j];
			j++;
			k++;
		}
	}
	if (i > mid) {
		while (j <= end) {
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	else {
		while (i <= mid) {
			temp[k] = arr[i];
			k++;
			i++;
		}
	}
	for (int l = start; l <= end; l++) {
		arr[l] = temp[l];
	}
}
void mergesort(int arr[], int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		mergesort(arr, start, mid);
		mergesort(arr, mid + 1, end);
		merge(arr, start, end, mid);
	}
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%*c", &arr[i]);
	}
	mergesort(arr, 0, n-1);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
	}