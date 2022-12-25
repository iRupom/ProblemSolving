#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {

		int hand = 0;

		reverse(digits.begin(), digits.end());

		for (int i = 0; i < digits.size(); i++) {
			if (i == 0) {
				if ((digits[i] + 1 >= 10)) {

					digits[i] = digits[i] + 1 - 10;
					hand = 1;
				}

				else {
					digits[i] = digits[i] + 1;
				}
			}

			else if (hand != 0 and digits[i] + hand >= 10) {
				digits[i] = digits[i] + hand - 10;
				hand = 1;
			}

			else {
				digits[i] = digits[i] + hand;
				hand = 0;
			}
		}

		if (hand) digits.push_back(1);

		reverse(digits.begin(), digits.end());

		return digits;

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

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	Solution sol;

	vector<int> ans = sol.plusOne(v);

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

	cout << endl;


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}