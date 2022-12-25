#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	string decodeString(string s) {
		int i = 0;
		string result = decoder(s, i);

		return result;
	}

	string decoder(string &s, int &i) {
		string result = "";
		int len = s.size();

		while (i < len and s[i] != ']') {
			if (isdigit(s[i])) {
				int k = 0;
				while (isdigit(s[i]) and i < len) {
					k = k * 10 + (s[i] - '0');
					i++;
				}
				i++; // for first bracket
				// recursively call for next one
				string r = decoder(s, i);
				while (k--) {
					result += r;
				}

				i++;
			}
			else {
				result += s[i++];
			}
		}

		cout << result << endl;
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

	string str;

	cin >> str;

	Solution sol;

	string ans = sol.decodeString(str);


	return 0;
}