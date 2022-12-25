#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		vector<int> ans;

		if (nums.size() == 0) {
			ans.push_back(-1);
			ans.push_back(-1);
			return ans;
		}

		int first = bSearch(nums, target, true);
		int last = bSearch(nums, target, false);

		ans.push_back(first);
		ans.push_back(last);

		return ans;
	}

	int bSearch(vector<int> nums, int target, int isFirst) {
		int s = 0;
		int ans = -1;
		int e = nums.size() - 1;

		while (s <= e) {
			int mid = (s + e) / 2;
			if (nums[mid] < target) s = mid + 1;
			else if (nums[mid] > target) e = mid - 1;
			else {
				ans = mid;
				if (isFirst) e = mid - 1;
				else s = mid + 1;
			}
		}

		return ans;
	}
};

int32_t main(int32_t argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("lci.txt", "r", stdin);
	freopen("lco.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int target;
	cin >> target;

	vector<int> ans;

	Solution sol;
	ans = sol.searchRange(v, target);

	cout << ans[0] << " " << ans[1] << endl;

	return 0;
}