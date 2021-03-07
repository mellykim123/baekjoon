#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[100000];
int partition(int arr[], int start, int end) {
	int i = start - 1;
	int j,temp;
	int pivot = arr[end];
	for (j = start; j < end; j++) {
		if (arr[j] < pivot) {
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[end];
	arr[end] = temp;
		
	return i+1;
}

void quicksort(int arr[], int start, int end) {
	if (start > end) {
		return;
	}
	int pivot = partition(arr, start, end);
	quicksort(arr, start, pivot-1);//pivot 을 포함하면 정렬 안됨!
	quicksort(arr, pivot + 1, end);
}

void shuffle(int arr[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int rand_idx = rand() % (n - i) + i;
		int temp = arr[i];
		arr[i] = arr[rand_idx];
		arr[rand_idx] = temp;
	}

}
int binarysearch(int arr[], int value, int start, int end) {
	if (start > end) {
		return 0;
	}
	int mid = (start + end) / 2;
	if (arr[mid] == value) {
		return 1;
	}
	if (arr[mid] > value) {
		return binarysearch(arr, value, start, mid - 1);
	}
	else{
		return binarysearch(arr, value, mid + 1, end);
	}

}
int main() {
	int i,n,m,value;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	shuffle(arr, n);
	quicksort(arr, 0, n-1);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &value);
		printf("%d\n",binarysearch(arr, value, 0, n - 1));
	}

	return 0;
}