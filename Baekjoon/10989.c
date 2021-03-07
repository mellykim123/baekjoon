#include <stdio.h>
int main() {
	int arr1[10001] = { 0 };
	int i,n,j,temp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%*c", &temp);
		arr1[temp]++;
	}
	for (i = 0; i < 10001; i++) {
		if (arr1[i] > 0) {
			for (j = 0; j < arr1[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
}