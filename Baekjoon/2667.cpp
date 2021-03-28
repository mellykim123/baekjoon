#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
queue<pair<int, int>> q;
vector<int>v;
char linked[26][26] = { 0 };
int visited[26][26] = { 0 };
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
void bfs(int i, int j, int n,int num) {
	int k;
	int count = 0;
	visited[i][j] = num;
	q.push({ i,j });
	while (q.empty() == 0) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		count++;
		/*for (k = 0; k < 4; k++) {
			int mx = x + dx[k];
			int my = y + dy[k];
			if (mx < 0 || mx >= n || my < 0 || my >= n) continue;
			if (visited[mx][my] == 0 && linked[mx][my] == '1') {
				visited[mx][my] = num;
				q.push({ mx, my });
			}
		}*/
		if (x + 1 <= n - 1 && visited[x+1][y]==0&&linked[x + 1][y] == '1') {
			visited[x + 1][y] = num;
			q.push({ x + 1,y });
		}
		if (x - 1 >= 0 && visited[x - 1][y] == 0 && linked[x - 1][y] == '1') {
			visited[x - 1][y] = num;
			q.push({ x - 1,y });
		}
		if (y + 1 <= n - 1 && visited[x][y+1] == 0 && linked[x][y + 1] == '1') {
			visited[x][y + 1] = num;
			q.push({ x,y + 1 });
		}
		if (y -1 >= 0 && visited[x][y-1] == 0 && linked[x][y - 1] == '1') {
			visited[x][y - 1] = num;
			q.push({ x,y - 1 });
		}
	}
	v.push_back(count);
}
int main() {
	int n, i,j;
	int num = 1;
	scanf("%d%*c", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", linked[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (visited[i][j] == 0 && linked[i][j] == '1') {
				bfs(i, j, n,num);
				num++;
			}
		}
	}
	sort(v.begin(), v.end());
	printf("%d\n", num-1);
	for (i = 0; i < v.size(); i++) {
		printf("%d\n", v[i]);
	}
	return 0;
}