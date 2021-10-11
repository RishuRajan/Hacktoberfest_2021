#include<bits/stdc++.h>
using namespace std;

class OverLapped {

public:
	vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
		vector<vector<int>> res;
		if (!intervals.size()) return res;
		sort(intervals.begin(), intervals.end());
		int ff = intervals[0][0];
		int ss = intervals[0][1];
		for (int i = 1; i < intervals.size(); ++i) {
			if (intervals[i][0] <= ss)
				ss = max(ss, intervals[i][1]);
			else {
				res.push_back({ff, ss});
				ff = intervals[i][0];
				ss = intervals[i][1];
			}
		}
		res.push_back({ff, ss});
	}
};

int main() {
	int n;
	cin >> n;
	vector<vector<int>> Intervals(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		Intervals[i].push_back(x);
		Intervals[i].push_back(y);
	}
	OverLapped obj;
	vector<vector<int>> ans = obj.overlappedInterval(Intervals);
	for (auto i : ans) {
		cout << "[ ";
		for (auto j : i)
			cout << j << ' ';
		cout << "]";
		cout << '\n';
	}
	return 0;
}
