#include <bits/stdc++.h>
using namespace std;

int triangularNumber(long long x) {
  int count = 0;
  for (int i = 1; i * i <= x; i++) {
    if (x % i == 0) {
      count++;
      if (i != x / i) {
        count++;
      }
    }
  }

  return count;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long triangular = 0;
  int n = 1;

  while (true) {
    triangular += n;

    if (triangularNumber(triangular) > 500) {
      cout << triangular << "\n";
      break;
    }
    n++;
  }
  return 0;
}
