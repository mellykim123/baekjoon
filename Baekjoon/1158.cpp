#include <stdio.h>
#include <queue>
using namespace std;
queue<int> q;
vector<int> v;
int main() {
	int n, k, i;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) {
		q.push(i);
	}
	while (q.empty() == 0) {
		for (i = 1; i <= k-1; i++) {
			int m=q.front();
			q.pop();
			q.push(m);
		}
		v.push_back(q.front());
		q.pop();
	}
	printf("<");
	for (i = 0; i < n-1; i++) {
		printf("%d, ", v[i]);
	}
	printf("%d", v[n - 1]);
	printf(">");
}