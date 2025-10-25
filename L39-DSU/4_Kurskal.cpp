#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:

	int* parent;
	int n;
	int* size;
	DSU(int N) {
		n = N + 1;
		parent = new int[N + 1];
		size = new int[N + 1];

		for (int i = 0; i <= N; ++i)
		{
			// Initially har koi khud ka parent hota hai..
			parent[i] = i;
			size[i] = 1;
		}
	}

	int get_leader(int u) { // Will give us the leader
		if (u == parent[u]) return u;

		return parent[u] = get_leader(parent[u]);
	}

	void union_leader(int u, int v) {
		int leader_u = get_leader(u);
		int leader_v = get_leader(v);

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

class Tuple {
public:
	int u, v;
	int dist;
};

bool comp(Tuple &a, Tuple& b) {
	return a.dist < b.dist;
}

int main() {

	vector< Tuple > edges; // EdgeList

	edges.push_back({1, 2, 1});
	edges.push_back({1, 3, 2});
	edges.push_back({2, 4, 8});
	edges.push_back({3, 4, 3});
	edges.push_back({3, 5, 5});
	edges.push_back({5, 4, 4});

	int minweight = 0;

	DSU d(5);

	sort(edges.begin(), edges.end(), comp);
	// for (auto t : edges) {
	// 	cout << t.u << ", " << t.v << ", " << t.dist << endl;
	// }

	// O(Edges)
	for (auto t : edges) {
		int u = t.u;
		int v = t.v;
		int dist = t.dist;

		int leader_u = d.get_leader(u);
		int leader_v = d.get_leader(v);

		if (leader_u != leader_v) {
			d.union_leader(leader_u, leader_v);
			minweight += dist;
		}
	}

	cout << "minweight : " << minweight << endl;



	return 0;
}
















