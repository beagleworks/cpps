// ABC075A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // output
  cout << (a != b ? (b != c ? b : a) : c) << endl;
  return 0;

}