// ABC155C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }

  // output
  int ans = 0;
  set<string> al;
  for (auto [k, v] : mp) {
    if (v > ans) {
      ans = v;
      al.clear();
    }
    if (v == ans) {
      al.emplace(k);
    }
  }

  for (auto w : al) cout << w << endl;
  return 0;

}