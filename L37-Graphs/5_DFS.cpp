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

	void componentCountHelper(T src, unordered_map<T, bool> &visited) {
		visited[src] = true;
		cout << src << " ";
		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				componentCountHelper(ch, visited);
			}
		}
	}

	int componentCount() {
		unordered_map<T, bool> visited;

		int cnt = 0;
		for (auto p : adj) {
			if (!visited[p.first]) {
				componentCountHelper(p.first, visited);
				cnt++;
			}
		}

		return cnt;
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
	g.addEdge(6, 7);
	g.addEdge(8, 7);

	// unordered_map<int, bool> visited;
	// g.dfsHelper(1, visited);

	int ans = g.componentCount();
	cout << "\nTotal Components : " << ans << endl;

	return 0;
}
















