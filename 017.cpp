#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;

string number_to_word(int number) {
  static const std::unordered_map<int, std::string> special_cases = {
      {1, "one"},        {2, "two"},       {3, "three"},     {4, "four"},
      {5, "five"},       {6, "six"},       {7, "seven"},     {8, "eight"},
      {9, "nine"},       {10, "ten"},      {11, "eleven"},   {12, "twelve"},
      {13, "thirteen"},  {14, "fourteen"}, {15, "fifteen"},  {16, "sixteen"},
      {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},
  };
  static const std::unordered_map<int, std::string> tens = {
      {2, "twenty"}, {3, "thirty"},  {4, "forty"},  {5, "fifty"},
      {6, "sixty"},  {7, "seventy"}, {8, "eighty"}, {9, "ninety"},
  };

  if (auto it = special_cases.find(number); it != special_cases.end()) {
    return it->second;
  }

  if (number < 100) {
    int t = number / 10;
    int u = number % 10;
    return tens.at(t) + (u == 0 ? "" : number_to_word(u));
  }

  if (number < 1000) {
    int h = number / 100;
    int rest = number % 100;
    return number_to_word(h) + "hundred" +
           (rest == 0 ? "" : "and" + number_to_word(rest));
  }

  if (number < 10000) {
    int th = number / 1000;
    int rest = number % 1000;
    return number_to_word(th) + "thousand" +
           (rest == 0 ? "" : "and" + number_to_word(rest));
  }

  return "";
}

int main() {
  int limit = 1001;
  int total = 0;
  for (int i = 1; i < limit; i++) {
    total += static_cast<int>(number_to_word(i).size());
  }

  cout << total << "\n";
}
