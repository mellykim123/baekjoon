#include <stdio.h>
int size = 0;
int arr[300000];
void heapify(int arr[], int x) {
	int largest = x;
	int left = 2 * x;
	int right = 2 * x + 1;

	if (left<size && arr[left]>arr[largest]) {
		largest = left;
	}
	if (right<size && arr[right]>arr[largest]) {
		largest = right;
	}
	if (x != largest) {
		int temp = arr[x];
		arr[x] = arr[largest];
		arr[largest] = temp;
		heapify(arr, largest);
	}
}
void insert(int arr[],int n) {
	arr[size] = n;
	size++;
	int m = size-1;
	int i;
	do {
		m=m / 2;
		heapify(arr,m);
	} while (m > 0);
}
int pop(int arr[]) {
	if (size == 0) {
		return 0;
	}
	int top = arr[0];
	size--;
	int temp = arr[size];
	arr[size] = arr[0];
	arr[0] = temp;
	heapify(arr, 0);
	return top;
}
int main() {
	int i,n1,n2;
	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		scanf("%d", &n2);
		if (n2 == 0) {
			printf("%d\n",pop(arr));
		}
		if (n2 > 0) {
			insert(arr,n2);
		}
	}
	return 0;
}