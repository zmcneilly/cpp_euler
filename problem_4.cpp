#include <iostream>
#include <sstream>
#include <string>

const int max = 1000;
const int min = 100;

bool palindrom(int num) {
  std::string str_num;
  std::ostringstream convert;
  convert << num;
  str_num = convert.str();
  int l = str_num.length();
  if (l & 1 == 1) {
    return false;
  }
  for (int i=0; i < l/2; i++) {
    if (str_num[i] != str_num[l-i-1]) {
      return false;
    }
  }
  return true;
}

int main() {
  int result = 0;
  for (int x=max; x >= min; x--) {
    int test = result + 1;
    for (int y=max; test >= result; y--) {
      test = x * y;
      if (palindrom(test) == true && test > result) {
        result = test;
      }
    }
  }
  std::cout << result;
}
