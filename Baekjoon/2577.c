#include<stdio.h>
int main() {
	int a, b, c;
	int count[10] = { 0, };
	int i,m,n;
	scanf("%d %d %d", &a, &b, &c);
	n = a * b * c;
	while (n > 0) {
		if (n / 10 >= 1) {
			m = n % 10;
			for (i = 0; i < 10; i++) {
				if (m == i) {
					count[i]++;
				}
			}
			n = n / 10;
		}
	
			
			else {
				 m = n % 10;
				for (i = 0; i < 10; i++) {
					if (m == i) {
						count[i]++;
					}
			}
				break;
			}
		}
		for (i = 0; i < 10; i++) {
			printf("%d\n", count[i]);
		}
	return 0;
}