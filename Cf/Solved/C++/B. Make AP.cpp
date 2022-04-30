//https://codeforces.com/contest/1624/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _                         \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- " << endl;
#define Adbg(a)           \
	for (auto e : a)      \
	{                     \
		cout << e << ' '; \
	};                    \
	cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main()
{
	_ int t;
	cin >> t;
	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		int x = b - (c - b);
		if (x >= a && x != 0 && x % a == 0)
		{
			cout << "YES" << endl;
			continue;
		}
		int y = a + (c - a) / 2;
		if (y >= b && (c-a) % 2 == 0 && y != 0 && y % b == 0)
		{
			cout << "YES" << endl;
			continue;
		}
		int z = a + 2*(b - a);
		if (z >= c && z != 0 && z % c == 0){
			cout << "YES" << endl;
			continue;
		}
		cout << "NO" << endl;
	}
	exit(0);
}
