#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vi vector<int>
#define vll vector<long long>

#define f(i, s, e) for (long long int i = s; i < e; i++)

#define pb push_back

const ll INF = 1e9;

void solve() {
  ll x, y, k;
  cin >> x >> y >> k;
  x = ceil((float)x / k);
  y = ceil((float)y / k);
  if (y >= x) {
    cout << 2 * y << endl;
  } else {
    cout << 2 * x - 1 << endl;
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tttt = 1;
  cin >> tttt;
  for (int ttt = 1; ttt <= tttt; ttt++) {
    // cout << "Case #" << ttt << ": ";
    solve();
  }
}
