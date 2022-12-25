#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	string getHint(string secret, string guess) {
		int fc[15] = {0};
		int fg[15] = {0};
		int bull = 0;

		int ls = secret.size();
		for (int i = 0; i < ls; i++) {
			if (secret[i] == guess[i])
				bull++;
			else {
				fc[secret[i] - '0']++;
				fg[guess[i] - '0']++;
			}
		}

		int sum = 0;
		for (int i = 0; i < 15; i++) {
			sum += min(fc[i], fg[i]);
		}

		string result = "";
		result += to_string(bull);
		result += 'A';
		result += to_string(sum);
		result += 'B';

		return result;
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

	string secret, guess;
	cin >> secret >> guess;

	Solution sol;
	cout << sol.getHint(secret, guess) << endl;


	return 0;
}