#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	bool isValid(string s) {
		if (s.size() == 0) return true;
		stack<char> st;
		int len = s.size();
		for (int i = 0; i < len; i++) {
			if (s[i] == '(' or s[i] == '{' or s[i] == '[')
				st.push(s[i]);
			else {
				if (!st.empty()) {
					if (s[i] == ']' and st.top() != '[') return false;
					else if (s[i] == ')' and st.top() != '(') return false;
					else if (s[i] == '}' and st.top() != '{') return false;
					else st.pop();
				}
				else return false;
			}
		}

		if (st.empty()) return true;
		return false;
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

	Solution sol;

	cout << sol.isValid(s);


	return 0;
}