#include <iostream>
#include <unordered_map>
#include <list>
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
};


int main() {

	Graph<string> g;

	g.addEdge("Putin", "Pope", false);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Modi", "Yogi");
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi" , false);
	g.addEdge("Modi", "Yogi");

	g.print();
	return 0;
}
















