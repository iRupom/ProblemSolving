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
		int pivot = bSearch(nums);
		cout << "Pivot is : " << pivot << endl;
		if (pivot == -1) {
			return nsearch(nums, target, 0, nums.size() - 1);
		} else {
			if (nums[pivot] == target) return pivot;
			if (nums[0] <= target) return nsearch(nums, target, 0, pivot - 1);
			return nsearch(nums, target, pivot + 1, nums.size() - 1);
		}
	}

	int nsearch(vector<int> v, int target, int s, int e) {
		cout << s << " " << e << endl;

		while (s <= e) {
			int mid = s + (e - s) / 2;

			if (v[mid] == target) return mid;
			if (v[mid] > target) e = mid - 1;
			else s = mid + 1;
		}

		return -1;
	}

	int bSearch(vector<int> v) {
		int s = 0;
		int e = v.size() - 1;

		while (s <= e) {
			int mid = s + (e - s) / 2;

			if (mid<e and v[mid]>v[mid + 1]) {
				return mid;
			}

			if (mid > s and v[mid - 1] > v[mid]) {
				return mid - 1;
			}

			if (v[mid] <= v[s]) {
				e = mid - 1;
			}

			else {
				s = mid + 1;
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