#include <stdio.h>
int main() {
	char arr[1000001];
	int count[26] = { 0 };
	int max=0;
	int idx;
	gets(arr);
	int i;
	int size = strlen(arr);
		for (i = 0; i < size; i++) {
			if ('a' <= arr[i] && arr[i] <= 'z') {
				count[arr[i] - 'a']++;
			}
			if ('A' <= arr[i] && arr[i] <= 'Z') {
				count[arr[i] - 'A']++;
			}
		}
		for (i = 0; i < 26; i++) {
			if (max < count[i]) {
				max = count[i];
				idx = i;
			}
		}
		for (i = 0; i < 26; i++) {
			if (count[i] == max) {
				if (i != idx) {
					printf("?");
					return 0;
				}
			}
		}
		printf("%c", idx + 'A');
	return 0;
}