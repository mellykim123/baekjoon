#include <stdio.h>
int main() {
	int i,n,sum=0;
	char ch[100] = { 0 };
	scanf("%d%*c", &n);
		gets(ch);
		for (i = 0; i < n; i++) {
			sum += (ch[i]-'0');
	}
		printf("%d", sum);
	return 0;
}