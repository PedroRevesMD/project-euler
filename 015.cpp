#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll j = 1, val = 20;

  for(int i =1; i <= val; i++) {
      j = j * (i + val) / i;
  }

  cout << j << "\n";
}
