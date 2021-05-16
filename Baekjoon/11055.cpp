#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1001] = { 0 };
int cache[1001] = { 0 };
int main() {
	int n,i,j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &arr[i]);
	}
	cache[1] = arr[1];
	for (i = 2; i <= n; i++) {
		for (j = 1; j < i; j++) {
			if (arr[j] < arr[i]) {
				cache[i] = max(cache[i], cache[j] + arr[i]);
			}
			else {
				cache[i] = max(cache[i], arr[i]);
			}
		}
	}
	int maxnum = cache[1];
	for (i = 2; i <= n; i++) {
		maxnum=max(maxnum, cache[i]);
	}
	printf("%d",maxnum);
}