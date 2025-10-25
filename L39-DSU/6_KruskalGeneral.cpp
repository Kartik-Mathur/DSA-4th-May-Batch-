#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Pair {
public:
	string u, v;
};

template<typename T>
class DSU {
public:

	unordered_map<T, T> parent;
	unordered_map<T, int> size;
	DSU() {

	}

	DSU(vector<Pair> edges) {
		int N = edges.size();
		for (int i = 0; i < N; ++i)
		{
			// Initially har koi khud ka parent hota hai..
			T u = edges[i].u;
			T v = edges[i].v;

			parent[u] = u;
			parent[v] = v;

			size[u] = 1;
			size[v] = 1;
		}
	}

	T get_leader(T u) { // Will give us the leader
		if (u == parent[u]) return u;

		return parent[u] = get_leader(parent[u]);
	}

	void union_leader(T u, T v) {
		T leader_u = get_leader(u);
		T leader_v = get_leader(v);

		if (leader_u != leader_v) {
			// Har baari leader_u ko hi parent banaunga...
			if (size[leader_u] < size[leader_v]) {
				swap(leader_u, leader_v);
			}
			parent[leader_v] = leader_u;
			size[leader_u] += size[leader_v];
		}
	}
};


int main() {
	// vector<string> allNodes = {"Web", "C++", "CP", "DataScience", "Android", "Java", "CyberSecurity"};

	vector< Pair > edges;
	edges.push_back({"C++", "WebDev"});
	edges.push_back({"WebDev", "CP"});
	edges.push_back({"CP", "Web3"});
	// edges.push_back({"Web3", "C++"});
	// edges.push_back({"DataScience", "Web3"});
	edges.push_back({"WebDev", "DataScience"});
	edges.push_back({"C++", "Android"});
	edges.push_back({"Java", "Android"});
	edges.push_back({"Android", "CyberSecurity"});


	DSU<string> d(edges);

	for (auto p : edges) {
		string u = p.u;
		string v = p.v;

		string leader_u = d.get_leader(u);
		string leader_v = d.get_leader(v);

		if (leader_u == leader_v) {
			cout << "Cylic\n";
			return 0;
		}

		d.union_leader(leader_u, leader_v);
	}

	cout << "Not Cyclic\n";




	return 0;
}
















