#include <bits/stdc++.h>
using namespace std;
#define int long long

bool canAllocateCandies(vector<int> &candies, int k, int mid) {
	int maxNumChild = 0;
	for (int piles : candies) {
		maxNumChild += piles / mid;
	}
	return maxNumChild >= k;
}

int maxCandies(vector<int> &candies, int k) {
	int maxCandiesPile = 0;

	maxCandiesPile = INT_MAX;

	int left =  0;
	int right = maxCandiesPile;
	int ans = 0;


	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (canAllocateCandies(candies, k, mid)) {
			ans = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return ans;
}


int32_t main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int k;
	cin >> k;
	int ans = maxCandies(arr, k);
	cout << ans;
}







