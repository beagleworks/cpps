// ABC156A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, r;
  cin >> n >> r;

  // solve
  int ans = 100*max(10-n, 0) + r;

  // output
  cout << ans << endl;
  return 0;

}