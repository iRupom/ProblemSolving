#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int> > v(numRows);

		for (int i = 0; i < numRows; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0) v[i].push_back(1);
				else if (i == j) v[i].push_back(1);

				else {
					int x = v[i - 1][j - 1] + v[i - 1][j];

					v[i].push_back(x);
				}
			}
		}

		return v;
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

	int numRows;
	cin >> numRows;

	vector<vector<int> > v;
	Solution sol;

	v = sol.generate(numRows);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << endl;
	}


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}