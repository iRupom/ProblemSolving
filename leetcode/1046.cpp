#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

class Solution {
public:
	int lastStoneWeight(vector<int>& stones) {
		priority_queue<int> pq;

		for (int i = 0; i < stones.size(); i++) {
			pq.push(stones[i]);
		}

		while (pq.size() != 1) {
			int x = pq.top();
			pq.pop();
			int y = pq.top();
			pq.pop();
			if (x > y) {
				pq.push(x - y);
			}
		}

		return pq.top();
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
	int n;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	Solution sol;
	cout << sol.lastStoneWeight(v) << endl;


	return 0;
}