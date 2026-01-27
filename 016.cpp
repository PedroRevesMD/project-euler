#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  vector<int> digits;
  digits.push_back(1);

  for(int i = 0; i < 1000; i++) {
      int val = 0;
      for (int &digit : digits) {
          int product = digit * 2 + val;
          digit = product % 10;
          val = product / 10;
      }

      if(val > 0 ) {
          digits.push_back(val);
      }
  }

  ll ans = 0;
  for(int digit: digits) {
      ans += digit;
  }

  cout << ans <<'\n';
}
