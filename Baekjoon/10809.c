#include <stdio.h>
int main() {
	char ch[101];
	int i;
	int position[26];
	gets(ch);
	for (i = 0; i < 26; i++) {
		position[i] = -1;
	}
	for (i = 0; i < strlen(ch); i++) {
		if (position[ch[i] - 'a'] == -1) {
			position[ch[i] - 'a'] = i;
		}
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", position[i]);
	}
	return 0;
}