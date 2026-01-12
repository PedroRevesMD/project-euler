#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int val = 100;
  ll square_of_sum = 0;
  ll sum_of_squares = 0;

  for (int i = 0; i <= val; ++i) {
    sum_of_squares += i * i;
    square_of_sum += i;
  }

  square_of_sum *= square_of_sum;

  cout << square_of_sum - sum_of_squares << "\n";
}
