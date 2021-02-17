#include <stdio.h>
int main() {
	char ch[101];
	int n, i, j, m, len, count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s%*c", ch);
		int pos[26] = { 0 };
		int sum = 0;
		len = strlen(ch);
		pos[ch[0] - 'a']++;
		for (j = 1; j < len; j++) {
			if (pos[ch[j] - 'a'] == 0 || ch[j] == ch[j - 1]) {
				pos[ch[j] - 'a']++;
			}
		}
		for (m = 0; m < 26; m++) {
			sum += pos[m];
		}
		if (sum == len) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}