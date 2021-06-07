#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k, n;
	cin >> k >> n;
	vector<string> a(k);
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	vector<string> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		bool checker = false;
		for (int j = 0; j < k; j++) {
			if (b[i].find(a[j]) != string::npos) {
				// check the current string (from vector 'b') if it contains a substring
				// that is one of the strings that can be found in vector 'a'
				// set 'checker' to true and break the loop
				checker = true;
				break;
			}
		}
		// check whether 'checker' is true or the size of the current string is >= 47
		if (checker || (int) b[i].size() >= 47) {
			cout << "Good";
		} else {
			cout << "Bad";
		}
		cout << '\n';
	}
	return 0;
}
