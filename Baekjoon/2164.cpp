#include <stdio.h>
#include <queue>
using namespace std;
queue<int> q;
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.size() > 1) {
		q.pop();
		int m = q.front();
		q.pop();
		q.push(m);
	}
	printf("%d", q.front());
}