#include <stdio.h>
#include <algorithm>
#include <limits.h>

using namespace std;
int ch[10001];
long long l = 0;
void binarysearch(int arr[], long long start, long long end, int len, int n) {
	long long mid = (start + end) / 2;
	long long sum = 0;
	int i;
	if (mid == 0) {
		return;
	}
	if (start > end) {
		return;
	}
	for (i = 0; i < len; i++) {
		sum += (arr[i] / mid);
	}
	if (sum >= n) {
		l = max(l, mid);
		binarysearch(arr, mid + 1, end, len, n);
	} else {
		binarysearch(arr, start, mid - 1, len, n);
	}
}
int main() {
	int i,k, n;
	scanf("%d %d", &k, &n);
	for (i = 0; i < k; i++) {
		scanf("%d", &ch[i]);
	}
	binarysearch(ch, 0, INT_MAX,k, n);
	printf("%d", l);
	return 0;
}