#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		vector<vector<int>> v;
		vector<int> ret;

		for (int i = 0; i <= rowIndex; i++) {
			vector<int> temp;

			for (int j = 0; j <= i; j++) {
				if (j == 0 or j == i) {
					temp.push_back(1);
				}
				else {
					temp.push_back(v[i - 1][j] + v[i - 1][j - 1]);
				}
			}

			v.push_back(temp);

			ret = temp;
		}

		return ret;

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

	Solution sol;

	vector<int> v;
	int n;
	cin >> n;
	v = sol.getRow(n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}