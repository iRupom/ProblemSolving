#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first

#define s second

class Solution {
public:
	vector<int> targetIndices(vector<int>& nums, int target) {
		vector<int> ans;

		sort(nums.begin(), nums.end());

		int mn = bSearch(nums, target, true);
		int mx;
		if (mn != -1) {
			mx = bSearch(nums, target, false);
		}
		else return ans;

		for (int i = mn; i <= mx; i++) {
			ans.push_back(i);
		}

		return ans;

	}
	int bSearch(vector<int> v, int target, bool flag) {
		int s = 0;
		int e = v.size() - 1;
		int ans = -1;

		while (s <= e) {
			int mid = s + (e - s) / 2;

			if (v[mid] == target) {
				ans = mid;
				if (flag) {
					e = mid - 1;
				} else {
					s = mid + 1;
				}
			}

			else if (v[mid] < target) {
				s = mid + 1;
			}
			else {
				e = mid - 1;
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

	Solution sol;
	int target;
	cin >> target;

	ans = sol.targetIndices(v, target);
	if (ans.size() == 0) cout << "Empty" << endl;
	else {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";
	}

	return 0;
}