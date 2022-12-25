#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		int arr[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}

		int pregcd[n + 2];
		int postgcd[n + 2];

		pregcd[0] = 0;
		postgcd[n + 1] = 0;

		// calculating pre gcd
		for (int i = 1; i <= n; i++) {
			pregcd[i] = gcd(pregcd[i - 1], arr[i]);
		}

		// calculating post gcd
		for (int i = n; i >= 1; i--) {
			postgcd[i] = gcd(postgcd[i + 1], arr[i]);
		}

		// queries

		for (int i = 0; i < q; i++) {
			int l, r;
			cin >> l >> r;

			cout << gcd(pregcd[l - 1], postgcd[r + 1]) << endl;
		}

	}


	return 0;
}
