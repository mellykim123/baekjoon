#include <stdio.h>
long long arr[101][10] = { 0 };
int main() {
	int n;
	long long count = 0;
	scanf("%d", &n);
	int i;
	for (i = 1; i < 10; i++) {
		arr[1][i] = 1;
	}
	for (i = 1; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				arr[i + 1][1] = (arr[i+1][1] + arr[i][j]) % 100000000;
			}
			else if (j == 9) {
				arr[i + 1][8] =(arr[i+1][8]+ arr[i][j])%1000000000;
			}
			else {
				arr[i + 1][j - 1] =(arr[i+1][j-1]+ arr[i][j])%1000000000;
				arr[i + 1][j + 1] =(arr[i+1][j+1]+ arr[i][j])%1000000000;
			}
		}
	
	}
	for (i = 0; i < 10; i++) {
		count += arr[n][i];
	}
	printf("%lld", count%1000000000);
}