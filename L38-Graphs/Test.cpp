#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list< pair<T, int> > > adj;

	void addEdge(T u, T v, int dist, bool bidir = true) {
		adj[u].push_back({v, dist});
		if (bidir) {
			adj[v].push_back({u, dist});
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto child_pair : p.second) {
				cout << "( " << child_pair.first << ", " << child_pair.second << " ) ";
			}
			cout << endl;
		}
	}

};


int main() {
	Graph <string> g;

	g.addEdge("Amristar", "Jaipur", 4);
	g.addEdge("Mumbai", "Jaipur", 8);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Amristar", "Agra", 1);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Bhopal", "Agra", 2);
	g.addEdge("Bhopal", "Mumbai", 3);

	g.print();

	return 0;
}
















