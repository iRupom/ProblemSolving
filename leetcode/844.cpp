#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	bool backspaceCompare(string s, string t) {
		string ans1 = traverse(s);
		string ans2 = traverse(t);
		if (ans2.compare(ans1) == 0) return true;
		return false;
	}

	string traverse(string str) {
		stack<char> s;
		int len = str.size();

		for (int i = 0; i < len; i++) {
			if (str[i] != '#') {
				s.push(str[i]);
			}
			else if (str[i] == '#') {
				if (!s.empty()) {
					s.pop();
				}
			}
		}

		string ans = "";
		while (!s.empty()) {
			ans += s.top();
			s.pop();
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

	string s, t;
	cin >> s >> t;

	Solution sol;
	cout << sol.backspaceCompare(s, t);


	return 0;
}