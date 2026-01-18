#include <bits/stdc++.h>
#include <cmath>
#include <cstring>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  const int sum = 1000;

  for (int a = 1; a <= sum / 3; a++) {
    for (int b = a + 1; b <= sum / 2; b++) {
      int c = sum - a - b;
      if (a * a + b * b == c * c) {
        cout << a * b * c << "\n";
      }
    }
  }
  return 0;
}
