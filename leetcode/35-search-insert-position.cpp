#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {

		int pos = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

		return pos;

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
	int n, val, x;
	cin >> n >> val;

	vector<int> nums;

	for (int i = 0; i < n; i++) {
		cin >> x;
		nums.push_back(x);
	}

	int pos = sol.searchInsert(nums, val);

	cout << pos << endl;


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}