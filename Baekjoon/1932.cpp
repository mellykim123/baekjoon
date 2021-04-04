#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int i,n,j;
	int arr[501][501] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	

	for (i = 1; i < n; i++) {
		arr[i][0] = arr[i - 1][0] + arr[i][0];
		for (j = 1; j <= i; j++) {
	arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + arr[i][j];
		}
	}
	int ans = arr[n-1][0];
	for (i = 0; i < n; i++) {
		ans=max(ans, arr[n-1][i]);
	}
	printf("%d", ans);
}