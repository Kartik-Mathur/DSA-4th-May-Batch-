#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}

	void bfs(T src) {
		queue<T> q;
		unordered_map<T, bool> visited;
		visited[src] = true;
		q.push(src);

		while (!q.empty()) {
			int node = q.front();
			cout << node << " ";
			q.pop();

			for (auto ch : adj[node]) {
				if (!visited[ch]) {
					q.push(ch);
					visited[ch] = true;
				}
			}
		}
		cout << endl;
	}


	int SSSP(T src, T des) {
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		visited[src] = true;
		q.push(src);
		parent[src] = src;
		dist[src] = 0;
		while (!q.empty()) {
			int node = q.front();
			q.pop();

			for (auto ch : adj[node]) {
				if (!visited[ch]) {
					parent[ch] = node;
					dist[ch] = dist[node] + 1;
					q.push(ch);
					visited[ch] = true;
				}
			}
		}

		T des_copy = des;
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;

		des = des_copy;
		return dist[des];
	}
};


int main() {
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	Graph<int> g;
	for (int i = 0; i <= 36; ++i)
	{
		int u = i;
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	int ans = g.SSSP(0, 36);
	cout << "Shortest Distance " << ans << endl;


	return 0;
}
















