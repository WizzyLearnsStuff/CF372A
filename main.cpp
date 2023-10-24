#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	for (int &e : v) cin >> e;

	sort(v.begin(), v.end());	

	int hide = 0;
	int p = n / 2;

	for (int i = 0; i < n / 2; i++) {
		while (p < n) {
			if (v[i] * 2  <= v[p]) {
				p++;
				hide++;
				break;
			}
			else p++;
		}
		if (p >= n) goto e;
	}
	e:
	cout << (n - hide);
}
