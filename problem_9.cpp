#include <iostream>

short goal = 1000;

int main() {
  for (int a=1; a < 998; a++) {
    for (int b=a+1; b < 999 - a; b++) {
      int c = 1000 - a - b;
      if (c <= b) {
        break;
      }
      if (((a * a) + (b * b)) == (c * c)) {
        std::cout << a * b * c << std::endl;
        return 0;
      }
    }
  }
}

