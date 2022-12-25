#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int search(vector<int>& nums, int target) {
		int start = 0;
		int end = nums.size() - 1;

		while (start <= end) {
			int mid = (start + end) >> 1;

			// if target element is holding in mid position

			if (nums[mid] == target) return mid;

			// check if left part is sorted
			if (nums[start] <= nums[mid]) {

				// if target lies in the left part

				if (nums[start] <= target and nums[mid] >= target) {
					end = mid - 1;
				} else {
					start = mid + 1;
				}
			}

			// right part is sorted

			else {
				// check if target lies in right part

				if (nums[mid] < target and nums[end] >= target) {
					start = mid + 1;
				}
				else {
					end = mid - 1;
				}
			}
		}

		return -1;
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

	cout << sol.search(v, target) << endl;

	return 0;
}