#include <stdio.h>
int main() {
	int k;
	scanf("%d", &k);
	int arr1[46][2] = { 0 };
	arr1[0][0] = 1;
	arr1[0][1] = 0;

	for (int i = 0; i <k; i++) {
		arr1[i + 1][0] = arr1[i][1];
		arr1[i + 1][1] = arr1[i][0] + arr1[i][1];
	}
	printf("%d %d", arr1[k][0], arr1[k][1]);

	}


