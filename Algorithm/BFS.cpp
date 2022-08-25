#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <unordered_map>
#include <unordered_set>
#include <vector>
// #include <complex>
using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using psi = pair<string, int>;
template <typename T>
T POW(int x, T n)
{
	T res = 1;
	for (ll i = 0; i < n; ++i)
		res *= x;
	return res;
}
template <typename T>
T FAC(T n)
{
	T res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}
template <typename T>
T COM(T n, T r)
{
	T res = 1;
	for (ll i = n; i > n - r; i--)
		res *= i;
	for (ll i = 1; i <= r; i++)
		res /= i;
	return res;
}
#define rep(i, a, b) for (int i = a; i < b; i++)
#define urep(i, a, b) for (int i = a; i <= b; i++)
#define drep(i, a, b) for (int i = a; i >= b; i--)
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())
#define REVERSE(a) reverse(a.begin(), a.end());
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vb vector<bool>
#define YesNo(a) a ? cout << "Yes" << endl : cout << "No" << endl;
#define YESNO(a) a ? cout << "YES" << endl : cout << "NO" << endl;
#define yesno(a) a ? cout << "yes" << endl : cout << "no" << endl;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};


int main() {
	int n, m;
	cin >> n >> m;
	vector<vi> g(n);
	rep(i, 0, m) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	// 頂点集合
	vi nodes = {0};
	// 利用されたフェーズ
	vi dist(n, -1);
	dist[0] = 0;
	
	rep(i, 0, n) {
		SORT(nodes);
		for(auto p : nodes) {
			cout << p << " ";
		}
		cout << endl;
		
		vi nx;
		for(auto p : nodes) {
			for(auto q : g[p]) {
				if(dist[q] == -1) {
					dist[q] = i + 1;
					nx.push_back(q);
				}
			}
		}
		nodes = nx;
	}
}
