#include <bits/stdc++.h>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long ll;

bool primeNumber(int n) {

  if (n <= 1 || ((n > 2) && (n % 2 == 0))) {
    return false;
  } else {
    if (n == 2) {
      return true;
    } else {
      for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
          return false;
        }
      }
      return true;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll ans = 0;
  for (int i = 2; i < 2000000; i++) {
    if (primeNumber(i)) {
      ans += i;
    }
  }
  cout << ans << "\n";
  return 0;
}
