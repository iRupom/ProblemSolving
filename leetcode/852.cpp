#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& arr) {
		int s = 0;
		int e = arr.size() - 1;

		while (s < e) {
			int mid = s + (e - s) / 2;
			if (arr[mid] < arr[mid + 1]) s = mid + 1;
			else if (arr[mid] > arr[mid + 1]) e = mid;
		}

		return s;
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

	vector<int> v;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	Solution sol;

	int ans = sol.peakIndexInMountainArray(v);

	cout << ans << endl;

	return 0;
}