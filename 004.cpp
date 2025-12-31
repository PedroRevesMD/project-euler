#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int largestPalindrome(int n) {
  // Definir as Restrições (Números de apenas três digitos)
  int max = pow(10, n) - 1;
  int min = 1 + max / 10;
  // Iterar pelos dois números fazer os seus respectivos produtos
  int ans = 0;
  for (int i = max; i >= min; i--) {
    for (int j = i; j >= min; j--) {
      int p = i * j;
      if (p < ans) {
        break;
      }
      int n = p;
      int reverse = 0;

      while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
      }

      if (p == reverse && p > ans) {
        ans = p;
      }
    }
  }

  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << largestPalindrome(3) << "\n";
}
