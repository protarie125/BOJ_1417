#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using PQ = priority_queue<int>;

PQ q;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	int x1;
	cin >> x1;

	for (auto i = 2; i <= n; ++i) {
		int x;
		cin >> x;

		q.push(x);
	}

	auto ans = int{ 0 };
	while (!q.empty()) {
		auto x = q.top();
		q.pop();

		if (x < x1) {
			break;
		}

		++x1;
		++ans;
		q.push(x - 1);
	}

	cout << ans;

	return 0;
}