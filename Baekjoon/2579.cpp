#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int i,n;
	int arr[301];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	int cache[301][2] = { 0 };
	cache[0][0] = arr[0];
	cache[1][0] = arr[1];
	cache[1][1] = arr[0] + arr[1];

	for (i = 2; i < n; i++) {
		cache[i][0] = max(cache[i - 2][0], cache[i - 2][1]) + arr[i];
		cache[i][1] = cache[i - 1][0] + arr[i];
	}
	printf("%d", max(cache[n-1][0], cache[n-1][1]));
}