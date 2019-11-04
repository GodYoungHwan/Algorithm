#include <iostream>
#include <string>
#include <cassert>
#include <sstream>

std::string compress(const std::string &input) {
  if (input.length() == 0)
    return "";

  std::stringstream ss;
  char prev = input[0];
  int count = 0;
  for (auto c : input) {
    if (prev != c) {
      ss << prev << count;
      prev = c;
      count = 1;
    } else {
      ++count;
    }
  }
  ss << prev << count;
  return ss.str();
}

int main() {
  assert(compress("aaabbcccccca") == "a3b2c6a1");
}