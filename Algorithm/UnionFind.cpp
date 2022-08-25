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

// unite(x, y): 集合 x と y を併合する. 併合済のとき false, 未併合のとき true が返される.
// find(k): 要素 k が属する集合を求める.
// size(k): 要素 k が属する集合の要素の数を求める.
// same(x, y): 要素 x, y が同じ集合に属するか判定する.
// groups(): 各集合に含まれる要素を返す.

struct UnionFind {
  vector< int > data;

  UnionFind() = default;

  explicit UnionFind(size_t sz) : data(sz, -1) {}

  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if(x == y) return false;
    if(data[x] > data[y]) swap(x, y);
    data[x] += data[y];
    data[y] = x;
    return true;
  }

  int find(int k) {
    if(data[k] < 0) return (k);
    return data[k] = find(data[k]);
  }

  int size(int k) {
    return -data[find(k)];
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }

  vector< vector< int > > groups() {
    int n = (int) data.size();
    vector< vector< int > > ret(n);
    for(int i = 0; i < n; i++) {
      ret[find(i)].emplace_back(i);
    }
    ret.erase(remove_if(begin(ret), end(ret), [&](const vector< int > &v) {
      return v.empty();
    }));
    return ret;
  }
};

int main() {
	int n, m;
	cin >> n >> m;
	
	rep(i, 0, m) {
		int a, b;
		cin >> a >> b;
		
	}
}
