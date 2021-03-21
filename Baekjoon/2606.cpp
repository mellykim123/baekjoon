#include <stdio.h>
int linked[101][101] = { 0 };
int visited[101] = { 0 };
void dfs(int n, int v) {
	int i;
	visited[v] = 1;
	for (i = 1; i <= n; i++) {
		if (visited[i] == 0 && linked[v][i] == 1) {
			dfs(n, i);
		}
	}
}
int main() {
	int n, v,i,n1,n2,count=0;
	scanf("%d", &n);
	scanf("%d", &v);
	for (i = 1; i <= v; i++) {
		scanf("%d %d", &n1, &n2);
		linked[n1][n2] = 1;
		linked[n2][n1] = 1;
	}
	dfs(n, 1);
	for (i = 2; i <= n; i++) {
		if (visited[i]== 1) {
			count++;
		}
	}
	printf("%d", count);
}