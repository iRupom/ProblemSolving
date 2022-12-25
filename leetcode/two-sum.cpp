#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans;
		unordered_map<int, int> mp;

		for (int i = 0; i < nums.size(); i++) {
			if (mp.find(target - nums[i]) != mp.end()) {
				ans.push_back(mp[target - nums[i]]);
				ans.push_back(i);
				return ans;

			}

			mp[nums[i]] = i;
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

	clock_t z = clock();

	vector<int> nums, ans;
	int target, n;
	cin >> n >> target;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		nums.push_back(x);
	}

	Solution sol;
	ans = sol.twoSum(nums, target);

	cout << ans[0] << " " << ans[1] << endl;


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}