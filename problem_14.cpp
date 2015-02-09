#include <iostream>

int main() {
  int longest = 0, len = 0, max = 1000000;
  for (int i = 2; i < max; i++) {
    int count = 1;
    unsigned long long value = i; // in C++ size fails silently!
    while (value > 1) {
      count++;
      if (value & 1 == 1) {
        value = (3 * value) + 1;
      }
      else {
        value = value / 2;
      }
    }
    if (count > len) {
      len = count;
      longest = i;
    }
  }
  std::cout << longest << std::endl;
}
