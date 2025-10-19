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
				cout << neighbour << ",   ";
			}
			cout << endl;
		}
	}

	bool isCyclicHelper(T src, unordered_map<T, bool> &inPath, unordered_map<T, bool> &visited) {

		visited[src] = inPath[src] = true;
		for (auto ch : adj[src]) {
			if (visited[ch] == true and inPath[ch] == true) {
				return true;
			}
			if (!visited[ch]) {
				bool ans = isCyclicHelper(ch, inPath, visited);
				if (ans) return true;
			}
		}

		inPath[src] = false; // backtracking
		return false;
	}

	bool isCyclic() {
		unordered_map<T, bool> inPath, visited;

		for (auto p : adj) {
			if (!visited[p.first]) {
				bool kyaCycleMilli = isCyclicHelper(p.first, inPath, visited);
				if (kyaCycleMilli) return true;
			}
		}

		return false;
	}
};


int main() {
	// DAG: Directed Acyclic Graph
	Graph<string> g;

	g.addEdge("C++", "WebDev", false);
	g.addEdge("WebDev", "CP", false);
	g.addEdge("CP", "Web3", false);
	g.addEdge("Web3", "C++", false);
	g.addEdge("DataScience", "Web3", false);
	g.addEdge("WebDev", "DataScience", false);
	g.addEdge("C++", "Android", false);
	g.addEdge("Java", "Android", false);
	g.addEdge("Android", "CyberSecurity", false);

	// g.print();
	if (g.isCyclic()) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}




	return 0;
}
















