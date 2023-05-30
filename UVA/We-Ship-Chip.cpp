#include <bits/stdc++.h>
using namespace std;

map<string, int> visited;
map<string, string> route;
map<string, vector<string>> graph;

void bfs(string source) {
	visited[source] = 1;
	queue<string> q;
	q.push(source);

	while (!q.empty()) {
		string node = q.front();
		q.pop();
		for (int i = 0; i < graph[node].size(); i++) {
			if (visited[graph[node][i]] == 0) {
				visited[graph[node][i]] = 1;
				route[graph[node][i]] = node;
				q.push(graph[node][i]);
			}
		}
	}
}

void printRoute(string destination, string source) {
	if (source == destination) return;
	printRoute(route[destination], destination);
	if (route[destination] != "")
		cout << route[destination] << "  " << destination << endl;
}


int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("F:/CP/input.txt", "r", stdin);
	freopen("F:/CP/output.txt", "w", stdout);
#endif

	int n;
	while (cin >> n) {
		graph.clear();

		for (int i = 0; i < n; i++) {
			string a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
			visited[a] = 0;
			visited[b] = 0;
		}

		string source, destination;
		cin >> source >> destination;
		bfs(source);

		if (visited[destination] == 0) {
			cout << "No route\n";
		} else {
			printRoute(destination, source);
		}
		cout << "\n";

	}

	return 0;
}
