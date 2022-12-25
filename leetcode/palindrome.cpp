#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	bool isPalindrome(int x) {
		stringstream ss;
		ss << x;

		string sx = ss.str();
		string reversed = "";
		if (sx[0] == '-') {
			for (int i = sx.length() - 1; i >= 1; i--) {
				reversed += sx[i];
			}

			reversed = reversed + '-';
		}
		else {
			for (int i = sx.length() - 1; i >= 0; i--) {
				reversed += sx[i];
			}
		}


		if (sx.compare(reversed) == 0)
			return true;
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

	clock_t z = clock();

	int n;
	cin >> n;

	Solution sol;

	cout << sol.isPalindrome(n) << endl;


	cerr << "Runtime : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}