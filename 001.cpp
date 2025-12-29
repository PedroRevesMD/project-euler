#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i = 1, val = 1000, ans = 0;

  while (i < val) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans += i;
    }
    i++;
  }

  cout << ans << "\n";
}
