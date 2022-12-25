#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int> ans;
		int slen = s.size();
		int plen = p.size();

		if (plen > slen) return ans;

		vector<int> phash(26, 0);
		vector<int> shash(26, 0);

		int left = 0;
		int right = 0;

		for (int i = 0; i < plen; i++) {
			phash[p[i] - 'a']++;
		}

		for (left = 0; left <= slen - plen; left++) {


			for (int i = left; i < left + plen; i++) {
				shash[s[i] - 'a']++;
			}
			if (phash == shash) {
				ans.push_back(left);
			}
			fill(shash.begin(), shash.end(), 0);

		}


		return ans;
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

	string s, p;

	cin >> s >> p;

	// cout << s.size() << endl;
	// cout << p.size() << endl;

	Solution sol;

	sol.findAnagrams(s, p);

	return 0;
}