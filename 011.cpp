#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r = 20;
  int c = 20;
  int matrix[20][20];

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> matrix[i][j];
    }
  }

  int best = 0;
  for (int a = 0; a < r; a++) {
    for (int b = 0; b < c; b++) {
      if (b + 3 < 20) {
        int curr = matrix[b][a] * matrix[b + 1][a] * matrix[b + 2][a] *
                   matrix[b + 3][a];
        if (best < curr) {
          best = curr;
        }
      }

      if (a + 3 < 20) {
        int curr = matrix[b][a] * matrix[b][a + 1] * matrix[b][a + 2] *
                   matrix[b][a + 3];
        if (best < curr) {
          best = curr;
        }
      }

      if (a + 3 < 20 && b + 3 < 20) {
        int curr = matrix[b][a] * matrix[b + 1][a + 1] * matrix[b + 2][a + 2] *
                   matrix[b + 3][a + 3];
        if (best < curr) {
          best = curr;
        }
      }

      if (b + 3 < 20 && a >= 3) {
        int curr = matrix[b][a] * matrix[b + 1][a - 1] * matrix[b + 2][a - 2] *
                   matrix[b + 3][a - 3];
        if (best < curr) {
          best = curr;
        }
      }
    }
  }
  cout << best << "\n";
}
