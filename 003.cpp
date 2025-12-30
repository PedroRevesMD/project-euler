#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll val = 600851475143;
  int i = 2;
  int lf = 0;

  while (val != 1) {
    if (val % i == 0) {
      while (val % i == 0) {
        val /= i;
      }

      lf = i;
    }
    i++;
  }

  cout << lf << "\n";
}
