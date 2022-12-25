#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		vector<string> ans;
		vector<pair<string, int>> vec;
		map<string, int> mp;
		for (int i = 0; i < words.size(); i++) {
			mp[words[i]]++;
		}


		for (auto it = mp.begin(); it != mp.end(); it++) {
			vec.push_back({it->first, it->second});
		}

		sort(vec.begin(), vec.end(), cmp);



		for (int i = 0; i < k; i++) {
			ans.push_back(vec[i].first);
		}


		return ans;

	}

	static bool cmp(pair<string, int> a, pair<string, int> b) {
		if (a.second > b.second) return true;
		else if (a.second == b.second)
			return a.first < b.first;
		return false;
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
	vector<string> v;
	string x;

	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	int k;
	cin >> k;

	Solution sol;

	vector<string> ans = sol.topKFrequent(v, k);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}