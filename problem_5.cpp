#include <iostream>

const short max = 20;
const short min = 11;

int main() {
  long x = 20;
  bool fin = false;
  while (fin == false) {
    fin = true;
    for (int x1=min; x1 <= max; x1++) {
      if (x % x1 != 0) {
        x += max;
        fin = false;
        break;
      }
    }
  }
  std::cout << x << std::endl;
}
