#include <iostream>
using namespace std;

class DSU {
public:

	int* parent;
	int n;
	int* rank;
	DSU(int N) {
		n = N + 1;
		parent = new int[N + 1];
		rank = new int[N + 1];

		for (int i = 0; i <= N; ++i)
		{
			// Initially har koi khud ka parent hota hai..
			parent[i] = i;
			rank[i] = 1;
		}
	}

	int get_leader(int u) { // Will give us the leader
		if (u == parent[u]) return u;

		return get_leader(parent[u]);
	}

	int union_leader(int u, int v) {
		int leader_u = get_leader(u);
		int leader_v = get_leader(v);

		if (leader_u != leader_v) {
			// Har baari leader_u ko hi parent banaunga...
			if (rank[leader_u] < rank[leader_v]) {
				swap(leader_u, leader_v);
			}


			parent[leader_v] = leader_u;
			if (rank[leader_u] == rank[leader_v]) {
				rank[leader_u]++;
			}
		}
	}

};

int main() {


	return 0;
}
















