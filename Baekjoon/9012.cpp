#include <stdio.h>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	int n, i,j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		char ch[51];
		stack<int> s;

		scanf("%s", ch);
		bool isvps= true;
		for (j = 0; j < strlen(ch); j++) {
			if (ch[j] == '(') {
				s.push(1);
			}
			else {
				if (s.empty() == 1) {
					isvps = false;
					break;
				}
				s.pop();
			}
		}
		if (isvps == true) {
			if (s.empty() == 0) {
				isvps = false;
			}
		}
		if (isvps == true) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
}