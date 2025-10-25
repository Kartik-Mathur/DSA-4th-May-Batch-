#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
unordered_map<string, int> debt;

void splitwise() {

	multiset<pair<int, string> > m;
	for (auto p : debt) {
		m.insert({p.second, p.first});
	}

	while (!m.empty()) {
		auto start_pair = *m.begin();
		auto end_pair = *m.rbegin();

		m.erase(start_pair);
		m.erase(end_pair);

		string senderName = start_pair.second;
		int senderAmount = start_pair.first;

		string recieverName = end_pair.second;
		int recieverAmount = end_pair.first;

		int transactionAmount = min(recieverAmount, -senderAmount);

		cout << senderName << " gave " << recieverName << " : " << transactionAmount << endl;

		if (-senderAmount > transactionAmount) {
			m.insert({transactionAmount + senderAmount, senderName});
		}
		if (recieverAmount > transactionAmount) {
			m.insert({recieverAmount - transactionAmount, recieverName});
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string senderName, recieverName;
		int amount;
		cin >> senderName >> recieverName >> amount;

		if (debt.count(senderName) == 0) debt[senderName] = 0;
		if (debt.count(recieverName) == 0) debt[recieverName] = 0;

		debt[senderName] -= amount;
		debt[recieverName] += amount;

		if (debt[senderName] == 0) debt.erase(senderName);
		if (debt[recieverName] == 0) debt.erase(recieverName);
	}


	splitwise();


	return 0;
}
















