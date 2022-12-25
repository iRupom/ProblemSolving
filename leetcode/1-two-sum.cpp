#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

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


	int n, x, target;
	cin >> n >> target;
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> x;
		mp[x] = i;
	}

	vector<int> ans;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		if (mp.find(target - (it->first)) != mp.end()) {
			ans.push_back(it->second);
			ans.push_back(mp[target - (it->first)]);
		}
		if (ans.size() == 2) break;
	}

	cout << ans[0] << " " << ans[1] << endl;

	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}