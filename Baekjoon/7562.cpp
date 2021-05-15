#include <stdio.h>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
int visited[301][301];
int dx[8] = { 1,2,-1,-2,1,2,-1,-2 };
int dy[8] = { 2,1,2,1,-2,-1,-2,-1 };
int bfs(int x, int y, int s, int e,int len ) {
	visited[x][y] = 1;
	q.push({ x,y });
	while (q.empty() == 0 && visited[s][e] == 0) {
		int i;
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for (i = 0; i < 8; i++) {
			int mx = x + dx[i];
			int my = y + dy[i];
			if (mx >=len || mx<0 || my>=len || my < 0) {
				continue;
			}
			if (visited[mx][my] == 0) {
				visited[mx][my] =visited[x][y]+ 1;
				q.push({ mx,my });
			}
		}
	}
	return visited[s][e]-1;
}
int main(){
	int t,i,m,n,I,s,e,cnt,j,k;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		while (q.empty() == 0) {
			q.pop();
		}
		for (j = 0; j < 300; j++) {
			for (k = 0; k < 300; k++) {
				visited[j][k] = 0;
			}

		}
		scanf("%d", &I);
		scanf("%d %d", &m, &n);
		scanf("%d %d", &s, &e);
		cnt= bfs(m, n, s, e,I);
		printf("%d\n", cnt);
	}
	

}