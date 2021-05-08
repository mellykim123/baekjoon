#include <stdio.h>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
int linkedlist[51][51] = { 0 };
int visited[51][51];
int dx[4] = { -1,0,1,0};
int dy[4] = { 0,-1,0,1};
int m, n;
void bfs(int x,int y) {
	int i;
	q.push({ x,y });
	visited[x][y] = 1;
	while (q.empty() == 0) {
		 x = q.front().first;
		 y = q.front().second;
		q.pop();
		for (i = 0; i < 4; i++) {
			int mx = x + dx[i];
			int my = y + dy[i];
			if (mx<0 || mx>n - 1 || my<0 || my>m - 1) {
				continue;
			}
			if (visited[mx][my] == 0 && linkedlist[mx][my] == 1) {
				q.push({mx, my});
				visited[mx][my] = 1;
			}
		}
		

	}

}
int main() {
	int i,num,k,x,y;
	int count = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		for (int j = 0; j < 51; j++) {
			for (k = 0; k < 51; k++) {
				visited[j][k] = 0;
				linkedlist[j][k] = 0;
			}
		}
		count = 0;
		scanf("%d %d %d", &m, &n, &k);
		for (int j = 0; j < k; j++) {
			scanf("%d %d", &x, &y);
			linkedlist[y][x] = 1;
		}
		for (k = 0; k < n; k++) {
			for (int j = 0; j < m; j++) {
				if (visited[k][j] == 0 && linkedlist[k][j] == 1) {
					bfs(k, j);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	
}