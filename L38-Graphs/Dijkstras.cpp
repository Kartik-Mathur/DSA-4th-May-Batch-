#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <set>
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

	void dijkstras(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		for (auto p : adj) {
			dist[p.first] = INT_MAX;
		}

		set<pair<int, T> > s;
		dist[src] = 0;
		parent[src] = src;

		s.insert({0, src});

		while (!s.empty()) {
			auto p = *(s.begin());
			s.erase(s.begin());
			T x = p.second;
			int d = p.first;

			for (auto cp : adj[x]) {
				T ch = cp.first;
				int ed = cp.second;
				if (d + ed < dist[ch]) {
					auto f = s.find({dist[ch], ch });
					if (f != s.end()) {
						s.erase(f);
					}

					dist[ch] = d + ed;
					parent[ch] = x;
					s.insert({d + ed, ch});
				}
			}
		}


		for (auto p : dist) {
			cout << "Distance of " << p.first << " from " << src << " " << p.second << endl;
		}

		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
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

	// g.print();
	g.dijkstras("Amristar", "Mumbai");

	return 0;
}
















