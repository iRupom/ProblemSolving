#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
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

	int n, m, x;
	cin >> m >> n;

	vector<int> nums1;
	vector<int> nums2;

	for (int i = 0; i < m; i++) {
		cin >> x;
		nums1.push_back(x);
	}

	// printing vector nums1
	// for (int i = 0; i < nums1.size(); i++)
	// 	cout << nums1[i] << " ";
	// cout << endl;

	for (int i = 0; i < n; i++) {
		cin >> x;
		nums2.push_back(x);
	}

	// printing second vector

	// for (int i = 0; i < nums2.size(); i++)
	// 	cout << nums2[i] << " ";
	// cout << endl;

	Solution sol;

	sol.merge(nums1, m, nums2, n);


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}