#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int characterReplacement(string s, int k) {
		map<char, int> mp;
		int len = s.size();

		int left = 0;
		int right = 0;
		int mx = 0;
		int ans = 0;

		while (right < len) {
			mp[s[right]]++;
			mx = max(mx, mp[s[right]]);

			int elements  = (right - left + 1) - mx;
			while (elements > k) {
				mp[s[left]]--;
				left++;
				elements = (right - left + 1) - mx;
			}

			ans = max(ans, right - left + 1);
			left++;
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

	string s;
	cin >> s;
	int k;
	cin >> k;

	Solution sol;

	cout << sol.characterReplacement(s, k);

	return 0;
}