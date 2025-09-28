class Solution {
public:
	bool cmp(vector<int> &a, vector<int> &b) {
		return a[0] < b[0];
	}

	int minMeetingRooms(vector<vector<int>>& intervals) {
		sort(intervals.begin(), intervals.end(), cmp);

		priority_queue<int, vector<int>, greater<int> > h; // Minheap

		for (int i = 0; i < intervals.size(); ++i)
		{
			int st = intervals[i][0];
			int et = intervals[i][1];
			if (h.empty()) {
				h.push(et);
			}
			else {
				if (st >= h.top()) {
					h.pop();
				}

				h.push(et);
			}
		}

		return h.size();
	}
};