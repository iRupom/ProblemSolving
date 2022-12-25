#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		int start = 0;
		int sz = letters.size();
		int end = sz - 1;
		int index;

		while (start <= end) {
			int mid = start + (end - start) / 2;
			if (letters[mid] <= target) start = mid + 1;
			else end = mid - 1;
		}

		if (start == sz) return letters[start % sz];
		return letters[start];
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

	vector<char> v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char ch;
		cin >> ch;
		v.push_back(ch);
	}

	char target;
	cin >> target;
	Solution sol;
	char next = sol.nextGreatestLetter(v, target);

	cout << next << endl;

	return 0;
}