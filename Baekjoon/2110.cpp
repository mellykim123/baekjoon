#include <stdio.h>
#include<algorithm>
using namespace std;
int arr[200001] = { 0 };
int main() {
	int n, c;
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	long long ans=arr[n-1]-arr[0];
	long long start = 0;
	long long end = arr[n - 1] - arr[0];
	while (start <= end) {
		long long before = arr[0];
		int count = 1;
		long long mid = (start + end) / 2;
		for (int i = 1; i < n; i++) {
			if (mid > arr[i] - before) {
				continue;
			}
			else {
				count++;
				before = arr[i];
			}
		}
		if (count >= c) {
			ans = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	printf("%lld", ans);
}