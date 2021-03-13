#include <stdio.h>
int size=0;
int arr[200000];
void heapify(int arr[], int x) {
	int smallest = x;
	int left = 2 * x;
	int right = 2 * x + 1;
	if (left < size && arr[left] < arr[smallest]) {
		smallest = left;
	}
	if (right < size && arr[right] < arr[smallest]) {
		smallest = right;
	}
	if (x != smallest) {
		int temp = arr[x];
		arr[x] = arr[smallest];
		arr[smallest] = temp;
		heapify(arr, smallest);
	}
}
void insert(int arr[], int n) {
	arr[size] = n;
	size++;
	int m = size-1;
	do {
		m = m / 2;
		heapify(arr, m);
	} while (m > 0);
}
int pop(int arr[]) {
	if (size == 0) {
		return 0;
	}
	int top = arr[0];
	size--;
	int temp = arr[0];
	arr[0] = arr[size];
	arr[size] = temp;
	heapify(arr, 0);
	return top;
}
int main() {
	int n,i,m;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m == 0) {
			printf("%d\n", pop(arr));
		}
		if (m > 0) {
			insert(arr, m);
		}
	}
}