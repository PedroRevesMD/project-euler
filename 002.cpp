#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll limit = 4000000;
  ll ans = 0;
  ll fib1 = 1;
  ll fib2 = 2;

  while (fib2 < limit) {
    if (fib2 % 2 == 0) {
      ans += fib2;
    }

    ll prox = fib1 + fib2;
    fib1 = fib2;
    fib2 = prox;
  }
  cout << ans << "\n";
}
