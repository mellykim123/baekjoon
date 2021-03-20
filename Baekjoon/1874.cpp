#include <stdio.h>
#include <stack>
#include <vector>
using namespace std;
stack<int> s;
vector<char> v;
int main() {
	int current = 0;
	int n, i;
	int arr[100001];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= n; i++) {
		s.push(i);
		v.push_back('+');
		while (s.empty()==0&&s.top() == arr[current]) {
			v.push_back('-');
			s.pop();
			current++;
		}
		
	}

	if (s.empty() == 0) {
		printf("NO");
		return 0;
	}
	for (i = 0; i < v.size(); i++) {
		printf("%c\n", v[i]);
	}
	return 0;
}