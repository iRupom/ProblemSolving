#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define mod 1000000007

void solve(ll n) {
	ll ans = ((((n * (n + 1) % mod) * (4 * n - 1)) % mod) * 337) % mod;
	cout << ans << endl;
}

int main(int argc, char const *argv[])
{
	ll t;
	cin >> t;

	while (t--) {
		ll n;
		cin >> n;

		solve(n);
	}


	return 0;
}
