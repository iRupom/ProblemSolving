#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int firstUniqChar(string s) {
		map<char, int> mp;

		for (int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}

		for (int i = 0; i < s.length(); i++) {
			if (mp[s[i]] == 1) {
				return i;
			}
		}
		return -1;
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

	string str;

	Solution sol;

	cin >> str;

	cout << sol.firstUniqChar(str) << endl;


	return 0;
}