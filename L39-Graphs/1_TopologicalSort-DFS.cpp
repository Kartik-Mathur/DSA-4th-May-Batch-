#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <deque>
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
				cout << neighbour << ",   ";
			}
			cout << endl;
		}
	}

	void topologicalSortHelper(T src, deque<T> &q, unordered_map<T, bool> &visited) {
		for (auto ch : adj[src])
		{
			if (!visited[ch]) {
				topologicalSortHelper(ch, q, visited);
			}
		}

		visited[src] = true;
		q.push_front(src);
	}

	void topologicalSort() {

		deque<T> q;
		unordered_map<T, bool> visited;
		for (auto p : adj) {
			if (!visited[p.first]) {
				topologicalSortHelper(p.first, q, visited);
			}
		}

		for (auto d : q) {
			cout << d << " ";
		}
	}

};


int main() {
	// DAG: Directed Acyclic Graph
	Graph<string> g;

	g.addEdge("C++", "WebDev", false);
	g.addEdge("WebDev", "CP", false);
	g.addEdge("CP", "Web3", false);
	g.addEdge("DataScience", "Web3", false);
	g.addEdge("WebDev", "DataScience", false);
	g.addEdge("C++", "Android", false);
	g.addEdge("Java", "Android", false);
	g.addEdge("Android", "CyberSecurity", false);

	g.topologicalSort();

	/*
	Java C++ WebDev DataScience CP Web3 Android CyberSecurity
	*/



	return 0;
}
















