#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int j = 0;

		for (int i = 0; i < nums.size() - 1; i++) {
			if (nums[i] != nums[i + 1]) {
				nums[j++] = nums[i];
			}
		}

		nums[j++] = nums[nums.size() - 1];
		nums.erase(nums.begin() + j, nums.end());

		return nums.size();
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

	Solution sol;

	int n, x;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	int k = sol.removeDuplicates(v);

	cout << k << endl;

	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}