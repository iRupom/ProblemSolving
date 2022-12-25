#include <bits/stdc++.h>
using namespace std;
 
bool prime[90000001];
int n = 90000000;
vector<int> v;
 
void seive() {
 
	for (int i = 2; i * i <= n; i++) {
		if (prime[i] == false) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = true;
			}
		}
	}
 
	for (int i = 2; i <= n; i++) {
		if (prime[i] == false) {
			v.push_back(i);
		}
	}
}
 
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	seive();
	int t, x;
	cin >> t;
 
	while (t--) {
		cin >> x;
		cout << v[x - 1] << endl;
	}
 
	return 0;
} 
