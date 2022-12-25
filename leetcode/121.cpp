#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int mn = 0;
		int mx = 0;
		int sz = prices.size();
		int diff = 0;

		for (int i = 1; i < sz; i++) {
			if (prices[i] < prices[mn]) {
				mn = i;
				mx = i;
			}

			if (prices[i] > prices[mx]) {
				if (prices[i] - prices[mx] > diff) {
					diff = prices[i] - prices[mx];
				}
			}
		}

		return diff;
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

	cout << sol.maxProfit(v) << endl;

	return 0;
}