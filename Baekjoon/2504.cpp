#include <stdio.h>
#include <stack>
#include <cstring>
using namespace std;
stack<pair<int, int>> s;
int main() {
	int i;
	char ch[31];
	scanf("%s", ch);
	s.push({ 0,0 });
	for (i = 0; i < strlen(ch); i++) {
		if (ch[i] == '(') {
			s.push({ 2, 0 });
		}
		if (ch[i] == '[') {
			s.push({ 3,0 });
		}
		else {
			if (s.empty() == 1) {
				printf("0");
				return 0;
			}
			if (ch[i] == ')') {
				if (s.top().first == 2) {
					int m = s.top().first * s.top().second;
					if (m == 0) {
						m = s.top().first;
					}
					s.pop();
					s.top().second += m;
				}
				else {
					printf("0");
					return 0;
				}
			}
			if (ch[i] == ']') {
				if (s.top().first == 3) {
					int m = s.top().first * s.top().second;
					if (m == 0) {
						m = s.top().first;
					}
					s.pop();
					s.top().second += m;
				}
				else {
					printf("0");
					return 0;
				}
			}
		}
	}
	if (s.size() != 1) {
		printf("0");
		return 0;
	}
	printf("%d", s.top().second);
}
