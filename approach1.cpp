#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		// check if a substring "ABC" exists within the string
		string temp = s.substr(i, 3);
		sort(temp.begin(), temp.end());
		if (temp == "ABC") {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	return 0;
}
