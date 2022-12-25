#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"
#define pb push_back
#define f first
#define s second

int solve(uint32_t n) {
	int ans = 0;

	while (n != 0) {
		ans += (n % 2);
		n /= 2;
	}

	return ans;

}


int32_t main(int32_t argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	uint32_t k;
	cin >> k;

	cout << solve(k) << endl;

	return 0;
}