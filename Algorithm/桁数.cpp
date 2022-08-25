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


// 桁数
int getDigit(ll n) {
	int res = 0;
	while(n > 0) {
		n /= 10;
		res++;
	}
	return res;
}

// 合計
int getDigitSum(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

// 合計（再帰処理）
int getDigitSum(int n) {
	return n ? getDigitSum(n / 10) + n % 10 : n;
}


int main()
{
	int n;
	cin >> n;
}
