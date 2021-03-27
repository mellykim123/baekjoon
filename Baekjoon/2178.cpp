#include <stdio.h>
#include<queue>
using namespace std;
queue<pair<int,int>> q;
char linked[101][101] = { 0 };
int visited[101][101] = { 0 };
void bfs(int m, int n) {
	visited[0][0] = 1;
	q.push({ 0,0 });
	while (q.empty() == 0) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		if (x+1<n &&visited[x + 1][y] == 0 && linked[x + 1][y] == '1') {
			q.push({ x + 1,y });
			visited[x + 1][y] = visited[x][y]+1;
		}
		if (x - 1 >= 0 && visited[x - 1][y] == 0 && linked[x - 1][y] == '1') {
			q.push({ x - 1,y });
			visited[x - 1][y] = visited[x][y] + 1;
		}
		if (y + 1 < m && visited[x][y+1] == 0 && linked[x][y+1] == '1') {
			q.push({ x,y+1 });
			visited[x][y+1] = visited[x][y] + 1;
		}
		if (y - 1 >= 0 && visited[x][y-1] == 0 && linked[x][y-1] == '1') {
			q.push({ x,y-1 });
			visited[x][y-1] = visited[x][y] + 1;
		}
	}

}
int main() {
	int n, m,i;
	scanf("%d %d%*c", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%s", linked[i]);
	}
	bfs(m, n);
	printf("%d", visited[n-1][m-1]);
}