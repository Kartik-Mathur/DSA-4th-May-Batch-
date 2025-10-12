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

	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 2);
	g.addEdge(4, 2);
	g.addEdge(4, 3);
	g.addEdge(3, 2);
	g.addEdge(3, 5);

	g.bfs(1);
	int ans = g.SSSP(1, 5);
	cout << "Shortest Distance " << ans << endl;

	/*
	Graph<string> g;

	g.addEdge("Putin", "Pope", false);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Modi", "Yogi");
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi" , false);
	g.addEdge("Modi", "Yogi");

	g.print();
	*/
	return 0;
}
















