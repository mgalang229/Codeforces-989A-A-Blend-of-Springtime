#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	vector<string> res(n);
	for (int i = 0; i < n; i++) {
		// spread the petals to the adjacent cells (both next and previous)
		string temp = (s[i] == '.' ? "" : string(1, s[i]));
		if (i - 1 >= 0 && s[i - 1] != '.') {
			temp += s[i - 1];
		}
		if (i + 1 < n && s[i + 1] != '.') {
			temp += s[i + 1];
		}
		res.push_back(temp);
	}
	// check if one cell would contain ABC
	for (auto& e : res) {
		sort(e.begin(), e.end());
		if (e == "ABC") {
			cout << "Yes" << '\n';
			return 0;
		}
	}
	cout << "No" << '\n';
	return 0;
}
