/*
	problem link: https://codeforces.com/problemset/problem/724/A
	author : rupom
	problem description :
	date : 25/12/2022
	solution approach :
    weeks has only seven days.
	month can be three types : 28 or 30 or 31. first we find the indexes
	of the given days. then adding three combination and modulus by
	7. if it gives second day index then it is leap year. otherwise not
*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> days = {
		"monday",
		"tuesday",
		"wednesday",
		"thursday",
		"friday",
		"saturday",
		"sunday"
	};

	string day1, day2;
	cin >> day1 >> day2;

	// calculating indexes of the days
	int ind1, ind2;
	for (int i = 0; i < 7; i++) {
		if (days[i] == day1) {
			ind1 = i;
		}
		if (days[i] == day2) {
			ind2 = i;
		}
	}

	if ((ind1 + 28) % 7 == ind2 or (ind1 + 30) % 7 == ind2 or (ind1 + 31) % 7 == ind2) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}
