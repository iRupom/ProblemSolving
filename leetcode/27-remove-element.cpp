#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int j = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] !=  val)
				nums[j++] = nums[i];
		}

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

	int n, target, x;
	cin >> n >> target;

	vector<int> nums;
	for (int i = 0; i < n; i++) {
		cin >> x;
		nums.push_back(x);
	}

	Solution sol;

	int ele = sol.removeElement(nums, target);
	cout << ele << endl;

	for (int i = 0; i < nums.size(); i++)
		std::cout << nums[i] << " ";


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}