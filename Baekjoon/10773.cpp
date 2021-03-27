/*#include <stdio.h>
#include <stack>
using namespace std;
stack<int> s;
int main() {
	int n, i, m;
	int sum = 0;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &m);
		if (m == 0) {
			if (s.empty() == 1) {
				return 0;
			}
			s.pop();
		}
		else {
			s.push(m);
		}
	}
	while (s.size() > 0) {
		int top = s.top();
		s.pop();
		sum += top;
	}
	printf("%d", sum);

	return 0;
}*/