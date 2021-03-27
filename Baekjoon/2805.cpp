#include <stdio.h>
long long h=0;
int ch[1000001];
void binarysearch(int arr[], long long start, long long end,int len,int m) {
	int i;
	long long sum = 0;
	if (start > end) {
		return;
	}
	long long mid = (start + end) / 2;
	for (i = 0; i<len; i++) {
		if (mid < arr[i]) {
			sum += (arr[i] - mid);
		}
	}
	if (sum >= m) {
		if (h < mid) {
			h = mid;
		}
		binarysearch(arr, mid+1, end,len,m);
	}
	else {
		binarysearch(arr, start, mid-1, len, m);
	}
}
int main() {
	int n, m,i,k;
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &ch[i]);
	}
	int max = ch[0];
	for (i = 1; i < n; i++) {
		if (max < ch[i]) {
			max = ch[i];
		}
	}
	binarysearch(ch, 0, max, n, m);
	printf("%d", h);
}