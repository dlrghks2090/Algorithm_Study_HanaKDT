// 백준_실버2_DFS_11724번_연결 요소의 개수


#include<iostream>

using namespace std;

int N, M;
int map[1001][1001] = { 0, };
int visit[1001] = { 0, };

void dfs(int n) {



	for (int i = 1; i <= N; i++) {
		if (visit[i] == 0 && map[n][i] == 1) {
			visit[i] = 1;
			dfs(i);
		}
	}
}

int main() {

	int sol = 0;

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int u, v;

		cin >> u >> v;

		map[u][v] = map[v][u] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (visit[i] == 0) {
			dfs(i);
			sol++;
		}
	}

	cout << sol;

	return 0;
}
