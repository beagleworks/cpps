// ABC118C

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
  int ans = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (ans == 0) ans = a;
    else ans = gcd(ans, a);
  }
  

  // output
  cout << ans << endl;
  return 0;

}