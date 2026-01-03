#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long int;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll ans = 1;

  for (int i = 2; i <= 20; i++) {
    ans = lcm(ans, i);
  }
  cout << ans << "\n";
}
