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

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << ' ';
		visited[src] = true;

		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;

		dfsHelper(src, visited);
	}


};


int main() {
	Graph <int> g;
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 2);
	g.addEdge(4, 2);
	g.addEdge(4, 3);
	g.addEdge(3, 2);
	g.addEdge(3, 5);

	// unordered_map<int, bool> visited;
	// g.dfsHelper(1, visited);

	g.dfs(1);

	return 0;
}
















