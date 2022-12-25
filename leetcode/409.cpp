#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int longestPalindrome(string s) {

		/*
			problem link: https://leetcode.com/problems/longest-palindrome/
			author : rupom
			problem description :
			date :
			solution approach : we can take one largest odd number
			ans all even size character
		*/

		map<char, int> mp;
		int sz = s.size();

		for (int i = 0; i < sz; i++) {
			mp[s[i]]++;
		}

		int cnt = 0;
		int odd = 0;
		bool flag = false;

		for (auto it = mp.begin(); it != mp.end(); it++) {
			int val = it->second;
			if (val % 2 == 0) cnt += val;
			if (val % 2 == 1) {
				flag = true;
				cnt += (val - 1);
			}
		}

		if (flag) cnt++;

		return cnt;
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
	Solution sol;

	cin >> s;

	cout << sol.longestPalindrome(s) << endl;

	return 0;
}