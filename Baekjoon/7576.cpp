#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
queue<pair<int, int>> q;
int linked[1001][1001] = { 0 };
int visited[1001][1001] = { 0 };
int dx[4] = {-1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int bfs(int n, int m) {
	int i,j;
	int ans = 0;
	while (q.empty() == 0) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (i = 0; i < 4; i++) {
			int mx = x + dx[i];
			int my = y + dy[i];
			if(mx<0||mx>n-1||my<0||my>m-1){
				continue;
			}
			if (visited[mx][my] == 0 && linked[mx][my] == 0) {
				visited[mx][my] = visited[x][y]+1;
				ans = max(ans, visited[mx][my]);
				q.push({ mx,my });
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (visited[i][j] == 0 && linked[i][j] == 0) {
				return -1;
			}
		}
	}
	return ans;
}
int main() {
	int n, m, i, j,num=0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &linked[i][j]);
			if (linked[i][j] == 1) {
				q.push({ i,j });
			}
		}
	}
	int ans= bfs(n, m);
	printf("%d",ans);
	return 0;
}