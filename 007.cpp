#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

bool isPrime(int x) {
  if (x == 1)
    return false;

  for (int i = 2; i <= sqrt(x); ++i) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int count = 0;

  for (int i = 2;; i++) {
    if (isPrime(i)) {
      ++count;
      if (count == 10001) {
        cout << i << "\n";
        break;
      }
    }
  }

  return 0;
}
