#include <stdio.h>
int reverse(int n){
	int m=0;
	while (n > 0) {
		m = 10*m+n%10;
		n = n / 10;
	}
	return m;
}
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	m=reverse(m);
	n=reverse(n);
	if (m > n) {
		printf("%d", m);
	}
	else {
		printf("%d", n);
	}
	

	return 0;
}